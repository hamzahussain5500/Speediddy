# generated from
# ament_cmake_core/cmake/symlink_install/ament_cmake_symlink_install.cmake.in

# create empty symlink install manifest before starting install step
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt")

#
# Reimplement CMake install(DIRECTORY) command to use symlinks instead of
# copying resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_directory cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "DIRECTORY;PATTERN;PATTERN_EXCLUDE" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_directory() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/hamza/hackathon_ws/install/sd_can_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # default pattern to include
  if(NOT ARG_PATTERN)
    set(ARG_PATTERN "*")
  endif()

  # iterate over directories
  foreach(dir ${ARG_DIRECTORY})
    # make dir an absolute path
    if(NOT IS_ABSOLUTE "${dir}")
      set(dir "${cmake_current_source_dir}/${dir}")
    endif()

    if(EXISTS "${dir}")
      # if directory has no trailing slash
      # append folder name to destination
      set(destination "${ARG_DESTINATION}")
      string(LENGTH "${dir}" length)
      math(EXPR offset "${length} - 1")
      string(SUBSTRING "${dir}" ${offset} 1 dir_last_char)
      if(NOT dir_last_char STREQUAL "/")
        get_filename_component(destination_name "${dir}" NAME)
        set(destination "${destination}/${destination_name}")
      else()
        # remove trailing slash
        string(SUBSTRING "${dir}" 0 ${offset} dir)
      endif()
      
      # Create destination directory.
      # This does *not* solve the problem of empty directories WITHIN the install tree,
      # but does make sure that the top-level directory specified by the caller gets created.
      file(MAKE_DIRECTORY "${destination}")

      # glob recursive files
      set(relative_files "")
      foreach(pattern ${ARG_PATTERN})
        file(
          GLOB_RECURSE
          include_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT include_files STREQUAL "")
          list(APPEND relative_files ${include_files})
        endif()
      endforeach()
      foreach(pattern ${ARG_PATTERN_EXCLUDE})
        file(
          GLOB_RECURSE
          exclude_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT exclude_files STREQUAL "")
          list(REMOVE_ITEM relative_files ${exclude_files})
        endif()
      endforeach()
      list(SORT relative_files)

      foreach(relative_file ${relative_files})
        set(absolute_file "${dir}/${relative_file}")
        # determine link name for file including destination path
        set(symlink "${destination}/${relative_file}")

        # ensure that destination exists
        get_filename_component(symlink_dir "${symlink}" PATH)
        if(NOT EXISTS "${symlink_dir}")
          file(MAKE_DIRECTORY "${symlink_dir}")
        endif()

        _ament_cmake_symlink_install_create_symlink("${absolute_file}" "${symlink}")
      endforeach()
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_directory() can't find '${dir}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(FILES) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_files cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION;RENAME" "FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/hamza/hackathon_ws/install/sd_can_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  if(ARG_RENAME)
    list(LENGTH ARG_FILES file_count)
    if(NOT file_count EQUAL 1)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "RENAME argument but not with a single file")
    endif()
  endif()

  # iterate over files
  foreach(file ${ARG_FILES})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      if(NOT ARG_RENAME)
        set(symlink "${ARG_DESTINATION}/${filename}")
      else()
        set(symlink "${ARG_DESTINATION}/${ARG_RENAME}")
      endif()
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_files() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(PROGRAMS) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_programs cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "PROGRAMS" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_programs() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/hamza/hackathon_ws/install/sd_can_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # iterate over programs
  foreach(file ${ARG_PROGRAMS})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${ARG_DESTINATION}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_programs() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(TARGETS) command to use symlinks instead of copying
