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

CMakeFiles/sea_battle.dir/sources/ShipObject/Ship.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/ShipObject/Ship.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/ShipObject/Ship.cpp
CMakeFiles/sea_battle.dir/sources/ShipObject/Ship.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/sea_battle.dir/sources/ShipObject/Ship.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/ShipObject/Ship.cpp.o -MF CMakeFiles/sea_battle.dir/sources/ShipObject/Ship.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/ShipObject/Ship.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/ShipObject/Ship.cpp

CMakeFiles/sea_battle.dir/sources/ShipObject/Ship.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/ShipObject/Ship.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/ShipObject/Ship.cpp > CMakeFiles/sea_battle.dir/sources/ShipObject/Ship.cpp.i

CMakeFiles/sea_battle.dir/sources/ShipObject/Ship.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/ShipObject/Ship.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/ShipObject/Ship.cpp -o CMakeFiles/sea_battle.dir/sources/ShipObject/Ship.cpp.s

CMakeFiles/sea_battle.dir/sources/ShipObject/ShipManager.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/ShipObject/ShipManager.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/ShipObject/ShipManager.cpp
CMakeFiles/sea_battle.dir/sources/ShipObject/ShipManager.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/sea_battle.dir/sources/ShipObject/ShipManager.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/ShipObject/ShipManager.cpp.o -MF CMakeFiles/sea_battle.dir/sources/ShipObject/ShipManager.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/ShipObject/ShipManager.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/ShipObject/ShipManager.cpp

CMakeFiles/sea_battle.dir/sources/ShipObject/ShipManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/ShipObject/ShipManager.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/ShipObject/ShipManager.cpp > CMakeFiles/sea_battle.dir/sources/ShipObject/ShipManager.cpp.i

CMakeFiles/sea_battle.dir/sources/ShipObject/ShipManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/ShipObject/ShipManager.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/ShipObject/ShipManager.cpp -o CMakeFiles/sea_battle.dir/sources/ShipObject/ShipManager.cpp.s

CMakeFiles/sea_battle.dir/sources/ShipObject/Segment.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/ShipObject/Segment.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/ShipObject/Segment.cpp
CMakeFiles/sea_battle.dir/sources/ShipObject/Segment.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/sea_battle.dir/sources/ShipObject/Segment.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/ShipObject/Segment.cpp.o -MF CMakeFiles/sea_battle.dir/sources/ShipObject/Segment.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/ShipObject/Segment.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/ShipObject/Segment.cpp

CMakeFiles/sea_battle.dir/sources/ShipObject/Segment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/ShipObject/Segment.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/ShipObject/Segment.cpp > CMakeFiles/sea_battle.dir/sources/ShipObject/Segment.cpp.i

CMakeFiles/sea_battle.dir/sources/ShipObject/Segment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/ShipObject/Segment.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/ShipObject/Segment.cpp -o CMakeFiles/sea_battle.dir/sources/ShipObject/Segment.cpp.s

CMakeFiles/sea_battle.dir/sources/DispatcherCLI.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/DispatcherCLI.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/DispatcherCLI.cpp
CMakeFiles/sea_battle.dir/sources/DispatcherCLI.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/sea_battle.dir/sources/DispatcherCLI.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/DispatcherCLI.cpp.o -MF CMakeFiles/sea_battle.dir/sources/DispatcherCLI.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/DispatcherCLI.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/DispatcherCLI.cpp

CMakeFiles/sea_battle.dir/sources/DispatcherCLI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/DispatcherCLI.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/DispatcherCLI.cpp > CMakeFiles/sea_battle.dir/sources/DispatcherCLI.cpp.i

CMakeFiles/sea_battle.dir/sources/DispatcherCLI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/DispatcherCLI.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/DispatcherCLI.cpp -o CMakeFiles/sea_battle.dir/sources/DispatcherCLI.cpp.s

CMakeFiles/sea_battle.dir/sources/Players/Enemy.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/Players/Enemy.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/Players/Enemy.cpp
CMakeFiles/sea_battle.dir/sources/Players/Enemy.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/sea_battle.dir/sources/Players/Enemy.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/Players/Enemy.cpp.o -MF CMakeFiles/sea_battle.dir/sources/Players/Enemy.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/Players/Enemy.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/Players/Enemy.cpp

CMakeFiles/sea_battle.dir/sources/Players/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/Players/Enemy.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/Players/Enemy.cpp > CMakeFiles/sea_battle.dir/sources/Players/Enemy.cpp.i

CMakeFiles/sea_battle.dir/sources/Players/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/Players/Enemy.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/Players/Enemy.cpp -o CMakeFiles/sea_battle.dir/sources/Players/Enemy.cpp.s

