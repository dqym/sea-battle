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
CMAKE_SOURCE_DIR = /mnt/d/JetBrains/sea-battle/sea_battle

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sea_battle.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sea_battle.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sea_battle.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sea_battle.dir/flags.make

CMakeFiles/sea_battle.dir/sources/main.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/main.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/main.cpp
CMakeFiles/sea_battle.dir/sources/main.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sea_battle.dir/sources/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/main.cpp.o -MF CMakeFiles/sea_battle.dir/sources/main.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/main.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/main.cpp

CMakeFiles/sea_battle.dir/sources/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/main.cpp > CMakeFiles/sea_battle.dir/sources/main.cpp.i

CMakeFiles/sea_battle.dir/sources/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/main.cpp -o CMakeFiles/sea_battle.dir/sources/main.cpp.s

CMakeFiles/sea_battle.dir/sources/Board.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/Board.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/Board.cpp
CMakeFiles/sea_battle.dir/sources/Board.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sea_battle.dir/sources/Board.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/Board.cpp.o -MF CMakeFiles/sea_battle.dir/sources/Board.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/Board.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/Board.cpp

CMakeFiles/sea_battle.dir/sources/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/Board.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/Board.cpp > CMakeFiles/sea_battle.dir/sources/Board.cpp.i

CMakeFiles/sea_battle.dir/sources/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/Board.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/Board.cpp -o CMakeFiles/sea_battle.dir/sources/Board.cpp.s

CMakeFiles/sea_battle.dir/sources/Ship.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/Ship.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/Ship.cpp
CMakeFiles/sea_battle.dir/sources/Ship.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/sea_battle.dir/sources/Ship.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/Ship.cpp.o -MF CMakeFiles/sea_battle.dir/sources/Ship.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/Ship.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/Ship.cpp

CMakeFiles/sea_battle.dir/sources/Ship.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/Ship.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/Ship.cpp > CMakeFiles/sea_battle.dir/sources/Ship.cpp.i

CMakeFiles/sea_battle.dir/sources/Ship.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/Ship.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/Ship.cpp -o CMakeFiles/sea_battle.dir/sources/Ship.cpp.s

CMakeFiles/sea_battle.dir/sources/ShipManager.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/ShipManager.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/ShipManager.cpp
CMakeFiles/sea_battle.dir/sources/ShipManager.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/sea_battle.dir/sources/ShipManager.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/ShipManager.cpp.o -MF CMakeFiles/sea_battle.dir/sources/ShipManager.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/ShipManager.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/ShipManager.cpp

CMakeFiles/sea_battle.dir/sources/ShipManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/ShipManager.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/ShipManager.cpp > CMakeFiles/sea_battle.dir/sources/ShipManager.cpp.i

CMakeFiles/sea_battle.dir/sources/ShipManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/ShipManager.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/ShipManager.cpp -o CMakeFiles/sea_battle.dir/sources/ShipManager.cpp.s

CMakeFiles/sea_battle.dir/sources/Segment.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/Segment.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/Segment.cpp
CMakeFiles/sea_battle.dir/sources/Segment.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/sea_battle.dir/sources/Segment.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/Segment.cpp.o -MF CMakeFiles/sea_battle.dir/sources/Segment.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/Segment.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/Segment.cpp

CMakeFiles/sea_battle.dir/sources/Segment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/Segment.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/Segment.cpp > CMakeFiles/sea_battle.dir/sources/Segment.cpp.i

CMakeFiles/sea_battle.dir/sources/Segment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/Segment.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/Segment.cpp -o CMakeFiles/sea_battle.dir/sources/Segment.cpp.s

CMakeFiles/sea_battle.dir/sources/DisplayerCLI.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/DisplayerCLI.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/DisplayerCLI.cpp
CMakeFiles/sea_battle.dir/sources/DisplayerCLI.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/sea_battle.dir/sources/DisplayerCLI.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/DisplayerCLI.cpp.o -MF CMakeFiles/sea_battle.dir/sources/DisplayerCLI.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/DisplayerCLI.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/DisplayerCLI.cpp

CMakeFiles/sea_battle.dir/sources/DisplayerCLI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/DisplayerCLI.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/DisplayerCLI.cpp > CMakeFiles/sea_battle.dir/sources/DisplayerCLI.cpp.i

CMakeFiles/sea_battle.dir/sources/DisplayerCLI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/DisplayerCLI.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/DisplayerCLI.cpp -o CMakeFiles/sea_battle.dir/sources/DisplayerCLI.cpp.s

CMakeFiles/sea_battle.dir/sources/Enemy.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/Enemy.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/Enemy.cpp
CMakeFiles/sea_battle.dir/sources/Enemy.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/sea_battle.dir/sources/Enemy.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/Enemy.cpp.o -MF CMakeFiles/sea_battle.dir/sources/Enemy.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/Enemy.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/Enemy.cpp

CMakeFiles/sea_battle.dir/sources/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/Enemy.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/Enemy.cpp > CMakeFiles/sea_battle.dir/sources/Enemy.cpp.i

CMakeFiles/sea_battle.dir/sources/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/Enemy.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/Enemy.cpp -o CMakeFiles/sea_battle.dir/sources/Enemy.cpp.s

# Object files for target sea_battle
sea_battle_OBJECTS = \
"CMakeFiles/sea_battle.dir/sources/main.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/Board.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/Ship.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/ShipManager.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/Segment.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/DisplayerCLI.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/Enemy.cpp.o"

# External object files for target sea_battle
sea_battle_EXTERNAL_OBJECTS =

sea_battle: CMakeFiles/sea_battle.dir/sources/main.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/Board.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/Ship.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/ShipManager.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/Segment.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/DisplayerCLI.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/Enemy.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/build.make
sea_battle: CMakeFiles/sea_battle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable sea_battle"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sea_battle.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sea_battle.dir/build: sea_battle
.PHONY : CMakeFiles/sea_battle.dir/build

CMakeFiles/sea_battle.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sea_battle.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sea_battle.dir/clean

CMakeFiles/sea_battle.dir/depend:
	cd /mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/JetBrains/sea-battle/sea_battle /mnt/d/JetBrains/sea-battle/sea_battle /mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug /mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug /mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles/sea_battle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sea_battle.dir/depend

