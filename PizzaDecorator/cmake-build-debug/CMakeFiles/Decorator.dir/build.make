# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /userspace/apps/CLion/ch-0/202.6948.80/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /userspace/apps/CLion/ch-0/202.6948.80/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ray/Documents/DTTAH/windows/CLion/Decorator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ray/Documents/DTTAH/windows/CLion/Decorator/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Decorator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Decorator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Decorator.dir/flags.make

CMakeFiles/Decorator.dir/main.cpp.o: CMakeFiles/Decorator.dir/flags.make
CMakeFiles/Decorator.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ray/Documents/DTTAH/windows/CLion/Decorator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Decorator.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Decorator.dir/main.cpp.o -c /home/ray/Documents/DTTAH/windows/CLion/Decorator/main.cpp

CMakeFiles/Decorator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Decorator.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ray/Documents/DTTAH/windows/CLion/Decorator/main.cpp > CMakeFiles/Decorator.dir/main.cpp.i

CMakeFiles/Decorator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Decorator.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ray/Documents/DTTAH/windows/CLion/Decorator/main.cpp -o CMakeFiles/Decorator.dir/main.cpp.s

CMakeFiles/Decorator.dir/Pizza.cpp.o: CMakeFiles/Decorator.dir/flags.make
CMakeFiles/Decorator.dir/Pizza.cpp.o: ../Pizza.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ray/Documents/DTTAH/windows/CLion/Decorator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Decorator.dir/Pizza.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Decorator.dir/Pizza.cpp.o -c /home/ray/Documents/DTTAH/windows/CLion/Decorator/Pizza.cpp

CMakeFiles/Decorator.dir/Pizza.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Decorator.dir/Pizza.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ray/Documents/DTTAH/windows/CLion/Decorator/Pizza.cpp > CMakeFiles/Decorator.dir/Pizza.cpp.i

CMakeFiles/Decorator.dir/Pizza.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Decorator.dir/Pizza.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ray/Documents/DTTAH/windows/CLion/Decorator/Pizza.cpp -o CMakeFiles/Decorator.dir/Pizza.cpp.s

# Object files for target Decorator
Decorator_OBJECTS = \
"CMakeFiles/Decorator.dir/main.cpp.o" \
"CMakeFiles/Decorator.dir/Pizza.cpp.o"

# External object files for target Decorator
Decorator_EXTERNAL_OBJECTS =

Decorator: CMakeFiles/Decorator.dir/main.cpp.o
Decorator: CMakeFiles/Decorator.dir/Pizza.cpp.o
Decorator: CMakeFiles/Decorator.dir/build.make
Decorator: CMakeFiles/Decorator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ray/Documents/DTTAH/windows/CLion/Decorator/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Decorator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Decorator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Decorator.dir/build: Decorator

.PHONY : CMakeFiles/Decorator.dir/build

CMakeFiles/Decorator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Decorator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Decorator.dir/clean

CMakeFiles/Decorator.dir/depend:
	cd /home/ray/Documents/DTTAH/windows/CLion/Decorator/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ray/Documents/DTTAH/windows/CLion/Decorator /home/ray/Documents/DTTAH/windows/CLion/Decorator /home/ray/Documents/DTTAH/windows/CLion/Decorator/cmake-build-debug /home/ray/Documents/DTTAH/windows/CLion/Decorator/cmake-build-debug /home/ray/Documents/DTTAH/windows/CLion/Decorator/cmake-build-debug/CMakeFiles/Decorator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Decorator.dir/depend