CMakeFiles/sea_battle.dir/sources/Players/Player.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/Players/Player.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/Players/Player.cpp
CMakeFiles/sea_battle.dir/sources/Players/Player.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/sea_battle.dir/sources/Players/Player.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/Players/Player.cpp.o -MF CMakeFiles/sea_battle.dir/sources/Players/Player.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/Players/Player.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/Players/Player.cpp

CMakeFiles/sea_battle.dir/sources/Players/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/Players/Player.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/Players/Player.cpp > CMakeFiles/sea_battle.dir/sources/Players/Player.cpp.i

CMakeFiles/sea_battle.dir/sources/Players/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/Players/Player.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/Players/Player.cpp -o CMakeFiles/sea_battle.dir/sources/Players/Player.cpp.s

CMakeFiles/sea_battle.dir/sources/GameControllers/GameSession.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/GameControllers/GameSession.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/GameControllers/GameSession.cpp
CMakeFiles/sea_battle.dir/sources/GameControllers/GameSession.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/sea_battle.dir/sources/GameControllers/GameSession.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/GameControllers/GameSession.cpp.o -MF CMakeFiles/sea_battle.dir/sources/GameControllers/GameSession.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/GameControllers/GameSession.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/GameControllers/GameSession.cpp

CMakeFiles/sea_battle.dir/sources/GameControllers/GameSession.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/GameControllers/GameSession.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/GameControllers/GameSession.cpp > CMakeFiles/sea_battle.dir/sources/GameControllers/GameSession.cpp.i

CMakeFiles/sea_battle.dir/sources/GameControllers/GameSession.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/GameControllers/GameSession.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/GameControllers/GameSession.cpp -o CMakeFiles/sea_battle.dir/sources/GameControllers/GameSession.cpp.s

CMakeFiles/sea_battle.dir/sources/GameControllers/GameSetup.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/GameControllers/GameSetup.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/GameControllers/GameSetup.cpp
CMakeFiles/sea_battle.dir/sources/GameControllers/GameSetup.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/sea_battle.dir/sources/GameControllers/GameSetup.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/GameControllers/GameSetup.cpp.o -MF CMakeFiles/sea_battle.dir/sources/GameControllers/GameSetup.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/GameControllers/GameSetup.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/GameControllers/GameSetup.cpp

CMakeFiles/sea_battle.dir/sources/GameControllers/GameSetup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/GameControllers/GameSetup.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/GameControllers/GameSetup.cpp > CMakeFiles/sea_battle.dir/sources/GameControllers/GameSetup.cpp.i

CMakeFiles/sea_battle.dir/sources/GameControllers/GameSetup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/GameControllers/GameSetup.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/GameControllers/GameSetup.cpp -o CMakeFiles/sea_battle.dir/sources/GameControllers/GameSetup.cpp.s

CMakeFiles/sea_battle.dir/sources/Players/AbstractPlayer.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/Players/AbstractPlayer.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/Players/AbstractPlayer.cpp
CMakeFiles/sea_battle.dir/sources/Players/AbstractPlayer.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/sea_battle.dir/sources/Players/AbstractPlayer.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/Players/AbstractPlayer.cpp.o -MF CMakeFiles/sea_battle.dir/sources/Players/AbstractPlayer.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/Players/AbstractPlayer.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/Players/AbstractPlayer.cpp

CMakeFiles/sea_battle.dir/sources/Players/AbstractPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/Players/AbstractPlayer.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/Players/AbstractPlayer.cpp > CMakeFiles/sea_battle.dir/sources/Players/AbstractPlayer.cpp.i

CMakeFiles/sea_battle.dir/sources/Players/AbstractPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/Players/AbstractPlayer.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/Players/AbstractPlayer.cpp -o CMakeFiles/sea_battle.dir/sources/Players/AbstractPlayer.cpp.s

CMakeFiles/sea_battle.dir/sources/Abilities/AbilitiesManager.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/Abilities/AbilitiesManager.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/AbilitiesManager.cpp
CMakeFiles/sea_battle.dir/sources/Abilities/AbilitiesManager.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/sea_battle.dir/sources/Abilities/AbilitiesManager.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/Abilities/AbilitiesManager.cpp.o -MF CMakeFiles/sea_battle.dir/sources/Abilities/AbilitiesManager.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/Abilities/AbilitiesManager.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/AbilitiesManager.cpp

CMakeFiles/sea_battle.dir/sources/Abilities/AbilitiesManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/Abilities/AbilitiesManager.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/AbilitiesManager.cpp > CMakeFiles/sea_battle.dir/sources/Abilities/AbilitiesManager.cpp.i

