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
CMAKE_SOURCE_DIR = /home/phonghoang/ProgramingNetwork

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/phonghoang/ProgramingNetwork

# Include any dependencies generated for this target.
include CMakeFiles/NetworkProgram.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NetworkProgram.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NetworkProgram.dir/flags.make

CMakeFiles/NetworkProgram.dir/main.c.o: CMakeFiles/NetworkProgram.dir/flags.make
CMakeFiles/NetworkProgram.dir/main.c.o: main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/phonghoang/ProgramingNetwork/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/NetworkProgram.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NetworkProgram.dir/main.c.o   -c /home/phonghoang/ProgramingNetwork/main.c

CMakeFiles/NetworkProgram.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NetworkProgram.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/phonghoang/ProgramingNetwork/main.c > CMakeFiles/NetworkProgram.dir/main.c.i

CMakeFiles/NetworkProgram.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NetworkProgram.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/phonghoang/ProgramingNetwork/main.c -o CMakeFiles/NetworkProgram.dir/main.c.s

CMakeFiles/NetworkProgram.dir/exchange/src/handleClient.c.o: CMakeFiles/NetworkProgram.dir/flags.make
CMakeFiles/NetworkProgram.dir/exchange/src/handleClient.c.o: exchange/src/handleClient.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/phonghoang/ProgramingNetwork/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/NetworkProgram.dir/exchange/src/handleClient.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NetworkProgram.dir/exchange/src/handleClient.c.o   -c /home/phonghoang/ProgramingNetwork/exchange/src/handleClient.c

CMakeFiles/NetworkProgram.dir/exchange/src/handleClient.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NetworkProgram.dir/exchange/src/handleClient.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/phonghoang/ProgramingNetwork/exchange/src/handleClient.c > CMakeFiles/NetworkProgram.dir/exchange/src/handleClient.c.i

CMakeFiles/NetworkProgram.dir/exchange/src/handleClient.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NetworkProgram.dir/exchange/src/handleClient.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/phonghoang/ProgramingNetwork/exchange/src/handleClient.c -o CMakeFiles/NetworkProgram.dir/exchange/src/handleClient.c.s

CMakeFiles/NetworkProgram.dir/exchange/src/hepler.c.o: CMakeFiles/NetworkProgram.dir/flags.make
CMakeFiles/NetworkProgram.dir/exchange/src/hepler.c.o: exchange/src/hepler.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/phonghoang/ProgramingNetwork/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/NetworkProgram.dir/exchange/src/hepler.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NetworkProgram.dir/exchange/src/hepler.c.o   -c /home/phonghoang/ProgramingNetwork/exchange/src/hepler.c

CMakeFiles/NetworkProgram.dir/exchange/src/hepler.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NetworkProgram.dir/exchange/src/hepler.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/phonghoang/ProgramingNetwork/exchange/src/hepler.c > CMakeFiles/NetworkProgram.dir/exchange/src/hepler.c.i

CMakeFiles/NetworkProgram.dir/exchange/src/hepler.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NetworkProgram.dir/exchange/src/hepler.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/phonghoang/ProgramingNetwork/exchange/src/hepler.c -o CMakeFiles/NetworkProgram.dir/exchange/src/hepler.c.s

CMakeFiles/NetworkProgram.dir/exchange/src/initClient.c.o: CMakeFiles/NetworkProgram.dir/flags.make
CMakeFiles/NetworkProgram.dir/exchange/src/initClient.c.o: exchange/src/initClient.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/phonghoang/ProgramingNetwork/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/NetworkProgram.dir/exchange/src/initClient.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NetworkProgram.dir/exchange/src/initClient.c.o   -c /home/phonghoang/ProgramingNetwork/exchange/src/initClient.c

CMakeFiles/NetworkProgram.dir/exchange/src/initClient.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NetworkProgram.dir/exchange/src/initClient.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/phonghoang/ProgramingNetwork/exchange/src/initClient.c > CMakeFiles/NetworkProgram.dir/exchange/src/initClient.c.i

CMakeFiles/NetworkProgram.dir/exchange/src/initClient.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NetworkProgram.dir/exchange/src/initClient.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/phonghoang/ProgramingNetwork/exchange/src/initClient.c -o CMakeFiles/NetworkProgram.dir/exchange/src/initClient.c.s

CMakeFiles/NetworkProgram.dir/views/src/AddFriendController.c.o: CMakeFiles/NetworkProgram.dir/flags.make
CMakeFiles/NetworkProgram.dir/views/src/AddFriendController.c.o: views/src/AddFriendController.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/phonghoang/ProgramingNetwork/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/NetworkProgram.dir/views/src/AddFriendController.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NetworkProgram.dir/views/src/AddFriendController.c.o   -c /home/phonghoang/ProgramingNetwork/views/src/AddFriendController.c