# resources.
#
# :param TARGET_FILES: the absolute files, replacing the name of targets passed
#   in as TARGETS
# :type TARGET_FILES: list of files
# :param ARGN: the same arguments as the CMake install command except that
#   keywords identifying the kind of type and the DESTINATION keyword must be
#   joined with an underscore, e.g. ARCHIVE_DESTINATION.
# :type ARGN: various
#
function(ament_cmake_symlink_install_targets)
  cmake_parse_arguments(ARG "OPTIONAL" "ARCHIVE_DESTINATION;DESTINATION;LIBRARY_DESTINATION;RUNTIME_DESTINATION"
    "TARGETS;TARGET_FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_targets() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # iterate over target files
  foreach(file ${ARG_TARGET_FILES})
    if(NOT IS_ABSOLUTE "${file}")
      message(FATAL_ERROR "ament_cmake_symlink_install_targets() target file "
        "'${file}' must be an absolute path")
    endif()

    # determine destination of file based on extension
    set(destination "")
    get_filename_component(fileext "${file}" EXT)
    if(fileext STREQUAL ".a" OR fileext STREQUAL ".lib")
      set(destination "${ARG_ARCHIVE_DESTINATION}")
    elseif(fileext STREQUAL ".dylib" OR fileext MATCHES "\\.so(\\.[0-9]+)?(\\.[0-9]+)?(\\.[0-9]+)?$")
      set(destination "${ARG_LIBRARY_DESTINATION}")
    elseif(fileext STREQUAL "" OR fileext STREQUAL ".dll" OR fileext STREQUAL ".exe")
      set(destination "${ARG_RUNTIME_DESTINATION}")
    endif()
    if(destination STREQUAL "")
      set(destination "${ARG_DESTINATION}")
    endif()

    # make destination an absolute path and ensure that it exists
    if(NOT IS_ABSOLUTE "${destination}")
      set(destination "/home/hamza/hackathon_ws/install/sd_can_msgs/${destination}")
    endif()
    if(NOT EXISTS "${destination}")
      file(MAKE_DIRECTORY "${destination}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${destination}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_targets() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

function(_ament_cmake_symlink_install_create_symlink absolute_file symlink)
  # register symlink for being removed during install step
  file(APPEND "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt"
    "${symlink}\n")

  # avoid any work if correct symlink is already in place
  if(EXISTS "${symlink}" AND IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    get_filename_component(real_absolute_file "${absolute_file}" REALPATH)
    if(destination STREQUAL real_absolute_file)
      message(STATUS "Up-to-date symlink: ${symlink}")
      return()
    endif()
  endif()

  message(STATUS "Symlinking: ${symlink}")
  if(EXISTS "${symlink}" OR IS_SYMLINK "${symlink}")
    file(REMOVE "${symlink}")
  endif()

  execute_process(
    COMMAND "/usr/bin/cmake" "-E" "create_symlink"
      "${absolute_file}"
      "${symlink}"
  )
  # the CMake command does not provide a return code so check manually
  if(NOT EXISTS "${symlink}" OR NOT IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    message(FATAL_ERROR
      "Could not create symlink '${symlink}' pointing to '${absolute_file}'")
  endif()
endfunction()

# end of template

message(STATUS "Execute custom install script")

# begin of custom install code

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/sd_can_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/sd_can_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")

# install(DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_generator_c/sd_can_msgs/" "DESTINATION" "include/sd_can_msgs/sd_can_msgs" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_generator_c/sd_can_msgs/" "DESTINATION" "include/sd_can_msgs/sd_can_msgs" "PATTERN" "*.h")

# install(FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/sd_can_msgs/environment")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/sd_can_msgs/environment")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/sd_can_msgs/environment")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/sd_can_msgs/environment")

# install(DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_typesupport_fastrtps_c/sd_can_msgs/" "DESTINATION" "include/sd_can_msgs/sd_can_msgs" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_typesupport_fastrtps_c/sd_can_msgs/" "DESTINATION" "include/sd_can_msgs/sd_can_msgs" "PATTERN_EXCLUDE" "*.cpp")

# install(DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_generator_cpp/sd_can_msgs/" "DESTINATION" "include/sd_can_msgs/sd_can_msgs" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_generator_cpp/sd_can_msgs/" "DESTINATION" "include/sd_can_msgs/sd_can_msgs" "PATTERN" "*.hpp")

# install(DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_typesupport_fastrtps_cpp/sd_can_msgs/" "DESTINATION" "include/sd_can_msgs/sd_can_msgs" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_typesupport_fastrtps_cpp/sd_can_msgs/" "DESTINATION" "include/sd_can_msgs/sd_can_msgs" "PATTERN_EXCLUDE" "*.cpp")

# install(DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_typesupport_introspection_c/sd_can_msgs/" "DESTINATION" "include/sd_can_msgs/sd_can_msgs" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_typesupport_introspection_c/sd_can_msgs/" "DESTINATION" "include/sd_can_msgs/sd_can_msgs" "PATTERN" "*.h")

# install(DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_typesupport_introspection_cpp/sd_can_msgs/" "DESTINATION" "include/sd_can_msgs/sd_can_msgs" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_typesupport_introspection_cpp/sd_can_msgs/" "DESTINATION" "include/sd_can_msgs/sd_can_msgs" "PATTERN" "*.hpp")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/sd_can_msgs/environment")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/sd_can_msgs/environment")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/sd_can_msgs/environment")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/sd_can_msgs/environment")

# install(DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_python/sd_can_msgs/sd_can_msgs.egg-info/" "DESTINATION" "local/lib/python3.10/dist-packages/sd_can_msgs-0.1.0-py3.10.egg-info")
ament_cmake_symlink_install_directory("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_python/sd_can_msgs/sd_can_msgs.egg-info/" "DESTINATION" "local/lib/python3.10/dist-packages/sd_can_msgs-0.1.0-py3.10.egg-info")

# install(DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_generator_py/sd_can_msgs/" "DESTINATION" "local/lib/python3.10/dist-packages/sd_can_msgs" "PATTERN_EXCLUDE" "*.pyc" "PATTERN_EXCLUDE" "__pycache__")
ament_cmake_symlink_install_directory("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_generator_py/sd_can_msgs/" "DESTINATION" "local/lib/python3.10/dist-packages/sd_can_msgs" "PATTERN_EXCLUDE" "*.pyc" "PATTERN_EXCLUDE" "__pycache__")

# install("TARGETS" "sd_can_msgs__rosidl_typesupport_fastrtps_c__pyext" "DESTINATION" "local/lib/python3.10/dist-packages/sd_can_msgs")
include("/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_symlink_install_targets_0_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "sd_can_msgs__rosidl_typesupport_introspection_c__pyext" "DESTINATION" "local/lib/python3.10/dist-packages/sd_can_msgs")
include("/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_symlink_install_targets_1_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "sd_can_msgs__rosidl_typesupport_c__pyext" "DESTINATION" "local/lib/python3.10/dist-packages/sd_can_msgs")
include("/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_symlink_install_targets_2_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_index/share/ament_index/resource_index/rust_packages/sd_can_msgs" "DESTINATION" "share/ament_index/resource_index/rust_packages")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_index/share/ament_index/resource_index/rust_packages/sd_can_msgs" "DESTINATION" "share/ament_index/resource_index/rust_packages")

# install(DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_generator_rs/sd_can_msgs/rust" "DESTINATION" "share/sd_can_msgs")
ament_cmake_symlink_install_directory("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" DIRECTORY "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_generator_rs/sd_can_msgs/rust" "DESTINATION" "share/sd_can_msgs")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/BSURanges01.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/BSURanges01.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/BSURanges02.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/BSURanges02.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/BSUStatus01.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/BSUStatus01.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/BSUStatus01Legacy.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/BSUStatus01Legacy.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/BSUStatus01Updated.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/BSUStatus01Updated.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/CbaStatusFl.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/CbaStatusFl.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/CbaStatusFr.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/CbaStatusFr.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/CbaStatusRl.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/CbaStatusRl.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/CbaStatusRr.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/CbaStatusRr.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/DiagnosticWord01.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/DiagnosticWord01.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/DiagnosticWord01Legacy.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/DiagnosticWord01Legacy.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/DiagnosticWord01Updated.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/DiagnosticWord01Updated.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/DiagnosticWord02.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/DiagnosticWord02.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/DiagnosticWord02Legacy.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/DiagnosticWord02Legacy.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/DiagnosticWord02Updated.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/DiagnosticWord02Updated.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/EMStatus01.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/EMStatus01.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/EMStatus01Legacy.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/EMStatus01Legacy.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/EMStatus01Updated.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/EMStatus01Updated.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/FlagInfoOutput.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/FlagInfoOutput.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLMsg01.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLMsg01.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLMsg02.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLMsg02.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLMsg03.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLMsg03.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLMsg03Legacy.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLMsg03Legacy.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLMsg03Updated.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLMsg03Updated.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLMsg04.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLMsg04.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLMsg05.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLMsg05.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLMsg06.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLMsg06.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/ICEStatus01.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/ICEStatus01.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/ICEStatus02.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/ICEStatus02.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/PSAStatus01.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/PSAStatus01.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/PSAStatus02.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/PSAStatus02.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/PdUsStatus01.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/PdUsStatus01.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/PdUsStatus01Legacy.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/PdUsStatus01Legacy.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/PdUsStatus01Updated.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/PdUsStatus01Updated.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/RcStatus01.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/RcStatus01.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/SwVersions01.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/SwVersions01.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/SwVersions01Legacy.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/SwVersions01Legacy.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/SwVersions01Updated.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/SwVersions01Updated.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/SwVersions02.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/SwVersions02.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/SwVersions03.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/SwVersions03.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/WheelsSpeed01.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/WheelsSpeed01.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560BadeniaMisc.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560BadeniaMisc.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560BrakeDiskTemp.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560BrakeDiskTemp.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560MLStatus.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560MLStatus.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560Misc4.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560Misc4.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560Misc5.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560Misc5.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560Pitot.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560Pitot.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560Pitot0.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560Pitot0.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560Pitot1.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560Pitot1.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560PowertrainMisc.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560PowertrainMisc.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560PowertrainPress.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560PowertrainPress.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560PowertrainTemp.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560PowertrainTemp.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560RideFront.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560RideFront.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560RideRear.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560RideRear.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560TpmsFront.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560TpmsFront.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560TpmsRear.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560TpmsRear.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560TyreSurfaceTempFront.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560TyreSurfaceTempFront.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560TyreSurfaceTempRear.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560TyreSurfaceTempRear.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560WheelLoad.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560WheelLoad.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560ZAccelBody.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/Badenia560ZAccelBody.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLPCInfo1.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/HLPCInfo1.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/MM710TX1ZAY.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/MM710TX1ZAY.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/MM710TX2XAX.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/MM710TX2XAX.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/MM710TX3YAZ.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/MM710TX3YAZ.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/TEXIB6rTx1.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/TEXIB6rTx1.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/TEXIB6rTx2.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/TEXIB6rTx2.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerAccBody.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerAccBody.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerAccHorAccCBody.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerAccHorAccCBody.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerAngVelBody.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerAngVelBody.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerAngVelHor.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerAngVelHor.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerCorrevit.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerCorrevit.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerDistance.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerDistance.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerPitchRoll.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerPitchRoll.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerStatus.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerStatus.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerVelAngle.idl" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_adapter/sd_can_msgs/msg/KistlerVelAngle.idl" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/BSURanges01.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/BSURanges01.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/BSURanges02.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/BSURanges02.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/BSUStatus01.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/BSUStatus01.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/BSUStatus01Legacy.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/BSUStatus01Legacy.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/BSUStatus01Updated.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/BSUStatus01Updated.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/CbaStatusFl.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/CbaStatusFl.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/CbaStatusFr.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/CbaStatusFr.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/CbaStatusRl.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/CbaStatusRl.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/CbaStatusRr.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/CbaStatusRr.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/DiagnosticWord01.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/DiagnosticWord01.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/DiagnosticWord01Legacy.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/DiagnosticWord01Legacy.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/DiagnosticWord01Updated.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/DiagnosticWord01Updated.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/DiagnosticWord02.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/DiagnosticWord02.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/DiagnosticWord02Legacy.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/DiagnosticWord02Legacy.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/DiagnosticWord02Updated.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/DiagnosticWord02Updated.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/EMStatus01.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/EMStatus01.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/EMStatus01Legacy.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/EMStatus01Legacy.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/EMStatus01Updated.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/EMStatus01Updated.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/FlagInfoOutput.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/FlagInfoOutput.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/HLMsg01.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/HLMsg01.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/HLMsg02.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/HLMsg02.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/HLMsg03.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/HLMsg03.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/HLMsg03Legacy.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/HLMsg03Legacy.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/HLMsg03Updated.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/HLMsg03Updated.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/HLMsg04.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/HLMsg04.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/HLMsg05.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/HLMsg05.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/HLMsg06.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/HLMsg06.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/ICEStatus01.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/ICEStatus01.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/ICEStatus02.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/ICEStatus02.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/PSAStatus01.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/PSAStatus01.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/PSAStatus02.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/PSAStatus02.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/PdUsStatus01.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/PdUsStatus01.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/PdUsStatus01Legacy.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/PdUsStatus01Legacy.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/PdUsStatus01Updated.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/PdUsStatus01Updated.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/RcStatus01.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/RcStatus01.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/SwVersions01.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/SwVersions01.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/SwVersions01Legacy.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/SwVersions01Legacy.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/SwVersions01Updated.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/SwVersions01Updated.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/SwVersions02.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/SwVersions02.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/SwVersions03.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/SwVersions03.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/WheelsSpeed01.msg" "DESTINATION" "share/sd_can_msgs/BSU")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/BSU/WheelsSpeed01.msg" "DESTINATION" "share/sd_can_msgs/BSU")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560BadeniaMisc.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560BadeniaMisc.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560BrakeDiskTemp.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560BrakeDiskTemp.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560MLStatus.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560MLStatus.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560Misc4.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560Misc4.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560Misc5.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560Misc5.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560Pitot.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560Pitot.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560Pitot0.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560Pitot0.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560Pitot1.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560Pitot1.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560PowertrainMisc.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560PowertrainMisc.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560PowertrainPress.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560PowertrainPress.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560PowertrainTemp.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560PowertrainTemp.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560RideFront.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560RideFront.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560RideRear.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560RideRear.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560TpmsFront.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560TpmsFront.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560TpmsRear.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560TpmsRear.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560TyreSurfaceTempFront.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560TyreSurfaceTempFront.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560TyreSurfaceTempRear.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560TyreSurfaceTempRear.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560WheelLoad.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560WheelLoad.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560ZAccelBody.msg" "DESTINATION" "share/sd_can_msgs/Badenia")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/Badenia/Badenia560ZAccelBody.msg" "DESTINATION" "share/sd_can_msgs/Badenia")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/HLPC/HLPCInfo1.msg" "DESTINATION" "share/sd_can_msgs/HLPC")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/HLPC/HLPCInfo1.msg" "DESTINATION" "share/sd_can_msgs/HLPC")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/MM710/MM710TX1ZAY.msg" "DESTINATION" "share/sd_can_msgs/MM710")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/MM710/MM710TX1ZAY.msg" "DESTINATION" "share/sd_can_msgs/MM710")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/MM710/MM710TX2XAX.msg" "DESTINATION" "share/sd_can_msgs/MM710")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/MM710/MM710TX2XAX.msg" "DESTINATION" "share/sd_can_msgs/MM710")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/MM710/MM710TX3YAZ.msg" "DESTINATION" "share/sd_can_msgs/MM710")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/MM710/MM710TX3YAZ.msg" "DESTINATION" "share/sd_can_msgs/MM710")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/TEXIB6/TEXIB6rTx1.msg" "DESTINATION" "share/sd_can_msgs/TEXIB6")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/TEXIB6/TEXIB6rTx1.msg" "DESTINATION" "share/sd_can_msgs/TEXIB6")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/TEXIB6/TEXIB6rTx2.msg" "DESTINATION" "share/sd_can_msgs/TEXIB6")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/TEXIB6/TEXIB6rTx2.msg" "DESTINATION" "share/sd_can_msgs/TEXIB6")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerAccBody.msg" "DESTINATION" "share/sd_can_msgs/kistler")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerAccBody.msg" "DESTINATION" "share/sd_can_msgs/kistler")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerAccHorAccCBody.msg" "DESTINATION" "share/sd_can_msgs/kistler")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerAccHorAccCBody.msg" "DESTINATION" "share/sd_can_msgs/kistler")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerAngVelBody.msg" "DESTINATION" "share/sd_can_msgs/kistler")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerAngVelBody.msg" "DESTINATION" "share/sd_can_msgs/kistler")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerAngVelHor.msg" "DESTINATION" "share/sd_can_msgs/kistler")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerAngVelHor.msg" "DESTINATION" "share/sd_can_msgs/kistler")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerCorrevit.msg" "DESTINATION" "share/sd_can_msgs/kistler")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerCorrevit.msg" "DESTINATION" "share/sd_can_msgs/kistler")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerDistance.msg" "DESTINATION" "share/sd_can_msgs/kistler")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerDistance.msg" "DESTINATION" "share/sd_can_msgs/kistler")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerPitchRoll.msg" "DESTINATION" "share/sd_can_msgs/kistler")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerPitchRoll.msg" "DESTINATION" "share/sd_can_msgs/kistler")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerStatus.msg" "DESTINATION" "share/sd_can_msgs/kistler")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerStatus.msg" "DESTINATION" "share/sd_can_msgs/kistler")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerVelAngle.msg" "DESTINATION" "share/sd_can_msgs/kistler")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/msg/kistler/KistlerVelAngle.msg" "DESTINATION" "share/sd_can_msgs/kistler")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/BSURanges01.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/BSURanges01.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/BSURanges02.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/BSURanges02.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/BSUStatus01.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/BSUStatus01.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/BSUStatus01Legacy.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/BSUStatus01Legacy.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/BSUStatus01Updated.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/BSUStatus01Updated.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/CbaStatusFl.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/CbaStatusFl.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/CbaStatusFr.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/CbaStatusFr.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/CbaStatusRl.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/CbaStatusRl.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/CbaStatusRr.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/CbaStatusRr.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/DiagnosticWord01.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/DiagnosticWord01.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/DiagnosticWord01Legacy.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/DiagnosticWord01Legacy.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/DiagnosticWord01Updated.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/DiagnosticWord01Updated.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/DiagnosticWord02.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/DiagnosticWord02.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/DiagnosticWord02Legacy.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/DiagnosticWord02Legacy.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/DiagnosticWord02Updated.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/DiagnosticWord02Updated.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/EMStatus01.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/EMStatus01.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/EMStatus01Legacy.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/EMStatus01Legacy.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/EMStatus01Updated.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/EMStatus01Updated.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/FlagInfoOutput.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/FlagInfoOutput.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLMsg01.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLMsg01.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLMsg02.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLMsg02.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLMsg03.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLMsg03.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLMsg03Legacy.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLMsg03Legacy.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLMsg03Updated.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLMsg03Updated.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLMsg04.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLMsg04.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLMsg05.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLMsg05.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLMsg06.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLMsg06.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/ICEStatus01.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/ICEStatus01.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/ICEStatus02.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/ICEStatus02.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/PSAStatus01.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/PSAStatus01.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/PSAStatus02.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/PSAStatus02.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/PdUsStatus01.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/PdUsStatus01.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/PdUsStatus01Legacy.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/PdUsStatus01Legacy.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/PdUsStatus01Updated.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/PdUsStatus01Updated.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/RcStatus01.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/RcStatus01.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/SwVersions01.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/SwVersions01.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/SwVersions01Legacy.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/SwVersions01Legacy.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/SwVersions01Updated.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/SwVersions01Updated.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/SwVersions02.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/SwVersions02.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/SwVersions03.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/SwVersions03.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/WheelsSpeed01.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/WheelsSpeed01.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560BadeniaMisc.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560BadeniaMisc.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560BrakeDiskTemp.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560BrakeDiskTemp.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560MLStatus.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560MLStatus.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560Misc4.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560Misc4.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560Misc5.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560Misc5.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560Pitot.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560Pitot.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560Pitot0.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560Pitot0.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560Pitot1.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560Pitot1.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560PowertrainMisc.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560PowertrainMisc.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560PowertrainPress.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560PowertrainPress.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560PowertrainTemp.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560PowertrainTemp.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560RideFront.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560RideFront.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560RideRear.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560RideRear.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560TpmsFront.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560TpmsFront.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560TpmsRear.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560TpmsRear.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560TyreSurfaceTempFront.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560TyreSurfaceTempFront.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560TyreSurfaceTempRear.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560TyreSurfaceTempRear.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560WheelLoad.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560WheelLoad.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560ZAccelBody.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/Badenia560ZAccelBody.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLPCInfo1.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/HLPCInfo1.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/MM710TX1ZAY.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/MM710TX1ZAY.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/MM710TX2XAX.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/MM710TX2XAX.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/MM710TX3YAZ.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/MM710TX3YAZ.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/TEXIB6rTx1.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/TEXIB6rTx1.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/TEXIB6rTx2.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/TEXIB6rTx2.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerAccBody.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerAccBody.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerAccHorAccCBody.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerAccHorAccCBody.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerAngVelBody.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerAngVelBody.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerAngVelHor.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerAngVelHor.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerCorrevit.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerCorrevit.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerDistance.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerDistance.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerPitchRoll.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerPitchRoll.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerStatus.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerStatus.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerVelAngle.msg" "DESTINATION" "share/sd_can_msgs/msg")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/msg/KistlerVelAngle.msg" "DESTINATION" "share/sd_can_msgs/msg")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/sd_can_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/sd_can_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/sd_can_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/sd_can_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")