CMakeFiles/sea_battle.dir/sources/Abilities/AbilitiesManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/Abilities/AbilitiesManager.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/AbilitiesManager.cpp -o CMakeFiles/sea_battle.dir/sources/Abilities/AbilitiesManager.cpp.s

CMakeFiles/sea_battle.dir/sources/Exceptions.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/Exceptions.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/Exceptions.cpp
CMakeFiles/sea_battle.dir/sources/Exceptions.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/sea_battle.dir/sources/Exceptions.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/Exceptions.cpp.o -MF CMakeFiles/sea_battle.dir/sources/Exceptions.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/Exceptions.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/Exceptions.cpp

CMakeFiles/sea_battle.dir/sources/Exceptions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/Exceptions.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/Exceptions.cpp > CMakeFiles/sea_battle.dir/sources/Exceptions.cpp.i

CMakeFiles/sea_battle.dir/sources/Exceptions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/Exceptions.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/Exceptions.cpp -o CMakeFiles/sea_battle.dir/sources/Exceptions.cpp.s

CMakeFiles/sea_battle.dir/sources/Abilities/DoubleDamageAbility.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/Abilities/DoubleDamageAbility.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/DoubleDamageAbility.cpp
CMakeFiles/sea_battle.dir/sources/Abilities/DoubleDamageAbility.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/sea_battle.dir/sources/Abilities/DoubleDamageAbility.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/Abilities/DoubleDamageAbility.cpp.o -MF CMakeFiles/sea_battle.dir/sources/Abilities/DoubleDamageAbility.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/Abilities/DoubleDamageAbility.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/DoubleDamageAbility.cpp

CMakeFiles/sea_battle.dir/sources/Abilities/DoubleDamageAbility.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/Abilities/DoubleDamageAbility.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/DoubleDamageAbility.cpp > CMakeFiles/sea_battle.dir/sources/Abilities/DoubleDamageAbility.cpp.i

CMakeFiles/sea_battle.dir/sources/Abilities/DoubleDamageAbility.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/Abilities/DoubleDamageAbility.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/DoubleDamageAbility.cpp -o CMakeFiles/sea_battle.dir/sources/Abilities/DoubleDamageAbility.cpp.s

CMakeFiles/sea_battle.dir/sources/Abilities/ScannerAbility.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/Abilities/ScannerAbility.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/ScannerAbility.cpp
CMakeFiles/sea_battle.dir/sources/Abilities/ScannerAbility.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/sea_battle.dir/sources/Abilities/ScannerAbility.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/Abilities/ScannerAbility.cpp.o -MF CMakeFiles/sea_battle.dir/sources/Abilities/ScannerAbility.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/Abilities/ScannerAbility.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/ScannerAbility.cpp

CMakeFiles/sea_battle.dir/sources/Abilities/ScannerAbility.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/Abilities/ScannerAbility.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/ScannerAbility.cpp > CMakeFiles/sea_battle.dir/sources/Abilities/ScannerAbility.cpp.i

CMakeFiles/sea_battle.dir/sources/Abilities/ScannerAbility.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/Abilities/ScannerAbility.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/ScannerAbility.cpp -o CMakeFiles/sea_battle.dir/sources/Abilities/ScannerAbility.cpp.s

CMakeFiles/sea_battle.dir/sources/Abilities/ShellingAbility.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/Abilities/ShellingAbility.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/ShellingAbility.cpp
CMakeFiles/sea_battle.dir/sources/Abilities/ShellingAbility.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/sea_battle.dir/sources/Abilities/ShellingAbility.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/Abilities/ShellingAbility.cpp.o -MF CMakeFiles/sea_battle.dir/sources/Abilities/ShellingAbility.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/Abilities/ShellingAbility.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/ShellingAbility.cpp

CMakeFiles/sea_battle.dir/sources/Abilities/ShellingAbility.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/Abilities/ShellingAbility.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/ShellingAbility.cpp > CMakeFiles/sea_battle.dir/sources/Abilities/ShellingAbility.cpp.i

CMakeFiles/sea_battle.dir/sources/Abilities/ShellingAbility.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/Abilities/ShellingAbility.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/ShellingAbility.cpp -o CMakeFiles/sea_battle.dir/sources/Abilities/ShellingAbility.cpp.s

CMakeFiles/sea_battle.dir/sources/GameControllers/GameState.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/GameControllers/GameState.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/GameControllers/GameState.cpp
CMakeFiles/sea_battle.dir/sources/GameControllers/GameState.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/sea_battle.dir/sources/GameControllers/GameState.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/GameControllers/GameState.cpp.o -MF CMakeFiles/sea_battle.dir/sources/GameControllers/GameState.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/GameControllers/GameState.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/GameControllers/GameState.cpp

