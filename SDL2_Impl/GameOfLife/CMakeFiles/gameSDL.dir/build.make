# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife"

# Include any dependencies generated for this target.
include CMakeFiles/gameSDL.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gameSDL.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gameSDL.dir/flags.make

CMakeFiles/gameSDL.dir/main.c.o: CMakeFiles/gameSDL.dir/flags.make
CMakeFiles/gameSDL.dir/main.c.o: main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/gameSDL.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/gameSDL.dir/main.c.o   -c "/home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife/main.c"

CMakeFiles/gameSDL.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/gameSDL.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife/main.c" > CMakeFiles/gameSDL.dir/main.c.i

CMakeFiles/gameSDL.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/gameSDL.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife/main.c" -o CMakeFiles/gameSDL.dir/main.c.s

# Object files for target gameSDL
gameSDL_OBJECTS = \
"CMakeFiles/gameSDL.dir/main.c.o"

# External object files for target gameSDL
gameSDL_EXTERNAL_OBJECTS =

gameSDL: CMakeFiles/gameSDL.dir/main.c.o
gameSDL: CMakeFiles/gameSDL.dir/build.make
gameSDL: clipped/libclipped.a
gameSDL: game/libgame.a
gameSDL: CMakeFiles/gameSDL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable gameSDL"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gameSDL.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gameSDL.dir/build: gameSDL

.PHONY : CMakeFiles/gameSDL.dir/build

CMakeFiles/gameSDL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gameSDL.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gameSDL.dir/clean

CMakeFiles/gameSDL.dir/depend:
	cd "/home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife" "/home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife" "/home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife" "/home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife" "/home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife/CMakeFiles/gameSDL.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/gameSDL.dir/depend