# install(FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/sd_can_msgs/environment")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/sd_can_msgs/environment")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/sd_can_msgs/environment")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/sd_can_msgs/environment")

# install(FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/sd_can_msgs/environment")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/sd_can_msgs/environment")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/sd_can_msgs/environment")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/sd_can_msgs/environment")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/sd_can_msgs")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/sd_can_msgs")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/sd_can_msgs")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/sd_can_msgs")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/sd_can_msgs")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/sd_can_msgs")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/sd_can_msgs")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/sd_can_msgs")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/sd_can_msgs")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/sd_can_msgs")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_index/share/ament_index/resource_index/packages/sd_can_msgs" "DESTINATION" "share/ament_index/resource_index/packages")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_index/share/ament_index/resource_index/packages/sd_can_msgs" "DESTINATION" "share/ament_index/resource_index/packages")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/sd_can_msgs/cmake")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/sd_can_msgs/cmake")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/sd_can_msgs/cmake")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/sd_can_msgs/cmake")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/sd_can_msgs/cmake")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/sd_can_msgs/cmake")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/sd_can_msgs/cmake")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/sd_can_msgs/cmake")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/sd_can_msgs/cmake")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/sd_can_msgs/cmake")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/sd_can_msgs/cmake")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/sd_can_msgs/cmake")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/sd_can_msgs/cmake")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/sd_can_msgs/cmake")

# install(FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_core/sd_can_msgsConfig.cmake" "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_core/sd_can_msgsConfig-version.cmake" "DESTINATION" "share/sd_can_msgs/cmake")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_core/sd_can_msgsConfig.cmake" "/home/hamza/hackathon_ws/build/sd_can_msgs/ament_cmake_core/sd_can_msgsConfig-version.cmake" "DESTINATION" "share/sd_can_msgs/cmake")

# install(FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/package.xml" "DESTINATION" "share/sd_can_msgs")
ament_cmake_symlink_install_files("/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs" FILES "/home/hamza/hackathon_ws/src/sd_msgs/sd_can_msgs/package.xml" "DESTINATION" "share/sd_can_msgs")
