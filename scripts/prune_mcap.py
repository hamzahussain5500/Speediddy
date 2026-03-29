#!/usr/bin/env python3
"""Prune an MCAP file to a minimal subset of topics.

Default behavior keeps only `/constructor0/state_estimation`.

Example:
    python3 scripts/prune_mcap.py \
      --input /home/hamza/Desktop/hackathon_wheel_to_wheel.mcap \
      --output /home/hamza/Desktop/hackathon_wheel_to_wheel_state_only.mcap
"""

from __future__ import annotations

import argparse
from pathlib import Path
from typing import Dict, Iterable, Optional

from mcap.reader import make_reader
from mcap.writer import Writer


def _normalize_topics(topics: Iterable[str]) -> list[str]:
    return sorted({t.strip() for t in topics if t and t.strip()})


def prune_mcap(input_path: Path, output_path: Path, keep_topics: list[str]) -> None:
    if input_path.resolve() == output_path.resolve():
        raise ValueError("Input and output paths must be different")

    if not input_path.exists():
        raise FileNotFoundError(f"Input MCAP not found: {input_path}")

    output_path.parent.mkdir(parents=True, exist_ok=True)

    # Maps old schema/channel IDs -> new writer IDs
    schema_id_map: Dict[int, int] = {}
    channel_id_map: Dict[int, int] = {}

    kept = 0
    total = 0
    first_log_time_ns: Optional[int] = None
    last_log_time_ns: Optional[int] = None

    with input_path.open("rb") as in_f, output_path.open("wb") as out_f:
        reader = make_reader(in_f)
        writer = Writer(out_f)
        writer.start()

        for schema, channel, message in reader.iter_messages(topics=keep_topics):
            total += 1

            # Register schema lazily when first needed.
            if schema is not None and schema.id not in schema_id_map:
                new_schema_id = writer.register_schema(
                    name=schema.name,
                    encoding=schema.encoding,
                    data=schema.data,
                )
                schema_id_map[schema.id] = new_schema_id

            # Register channel lazily when first needed.
            if channel.id not in channel_id_map:
                old_schema_id = channel.schema_id
                if old_schema_id == 0:
                    new_schema_id = 0
                else:
                    if old_schema_id not in schema_id_map:
                        raise RuntimeError(
                            f"Schema id {old_schema_id} for channel '{channel.topic}' was not registered"
                        )
                    new_schema_id = schema_id_map[old_schema_id]

                new_channel_id = writer.register_channel(
                    topic=channel.topic,
                    message_encoding=channel.message_encoding,
                    schema_id=new_schema_id,
                    metadata=dict(channel.metadata),
                )
                channel_id_map[channel.id] = new_channel_id

            writer.add_message(
                channel_id=channel_id_map[channel.id],
                log_time=message.log_time,
                publish_time=message.publish_time,
                sequence=message.sequence,
                data=message.data,
            )

            kept += 1
            if first_log_time_ns is None:
                first_log_time_ns = message.log_time
            last_log_time_ns = message.log_time

        writer.finish()

    print("\n[done] MCAP prune completed")
    print(f"  input : {input_path}")
    print(f"  output: {output_path}")
    print(f"  topics kept: {', '.join(keep_topics)}")
    print(f"  messages kept: {kept}")

    if first_log_time_ns is not None and last_log_time_ns is not None:
        duration_s = (last_log_time_ns - first_log_time_ns) * 1e-9
        print(f"  span: {duration_s:.3f} s")


def main() -> None:
    parser = argparse.ArgumentParser(description="Prune MCAP to selected topic(s)")
    parser.add_argument("--input", type=Path, required=True, help="Input MCAP path")
    parser.add_argument("--output", type=Path, required=True, help="Output MCAP path")
    parser.add_argument(
        "--topic",
        action="append",
        default=["/constructor0/state_estimation"],
        help="Topic to keep (repeatable). Default keeps /constructor0/state_estimation",
    )
    args = parser.parse_args()

    keep_topics = _normalize_topics(args.topic)
    if not keep_topics:
        raise SystemExit("No topics specified to keep")

    prune_mcap(args.input, args.output, keep_topics)


if __name__ == "__main__":
    main()
