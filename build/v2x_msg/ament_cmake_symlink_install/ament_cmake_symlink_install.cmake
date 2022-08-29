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
    set(ARG_DESTINATION "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/install/v2x_msg/${ARG_DESTINATION}")
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
    set(ARG_DESTINATION "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/install/v2x_msg/${ARG_DESTINATION}")
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
    set(ARG_DESTINATION "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/install/v2x_msg/${ARG_DESTINATION}")
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
      set(destination "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/install/v2x_msg/${destination}")
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

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/v2x_msg" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/v2x_msg" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")

# install(DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_generator_c/v2x_msg/" "DESTINATION" "include/v2x_msg" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_generator_c/v2x_msg/" "DESTINATION" "include/v2x_msg" "PATTERN" "*.h")

# install(FILES "/opt/ros/galactic/lib/python3.8/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/v2x_msg/environment")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/opt/ros/galactic/lib/python3.8/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/v2x_msg/environment")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/v2x_msg/environment")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/v2x_msg/environment")

# install(DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_typesupport_fastrtps_c/v2x_msg/" "DESTINATION" "include/v2x_msg" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_typesupport_fastrtps_c/v2x_msg/" "DESTINATION" "include/v2x_msg" "PATTERN_EXCLUDE" "*.cpp")

# install("TARGETS" "v2x_msg__rosidl_typesupport_fastrtps_c" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_symlink_install_targets_0_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_typesupport_fastrtps_cpp/v2x_msg/" "DESTINATION" "include/v2x_msg" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_typesupport_fastrtps_cpp/v2x_msg/" "DESTINATION" "include/v2x_msg" "PATTERN_EXCLUDE" "*.cpp")

# install("TARGETS" "v2x_msg__rosidl_typesupport_fastrtps_cpp" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_symlink_install_targets_1_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_typesupport_introspection_c/v2x_msg/" "DESTINATION" "include/v2x_msg" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_typesupport_introspection_c/v2x_msg/" "DESTINATION" "include/v2x_msg" "PATTERN" "*.h")

# install(DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_generator_cpp/v2x_msg/" "DESTINATION" "include/v2x_msg" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_generator_cpp/v2x_msg/" "DESTINATION" "include/v2x_msg" "PATTERN" "*.hpp")

# install(DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_typesupport_introspection_cpp/v2x_msg/" "DESTINATION" "include/v2x_msg" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_typesupport_introspection_cpp/v2x_msg/" "DESTINATION" "include/v2x_msg" "PATTERN" "*.hpp")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/v2x_msg/environment")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/v2x_msg/environment")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/v2x_msg/environment")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/v2x_msg/environment")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_generator_py/v2x_msg/__init__.py" "DESTINATION" "lib/python3.8/site-packages/v2x_msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_generator_py/v2x_msg/__init__.py" "DESTINATION" "lib/python3.8/site-packages/v2x_msg")

# install(DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_generator_py/v2x_msg/msg/" "DESTINATION" "lib/python3.8/site-packages/v2x_msg/msg" "PATTERN" "*.py")
ament_cmake_symlink_install_directory("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_generator_py/v2x_msg/msg/" "DESTINATION" "lib/python3.8/site-packages/v2x_msg/msg" "PATTERN" "*.py")