CMakeFiles/sea_battle.dir/sources/GameControllers/GameState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/GameControllers/GameState.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/GameControllers/GameState.cpp > CMakeFiles/sea_battle.dir/sources/GameControllers/GameState.cpp.i

CMakeFiles/sea_battle.dir/sources/GameControllers/GameState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/GameControllers/GameState.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/GameControllers/GameState.cpp -o CMakeFiles/sea_battle.dir/sources/GameControllers/GameState.cpp.s

CMakeFiles/sea_battle.dir/sources/Abilities/AbilityFactory.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/Abilities/AbilityFactory.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/AbilityFactory.cpp
CMakeFiles/sea_battle.dir/sources/Abilities/AbilityFactory.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/sea_battle.dir/sources/Abilities/AbilityFactory.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/Abilities/AbilityFactory.cpp.o -MF CMakeFiles/sea_battle.dir/sources/Abilities/AbilityFactory.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/Abilities/AbilityFactory.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/AbilityFactory.cpp

CMakeFiles/sea_battle.dir/sources/Abilities/AbilityFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/Abilities/AbilityFactory.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/AbilityFactory.cpp > CMakeFiles/sea_battle.dir/sources/Abilities/AbilityFactory.cpp.i

CMakeFiles/sea_battle.dir/sources/Abilities/AbilityFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/Abilities/AbilityFactory.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/Abilities/AbilityFactory.cpp -o CMakeFiles/sea_battle.dir/sources/Abilities/AbilityFactory.cpp.s

CMakeFiles/sea_battle.dir/sources/FieldRenderer.cpp.o: CMakeFiles/sea_battle.dir/flags.make
CMakeFiles/sea_battle.dir/sources/FieldRenderer.cpp.o: /mnt/d/JetBrains/sea-battle/sea_battle/sources/FieldRenderer.cpp
CMakeFiles/sea_battle.dir/sources/FieldRenderer.cpp.o: CMakeFiles/sea_battle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/sea_battle.dir/sources/FieldRenderer.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sea_battle.dir/sources/FieldRenderer.cpp.o -MF CMakeFiles/sea_battle.dir/sources/FieldRenderer.cpp.o.d -o CMakeFiles/sea_battle.dir/sources/FieldRenderer.cpp.o -c /mnt/d/JetBrains/sea-battle/sea_battle/sources/FieldRenderer.cpp

CMakeFiles/sea_battle.dir/sources/FieldRenderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sea_battle.dir/sources/FieldRenderer.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JetBrains/sea-battle/sea_battle/sources/FieldRenderer.cpp > CMakeFiles/sea_battle.dir/sources/FieldRenderer.cpp.i

CMakeFiles/sea_battle.dir/sources/FieldRenderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sea_battle.dir/sources/FieldRenderer.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JetBrains/sea-battle/sea_battle/sources/FieldRenderer.cpp -o CMakeFiles/sea_battle.dir/sources/FieldRenderer.cpp.s

# Object files for target sea_battle
sea_battle_OBJECTS = \
"CMakeFiles/sea_battle.dir/sources/main.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/Board.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/ShipObject/Ship.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/ShipObject/ShipManager.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/ShipObject/Segment.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/DispatcherCLI.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/Players/Enemy.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/Players/Player.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/GameControllers/GameSession.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/GameControllers/GameSetup.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/Players/AbstractPlayer.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/Abilities/AbilitiesManager.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/Exceptions.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/Abilities/DoubleDamageAbility.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/Abilities/ScannerAbility.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/Abilities/ShellingAbility.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/GameControllers/GameState.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/Abilities/AbilityFactory.cpp.o" \
"CMakeFiles/sea_battle.dir/sources/FieldRenderer.cpp.o"

# External object files for target sea_battle
sea_battle_EXTERNAL_OBJECTS =

sea_battle: CMakeFiles/sea_battle.dir/sources/main.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/Board.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/ShipObject/Ship.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/ShipObject/ShipManager.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/ShipObject/Segment.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/DispatcherCLI.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/Players/Enemy.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/Players/Player.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/GameControllers/GameSession.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/GameControllers/GameSetup.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/Players/AbstractPlayer.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/Abilities/AbilitiesManager.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/Exceptions.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/Abilities/DoubleDamageAbility.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/Abilities/ScannerAbility.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/Abilities/ShellingAbility.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/GameControllers/GameState.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/Abilities/AbilityFactory.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/sources/FieldRenderer.cpp.o
sea_battle: CMakeFiles/sea_battle.dir/build.make
sea_battle: CMakeFiles/sea_battle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/JetBrains/sea-battle/sea_battle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Linking CXX executable sea_battle"
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