CMakeFiles/NetworkProgram.dir/views/src/AddFriendController.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NetworkProgram.dir/views/src/AddFriendController.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/phonghoang/ProgramingNetwork/views/src/AddFriendController.c > CMakeFiles/NetworkProgram.dir/views/src/AddFriendController.c.i

CMakeFiles/NetworkProgram.dir/views/src/AddFriendController.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NetworkProgram.dir/views/src/AddFriendController.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/phonghoang/ProgramingNetwork/views/src/AddFriendController.c -o CMakeFiles/NetworkProgram.dir/views/src/AddFriendController.c.s

CMakeFiles/NetworkProgram.dir/views/src/HomeController.c.o: CMakeFiles/NetworkProgram.dir/flags.make
CMakeFiles/NetworkProgram.dir/views/src/HomeController.c.o: views/src/HomeController.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/phonghoang/ProgramingNetwork/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/NetworkProgram.dir/views/src/HomeController.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NetworkProgram.dir/views/src/HomeController.c.o   -c /home/phonghoang/ProgramingNetwork/views/src/HomeController.c

CMakeFiles/NetworkProgram.dir/views/src/HomeController.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NetworkProgram.dir/views/src/HomeController.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/phonghoang/ProgramingNetwork/views/src/HomeController.c > CMakeFiles/NetworkProgram.dir/views/src/HomeController.c.i

CMakeFiles/NetworkProgram.dir/views/src/HomeController.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NetworkProgram.dir/views/src/HomeController.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/phonghoang/ProgramingNetwork/views/src/HomeController.c -o CMakeFiles/NetworkProgram.dir/views/src/HomeController.c.s

CMakeFiles/NetworkProgram.dir/views/src/LoginController.c.o: CMakeFiles/NetworkProgram.dir/flags.make
CMakeFiles/NetworkProgram.dir/views/src/LoginController.c.o: views/src/LoginController.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/phonghoang/ProgramingNetwork/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/NetworkProgram.dir/views/src/LoginController.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NetworkProgram.dir/views/src/LoginController.c.o   -c /home/phonghoang/ProgramingNetwork/views/src/LoginController.c

CMakeFiles/NetworkProgram.dir/views/src/LoginController.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NetworkProgram.dir/views/src/LoginController.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/phonghoang/ProgramingNetwork/views/src/LoginController.c > CMakeFiles/NetworkProgram.dir/views/src/LoginController.c.i

CMakeFiles/NetworkProgram.dir/views/src/LoginController.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NetworkProgram.dir/views/src/LoginController.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/phonghoang/ProgramingNetwork/views/src/LoginController.c -o CMakeFiles/NetworkProgram.dir/views/src/LoginController.c.s

CMakeFiles/NetworkProgram.dir/views/src/RegisterController.c.o: CMakeFiles/NetworkProgram.dir/flags.make
CMakeFiles/NetworkProgram.dir/views/src/RegisterController.c.o: views/src/RegisterController.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/phonghoang/ProgramingNetwork/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/NetworkProgram.dir/views/src/RegisterController.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NetworkProgram.dir/views/src/RegisterController.c.o   -c /home/phonghoang/ProgramingNetwork/views/src/RegisterController.c

CMakeFiles/NetworkProgram.dir/views/src/RegisterController.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NetworkProgram.dir/views/src/RegisterController.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/phonghoang/ProgramingNetwork/views/src/RegisterController.c > CMakeFiles/NetworkProgram.dir/views/src/RegisterController.c.i

CMakeFiles/NetworkProgram.dir/views/src/RegisterController.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NetworkProgram.dir/views/src/RegisterController.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/phonghoang/ProgramingNetwork/views/src/RegisterController.c -o CMakeFiles/NetworkProgram.dir/views/src/RegisterController.c.s

CMakeFiles/NetworkProgram.dir/views/src/ShareController.c.o: CMakeFiles/NetworkProgram.dir/flags.make
CMakeFiles/NetworkProgram.dir/views/src/ShareController.c.o: views/src/ShareController.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/phonghoang/ProgramingNetwork/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/NetworkProgram.dir/views/src/ShareController.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NetworkProgram.dir/views/src/ShareController.c.o   -c /home/phonghoang/ProgramingNetwork/views/src/ShareController.c

CMakeFiles/NetworkProgram.dir/views/src/ShareController.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NetworkProgram.dir/views/src/ShareController.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/phonghoang/ProgramingNetwork/views/src/ShareController.c > CMakeFiles/NetworkProgram.dir/views/src/ShareController.c.i

CMakeFiles/NetworkProgram.dir/views/src/ShareController.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NetworkProgram.dir/views/src/ShareController.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/phonghoang/ProgramingNetwork/views/src/ShareController.c -o CMakeFiles/NetworkProgram.dir/views/src/ShareController.c.s

CMakeFiles/NetworkProgram.dir/views/src/ShowController.c.o: CMakeFiles/NetworkProgram.dir/flags.make
CMakeFiles/NetworkProgram.dir/views/src/ShowController.c.o: views/src/ShowController.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/phonghoang/ProgramingNetwork/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/NetworkProgram.dir/views/src/ShowController.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NetworkProgram.dir/views/src/ShowController.c.o   -c /home/phonghoang/ProgramingNetwork/views/src/ShowController.c