# install("TARGETS" "v2x_msg__rosidl_typesupport_fastrtps_c__pyext" "DESTINATION" "lib/python3.8/site-packages/v2x_msg")
include("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_symlink_install_targets_2_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "v2x_msg__rosidl_typesupport_introspection_c__pyext" "DESTINATION" "lib/python3.8/site-packages/v2x_msg")
include("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_symlink_install_targets_3_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "v2x_msg__rosidl_typesupport_c__pyext" "DESTINATION" "lib/python3.8/site-packages/v2x_msg")
include("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_symlink_install_targets_4_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "v2x_msg__python" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_symlink_install_targets_5_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/MAP.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/MAP.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/BSM.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/BSM.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/CSR.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/CSR.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/EVA.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/EVA.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ICA.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ICA.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NMEA.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NMEA.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PDM.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PDM.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PSM.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PSM.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PVD.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PVD.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RSA.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RSA.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RTCM.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RTCM.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SPAT.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SPAT.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SRM.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SRM.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SSM.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SSM.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/TIM.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/TIM.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Latency.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Latency.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/AccelerationSet4Way.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/AccelerationSet4Way.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/AccelSets.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/AccelSets.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/AccelSteerYawRateConfidence.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/AccelSteerYawRateConfidence.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/AdvisorySpeed.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/AdvisorySpeed.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/AllowedManeuvers.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/AllowedManeuvers.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/AntennaOffsetSet.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/AntennaOffsetSet.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ApproachOrLane.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ApproachOrLane.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Area.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Area.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/AxleWeight.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/AxleWeight.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/BrakeSystemStatus.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/BrakeSystemStatus.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/BSMCoreData.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/BSMCoreData.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/BumperHeights.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/BumperHeights.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Circle.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Circle.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ComputedLane.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ComputedLane.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ConfidenceSet.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ConfidenceSet.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ConnectingLane.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ConnectingLane.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Connection.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Connection.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ConnectionManeuverAssist.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ConnectionManeuverAssist.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Content.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Content.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/DataParameters.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/DataParameters.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/DDateTime.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/DDateTime.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Description.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Description.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/EmergencyDetails.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/EmergencyDetails.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ExitService.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ExitService.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ExitServicecontent.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ExitServicecontent.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/FullPositionVector.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/FullPositionVector.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/GenericLane.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/GenericLane.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/GenericSignage.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/GenericSignage.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/GenericSignagecontent.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/GenericSignagecontent.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/GeographicalPath.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/GeographicalPath.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/GeometricProjection.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/GeometricProjection.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/IntersectionAccessPoint.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/IntersectionAccessPoint.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/IntersectionGeometry.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/IntersectionGeometry.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/IntersectionReferenceID.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/IntersectionReferenceID.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/IntersectionState.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/IntersectionState.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/IntersectionStatusObject.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/IntersectionStatusObject.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ITIScodesandtext.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ITIScodesandtext.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ITIScodesandtextcontent.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ITIScodesandtextcontent.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ITISSpeedLimit.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ITISSpeedLimit.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ITISSpeedLimitcontent.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ITISSpeedLimitcontent.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/J1939data.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/J1939data.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/LaneDataAttribute.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/LaneDataAttribute.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/LaneID.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/LaneID.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/MovementEvent.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/MovementEvent.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/MovementState.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/MovementState.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/MsgID.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/MsgID.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeAttributeSetXY.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeAttributeSetXY.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeAttributeSetLL.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeAttributeSetLL.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeListXY.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeListXY.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Nodellmd64b.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Nodellmd64b.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeOffsetPointLL.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeOffsetPointLL.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeOffsetPointXY.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeOffsetPointXY.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeLL.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeLL.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeLL24B.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeLL24B.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeLL28B.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeLL28B.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeLL32B.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeLL32B.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeLL36B.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeLL36B.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeLL44B.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeLL44B.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeLL48B.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeLL48B.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeXY.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeXY.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeXY20b.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeXY20b.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeXY22b.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeXY22b.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeXY24b.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeXY24b.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeXY26b.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeXY26b.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeXY28b.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeXY28b.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeXY32b.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/NodeXY32b.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Object.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Object.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Offset.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Offset.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/OffsetSystem.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/OffsetSystem.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/OffsetXaxis.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/OffsetXaxis.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/OffsetYaxis.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/OffsetYaxis.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PathHistory.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PathHistory.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PathHistoryPoint.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PathHistoryPoint.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PathPrediction.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PathPrediction.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Position3D.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Position3D.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PositionalAccuracy.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PositionalAccuracy.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PositionConfidenceSet.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PositionConfidenceSet.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PrivilegedEvents.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PrivilegedEvents.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PropelledInformation.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/PropelledInformation.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RegionOffsets.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RegionOffsets.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RegionPointSet.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RegionPointSet.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RequestedItem.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RequestedItem.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RequestorDescription.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RequestorDescription.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RequestorPositionVector.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RequestorPositionVector.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RequestorType.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RequestorType.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RestrictionClassAssignment.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RestrictionClassAssignment.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RestrictionUserType.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RestrictionUserType.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RoadSegment.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RoadSegment.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RoadSegmentReferenceID.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RoadSegmentReferenceID.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RoadSignID.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RoadSignID.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RTCMheader.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/RTCMheader.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Sample.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Sample.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ShapePointSet.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ShapePointSet.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SignalRequest.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SignalRequest.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SignalRequesterInfo.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SignalRequesterInfo.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SignalRequestPackage.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SignalRequestPackage.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SignalStatus.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SignalStatus.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SignalStatusPackage.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SignalStatusPackage.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Snapshot.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Snapshot.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SnapshotDistance.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SnapshotDistance.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SnapshotTime.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SnapshotTime.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SpeedandHeadingandThrottleConfidence.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SpeedandHeadingandThrottleConfidence.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SpeedLimit.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/SpeedLimit.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Steering.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/Steering.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/TimeChangeDetails.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/TimeChangeDetails.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/TireData.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/TireData.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/TransitVehicleStatus.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/TransitVehicleStatus.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/TransmissionAndSpeed.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/TransmissionAndSpeed.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/TravelerDataFrame.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/TravelerDataFrame.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ValidRegion.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/ValidRegion.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleClass.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleClass.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleClassification.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleClassification.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleData.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleData.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleID.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleID.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleIdent.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleIdent.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleSafetyExtensions.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleSafetyExtensions.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleSize.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleSize.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleStatus.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleStatus.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleStatusRequest.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/VehicleStatusRequest.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/WeatherReport.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/WeatherReport.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/WiperSet.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/WiperSet.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/WorkZone.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/WorkZone.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/WorkZonecontent.idl" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_adapter/v2x_msg/msg/WorkZonecontent.idl" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/MAP.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/MAP.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/BSM.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/BSM.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/CSR.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/CSR.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/EVA.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/EVA.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ICA.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ICA.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NMEA.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NMEA.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PDM.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PDM.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PSM.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PSM.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PVD.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PVD.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RSA.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RSA.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RTCM.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RTCM.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SPAT.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SPAT.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SRM.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SRM.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SSM.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SSM.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/TIM.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/TIM.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Latency.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Latency.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/AccelerationSet4Way.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/AccelerationSet4Way.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/AccelSets.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/AccelSets.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/AccelSteerYawRateConfidence.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/AccelSteerYawRateConfidence.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/AdvisorySpeed.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/AdvisorySpeed.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/AllowedManeuvers.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/AllowedManeuvers.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/AntennaOffsetSet.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/AntennaOffsetSet.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ApproachOrLane.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ApproachOrLane.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Area.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Area.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/AxleWeight.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/AxleWeight.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/BrakeSystemStatus.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/BrakeSystemStatus.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/BSMCoreData.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/BSMCoreData.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/BumperHeights.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/BumperHeights.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Circle.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Circle.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ComputedLane.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ComputedLane.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ConfidenceSet.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ConfidenceSet.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ConnectingLane.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ConnectingLane.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Connection.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Connection.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ConnectionManeuverAssist.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ConnectionManeuverAssist.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Content.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Content.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/DataParameters.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/DataParameters.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/DDateTime.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/DDateTime.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Description.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Description.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/EmergencyDetails.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/EmergencyDetails.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ExitService.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ExitService.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ExitServicecontent.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ExitServicecontent.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/FullPositionVector.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/FullPositionVector.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/GenericLane.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/GenericLane.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/GenericSignage.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/GenericSignage.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/GenericSignagecontent.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/GenericSignagecontent.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/GeographicalPath.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/GeographicalPath.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/GeometricProjection.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/GeometricProjection.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/IntersectionAccessPoint.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/IntersectionAccessPoint.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/IntersectionGeometry.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/IntersectionGeometry.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/IntersectionReferenceID.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/IntersectionReferenceID.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/IntersectionState.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/IntersectionState.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/IntersectionStatusObject.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/IntersectionStatusObject.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ITIScodesandtext.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ITIScodesandtext.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ITIScodesandtextcontent.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ITIScodesandtextcontent.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ITISSpeedLimit.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ITISSpeedLimit.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ITISSpeedLimitcontent.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ITISSpeedLimitcontent.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/J1939data.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/J1939data.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/LaneDataAttribute.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/LaneDataAttribute.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/LaneID.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/LaneID.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/MovementEvent.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/MovementEvent.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/MovementState.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/MovementState.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/MsgID.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/MsgID.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeAttributeSetXY.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeAttributeSetXY.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeAttributeSetLL.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeAttributeSetLL.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeListXY.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeListXY.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Nodellmd64b.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Nodellmd64b.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeOffsetPointLL.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeOffsetPointLL.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeOffsetPointXY.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeOffsetPointXY.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeLL.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeLL.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeLL24B.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeLL24B.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeLL28B.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeLL28B.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeLL32B.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeLL32B.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeLL36B.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeLL36B.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeLL44B.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeLL44B.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeLL48B.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeLL48B.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeXY.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeXY.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeXY20b.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeXY20b.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeXY22b.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeXY22b.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeXY24b.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeXY24b.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeXY26b.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeXY26b.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeXY28b.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeXY28b.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeXY32b.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/NodeXY32b.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Object.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Object.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Offset.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Offset.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/OffsetSystem.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/OffsetSystem.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/OffsetXaxis.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/OffsetXaxis.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/OffsetYaxis.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/OffsetYaxis.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PathHistory.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PathHistory.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PathHistoryPoint.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PathHistoryPoint.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PathPrediction.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PathPrediction.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Position3D.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Position3D.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PositionalAccuracy.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PositionalAccuracy.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PositionConfidenceSet.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PositionConfidenceSet.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PrivilegedEvents.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PrivilegedEvents.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PropelledInformation.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/PropelledInformation.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RegionOffsets.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RegionOffsets.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RegionPointSet.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RegionPointSet.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RequestedItem.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RequestedItem.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RequestorDescription.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RequestorDescription.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RequestorPositionVector.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RequestorPositionVector.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RequestorType.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RequestorType.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RestrictionClassAssignment.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RestrictionClassAssignment.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RestrictionUserType.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RestrictionUserType.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RoadSegment.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RoadSegment.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RoadSegmentReferenceID.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RoadSegmentReferenceID.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RoadSignID.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RoadSignID.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RTCMheader.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/RTCMheader.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Sample.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Sample.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ShapePointSet.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ShapePointSet.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SignalRequest.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SignalRequest.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SignalRequesterInfo.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SignalRequesterInfo.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SignalRequestPackage.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SignalRequestPackage.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SignalStatus.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SignalStatus.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SignalStatusPackage.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SignalStatusPackage.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Snapshot.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Snapshot.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SnapshotDistance.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SnapshotDistance.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SnapshotTime.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SnapshotTime.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SpeedandHeadingandThrottleConfidence.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SpeedandHeadingandThrottleConfidence.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SpeedLimit.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/SpeedLimit.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Steering.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/Steering.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/TimeChangeDetails.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/TimeChangeDetails.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/TireData.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/TireData.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/TransitVehicleStatus.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/TransitVehicleStatus.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/TransmissionAndSpeed.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/TransmissionAndSpeed.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/TravelerDataFrame.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/TravelerDataFrame.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ValidRegion.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/ValidRegion.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleClass.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleClass.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleClassification.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleClassification.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleData.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleData.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleID.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleID.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleIdent.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleIdent.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleSafetyExtensions.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleSafetyExtensions.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleSize.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleSize.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleStatus.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleStatus.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleStatusRequest.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/VehicleStatusRequest.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/WeatherReport.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/WeatherReport.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/WiperSet.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/WiperSet.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/WorkZone.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/WorkZone.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/WorkZonecontent.msg" "DESTINATION" "share/v2x_msg/msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/msg/WorkZonecontent.msg" "DESTINATION" "share/v2x_msg/msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/v2x_msg" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/v2x_msg" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/v2x_msg" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/v2x_msg" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")

# install(FILES "/opt/ros/galactic/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/v2x_msg/environment")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/opt/ros/galactic/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/v2x_msg/environment")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/v2x_msg/environment")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/v2x_msg/environment")

# install(FILES "/opt/ros/galactic/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/v2x_msg/environment")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/opt/ros/galactic/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/v2x_msg/environment")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/v2x_msg/environment")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/v2x_msg/environment")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/v2x_msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/v2x_msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/v2x_msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/v2x_msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/v2x_msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/v2x_msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/v2x_msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/v2x_msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/v2x_msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/v2x_msg")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_index/share/ament_index/resource_index/packages/v2x_msg" "DESTINATION" "share/ament_index/resource_index/packages")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_index/share/ament_index/resource_index/packages/v2x_msg" "DESTINATION" "share/ament_index/resource_index/packages")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/v2x_msg/cmake")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/v2x_msg/cmake")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/v2x_msg/cmake")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/v2x_msg/cmake")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/v2x_msg/cmake")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/v2x_msg/cmake")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/v2x_msg/cmake")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/v2x_msg/cmake")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/v2x_msg/cmake")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/v2x_msg/cmake")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/v2x_msg/cmake")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/v2x_msg/cmake")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/v2x_msg/cmake")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/v2x_msg/cmake")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_core/v2x_msgConfig.cmake" "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_core/v2x_msgConfig-version.cmake" "DESTINATION" "share/v2x_msg/cmake")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_core/v2x_msgConfig.cmake" "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_cmake_core/v2x_msgConfig-version.cmake" "DESTINATION" "share/v2x_msg/cmake")

# install(FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/package.xml" "DESTINATION" "share/v2x_msg")
ament_cmake_symlink_install_files("/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" FILES "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/package.xml" "DESTINATION" "share/v2x_msg")
