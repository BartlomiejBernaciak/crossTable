# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bbernaciak/BB/crossTable/controler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bbernaciak/BB/crossTable/controler/build

# Utility rule file for monitor.

# Include any custom commands dependencies for this target.
include CMakeFiles/monitor.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/monitor.dir/progress.make

CMakeFiles/monitor:
	cd /home/bbernaciak/esp/esp-idf/components/esptool_py && /usr/bin/cmake -D IDF_PATH=/home/bbernaciak/esp/esp-idf -D "SERIAL_TOOL=/home/bbernaciak/.espressif/python_env/idf5.3_py3.10_env/bin/python;-m;esp_idf_monitor" -D "SERIAL_TOOL_ARGS=--toolchain-prefix;xtensa-esp32-elf-;;--target;esp32;;--revision;0;;/home/bbernaciak/BB/crossTable/controler/build/controler.elf" -D WORKING_DIRECTORY=/home/bbernaciak/BB/crossTable/controler/build -P run_serial_tool.cmake

monitor: CMakeFiles/monitor
monitor: CMakeFiles/monitor.dir/build.make
.PHONY : monitor

# Rule to build all files generated by this target.
CMakeFiles/monitor.dir/build: monitor
.PHONY : CMakeFiles/monitor.dir/build

CMakeFiles/monitor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/monitor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/monitor.dir/clean

CMakeFiles/monitor.dir/depend:
	cd /home/bbernaciak/BB/crossTable/controler/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bbernaciak/BB/crossTable/controler /home/bbernaciak/BB/crossTable/controler /home/bbernaciak/BB/crossTable/controler/build /home/bbernaciak/BB/crossTable/controler/build /home/bbernaciak/BB/crossTable/controler/build/CMakeFiles/monitor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/monitor.dir/depend