CMakeFiles/NetworkProgram.dir/views/src/ShowController.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NetworkProgram.dir/views/src/ShowController.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/phonghoang/ProgramingNetwork/views/src/ShowController.c > CMakeFiles/NetworkProgram.dir/views/src/ShowController.c.i

CMakeFiles/NetworkProgram.dir/views/src/ShowController.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NetworkProgram.dir/views/src/ShowController.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/phonghoang/ProgramingNetwork/views/src/ShowController.c -o CMakeFiles/NetworkProgram.dir/views/src/ShowController.c.s

CMakeFiles/NetworkProgram.dir/views/src/initScreen.c.o: CMakeFiles/NetworkProgram.dir/flags.make
CMakeFiles/NetworkProgram.dir/views/src/initScreen.c.o: views/src/initScreen.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/phonghoang/ProgramingNetwork/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/NetworkProgram.dir/views/src/initScreen.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NetworkProgram.dir/views/src/initScreen.c.o   -c /home/phonghoang/ProgramingNetwork/views/src/initScreen.c

CMakeFiles/NetworkProgram.dir/views/src/initScreen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NetworkProgram.dir/views/src/initScreen.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/phonghoang/ProgramingNetwork/views/src/initScreen.c > CMakeFiles/NetworkProgram.dir/views/src/initScreen.c.i

CMakeFiles/NetworkProgram.dir/views/src/initScreen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NetworkProgram.dir/views/src/initScreen.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/phonghoang/ProgramingNetwork/views/src/initScreen.c -o CMakeFiles/NetworkProgram.dir/views/src/initScreen.c.s

# Object files for target NetworkProgram
NetworkProgram_OBJECTS = \
"CMakeFiles/NetworkProgram.dir/main.c.o" \
"CMakeFiles/NetworkProgram.dir/exchange/src/handleClient.c.o" \
"CMakeFiles/NetworkProgram.dir/exchange/src/hepler.c.o" \
"CMakeFiles/NetworkProgram.dir/exchange/src/initClient.c.o" \
"CMakeFiles/NetworkProgram.dir/views/src/AddFriendController.c.o" \
"CMakeFiles/NetworkProgram.dir/views/src/HomeController.c.o" \
"CMakeFiles/NetworkProgram.dir/views/src/LoginController.c.o" \
"CMakeFiles/NetworkProgram.dir/views/src/RegisterController.c.o" \
"CMakeFiles/NetworkProgram.dir/views/src/ShareController.c.o" \
"CMakeFiles/NetworkProgram.dir/views/src/ShowController.c.o" \
"CMakeFiles/NetworkProgram.dir/views/src/initScreen.c.o"

# External object files for target NetworkProgram
NetworkProgram_EXTERNAL_OBJECTS =

NetworkProgram: CMakeFiles/NetworkProgram.dir/main.c.o
NetworkProgram: CMakeFiles/NetworkProgram.dir/exchange/src/handleClient.c.o
NetworkProgram: CMakeFiles/NetworkProgram.dir/exchange/src/hepler.c.o
NetworkProgram: CMakeFiles/NetworkProgram.dir/exchange/src/initClient.c.o
NetworkProgram: CMakeFiles/NetworkProgram.dir/views/src/AddFriendController.c.o
NetworkProgram: CMakeFiles/NetworkProgram.dir/views/src/HomeController.c.o
NetworkProgram: CMakeFiles/NetworkProgram.dir/views/src/LoginController.c.o
NetworkProgram: CMakeFiles/NetworkProgram.dir/views/src/RegisterController.c.o
NetworkProgram: CMakeFiles/NetworkProgram.dir/views/src/ShareController.c.o
NetworkProgram: CMakeFiles/NetworkProgram.dir/views/src/ShowController.c.o
NetworkProgram: CMakeFiles/NetworkProgram.dir/views/src/initScreen.c.o
NetworkProgram: CMakeFiles/NetworkProgram.dir/build.make
NetworkProgram: CMakeFiles/NetworkProgram.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/phonghoang/ProgramingNetwork/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking C executable NetworkProgram"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NetworkProgram.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NetworkProgram.dir/build: NetworkProgram

.PHONY : CMakeFiles/NetworkProgram.dir/build

CMakeFiles/NetworkProgram.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NetworkProgram.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NetworkProgram.dir/clean

CMakeFiles/NetworkProgram.dir/depend:
	cd /home/phonghoang/ProgramingNetwork && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/phonghoang/ProgramingNetwork /home/phonghoang/ProgramingNetwork /home/phonghoang/ProgramingNetwork /home/phonghoang/ProgramingNetwork /home/phonghoang/ProgramingNetwork/CMakeFiles/NetworkProgram.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NetworkProgram.dir/depend

