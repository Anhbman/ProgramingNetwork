# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/bumman/hoctap/nam4/laptrinhmang/PJLTM

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bumman/hoctap/nam4/laptrinhmang/PJLTM

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/home/bumman/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/213.5744.254/bin/cmake/linux/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/bumman/hoctap/nam4/laptrinhmang/PJLTM/CMakeFiles /home/bumman/hoctap/nam4/laptrinhmang/PJLTM/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/bumman/hoctap/nam4/laptrinhmang/PJLTM/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named NetworkProgram

# Build rule for target.
NetworkProgram: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 NetworkProgram
.PHONY : NetworkProgram

# fast build rule for target.
NetworkProgram/fast:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/build
.PHONY : NetworkProgram/fast

#=============================================================================
# Target rules for targets named SOURCE_FILES

# Build rule for target.
SOURCE_FILES: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 SOURCE_FILES
.PHONY : SOURCE_FILES

# fast build rule for target.
SOURCE_FILES/fast:
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/build
.PHONY : SOURCE_FILES/fast

exchange/src/handleClient.o: exchange/src/handleClient.c.o

.PHONY : exchange/src/handleClient.o

# target to build an object file
exchange/src/handleClient.c.o:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/exchange/src/handleClient.c.o
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/exchange/src/handleClient.c.o
.PHONY : exchange/src/handleClient.c.o

exchange/src/handleClient.i: exchange/src/handleClient.c.i

.PHONY : exchange/src/handleClient.i

# target to preprocess a source file
exchange/src/handleClient.c.i:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/exchange/src/handleClient.c.i
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/exchange/src/handleClient.c.i
.PHONY : exchange/src/handleClient.c.i

exchange/src/handleClient.s: exchange/src/handleClient.c.s

.PHONY : exchange/src/handleClient.s

# target to generate assembly for a file
exchange/src/handleClient.c.s:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/exchange/src/handleClient.c.s
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/exchange/src/handleClient.c.s
.PHONY : exchange/src/handleClient.c.s

exchange/src/hepler.o: exchange/src/hepler.c.o

.PHONY : exchange/src/hepler.o

# target to build an object file
exchange/src/hepler.c.o:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/exchange/src/hepler.c.o
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/exchange/src/hepler.c.o
.PHONY : exchange/src/hepler.c.o

exchange/src/hepler.i: exchange/src/hepler.c.i

.PHONY : exchange/src/hepler.i

# target to preprocess a source file
exchange/src/hepler.c.i:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/exchange/src/hepler.c.i
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/exchange/src/hepler.c.i
.PHONY : exchange/src/hepler.c.i

exchange/src/hepler.s: exchange/src/hepler.c.s

.PHONY : exchange/src/hepler.s

# target to generate assembly for a file
exchange/src/hepler.c.s:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/exchange/src/hepler.c.s
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/exchange/src/hepler.c.s
.PHONY : exchange/src/hepler.c.s

exchange/src/initClient.o: exchange/src/initClient.c.o

.PHONY : exchange/src/initClient.o

# target to build an object file
exchange/src/initClient.c.o:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/exchange/src/initClient.c.o
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/exchange/src/initClient.c.o
.PHONY : exchange/src/initClient.c.o

exchange/src/initClient.i: exchange/src/initClient.c.i

.PHONY : exchange/src/initClient.i

# target to preprocess a source file
exchange/src/initClient.c.i:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/exchange/src/initClient.c.i
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/exchange/src/initClient.c.i
.PHONY : exchange/src/initClient.c.i

exchange/src/initClient.s: exchange/src/initClient.c.s

.PHONY : exchange/src/initClient.s

# target to generate assembly for a file
exchange/src/initClient.c.s:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/exchange/src/initClient.c.s
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/exchange/src/initClient.c.s
.PHONY : exchange/src/initClient.c.s

main.o: main.c.o

.PHONY : main.o

# target to build an object file
main.c.o:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/main.c.o
.PHONY : main.c.o

main.i: main.c.i

.PHONY : main.i

# target to preprocess a source file
main.c.i:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/main.c.i
.PHONY : main.c.i

main.s: main.c.s

.PHONY : main.s

# target to generate assembly for a file
main.c.s:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/main.c.s
.PHONY : main.c.s

views/src/HomeController.o: views/src/HomeController.c.o

.PHONY : views/src/HomeController.o

# target to build an object file
views/src/HomeController.c.o:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/views/src/HomeController.c.o
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/views/src/HomeController.c.o
.PHONY : views/src/HomeController.c.o

views/src/HomeController.i: views/src/HomeController.c.i

.PHONY : views/src/HomeController.i

# target to preprocess a source file
views/src/HomeController.c.i:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/views/src/HomeController.c.i
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/views/src/HomeController.c.i
.PHONY : views/src/HomeController.c.i

views/src/HomeController.s: views/src/HomeController.c.s

.PHONY : views/src/HomeController.s

# target to generate assembly for a file
views/src/HomeController.c.s:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/views/src/HomeController.c.s
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/views/src/HomeController.c.s
.PHONY : views/src/HomeController.c.s

views/src/LoginController.o: views/src/LoginController.c.o

.PHONY : views/src/LoginController.o

# target to build an object file
views/src/LoginController.c.o:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/views/src/LoginController.c.o
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/views/src/LoginController.c.o
.PHONY : views/src/LoginController.c.o

views/src/LoginController.i: views/src/LoginController.c.i

.PHONY : views/src/LoginController.i

# target to preprocess a source file
views/src/LoginController.c.i:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/views/src/LoginController.c.i
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/views/src/LoginController.c.i
.PHONY : views/src/LoginController.c.i

views/src/LoginController.s: views/src/LoginController.c.s

.PHONY : views/src/LoginController.s

# target to generate assembly for a file
views/src/LoginController.c.s:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/views/src/LoginController.c.s
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/views/src/LoginController.c.s
.PHONY : views/src/LoginController.c.s

views/src/ShowController.o: views/src/ShowController.c.o

.PHONY : views/src/ShowController.o

# target to build an object file
views/src/ShowController.c.o:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/views/src/ShowController.c.o
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/views/src/ShowController.c.o
.PHONY : views/src/ShowController.c.o

views/src/ShowController.i: views/src/ShowController.c.i

.PHONY : views/src/ShowController.i

# target to preprocess a source file
views/src/ShowController.c.i:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/views/src/ShowController.c.i
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/views/src/ShowController.c.i
.PHONY : views/src/ShowController.c.i

views/src/ShowController.s: views/src/ShowController.c.s

.PHONY : views/src/ShowController.s

# target to generate assembly for a file
views/src/ShowController.c.s:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/views/src/ShowController.c.s
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/views/src/ShowController.c.s
.PHONY : views/src/ShowController.c.s

views/src/initScreen.o: views/src/initScreen.c.o

.PHONY : views/src/initScreen.o

# target to build an object file
views/src/initScreen.c.o:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/views/src/initScreen.c.o
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/views/src/initScreen.c.o
.PHONY : views/src/initScreen.c.o

views/src/initScreen.i: views/src/initScreen.c.i

.PHONY : views/src/initScreen.i

# target to preprocess a source file
views/src/initScreen.c.i:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/views/src/initScreen.c.i
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/views/src/initScreen.c.i
.PHONY : views/src/initScreen.c.i

views/src/initScreen.s: views/src/initScreen.c.s

.PHONY : views/src/initScreen.s

# target to generate assembly for a file
views/src/initScreen.c.s:
	$(MAKE) -f CMakeFiles/NetworkProgram.dir/build.make CMakeFiles/NetworkProgram.dir/views/src/initScreen.c.s
	$(MAKE) -f CMakeFiles/SOURCE_FILES.dir/build.make CMakeFiles/SOURCE_FILES.dir/views/src/initScreen.c.s
.PHONY : views/src/initScreen.c.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... NetworkProgram"
	@echo "... SOURCE_FILES"
	@echo "... exchange/src/handleClient.o"
	@echo "... exchange/src/handleClient.i"
	@echo "... exchange/src/handleClient.s"
	@echo "... exchange/src/hepler.o"
	@echo "... exchange/src/hepler.i"
	@echo "... exchange/src/hepler.s"
	@echo "... exchange/src/initClient.o"
	@echo "... exchange/src/initClient.i"
	@echo "... exchange/src/initClient.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... views/src/HomeController.o"
	@echo "... views/src/HomeController.i"
	@echo "... views/src/HomeController.s"
	@echo "... views/src/LoginController.o"
	@echo "... views/src/LoginController.i"
	@echo "... views/src/LoginController.s"
	@echo "... views/src/ShowController.o"
	@echo "... views/src/ShowController.i"
	@echo "... views/src/ShowController.s"
	@echo "... views/src/initScreen.o"
	@echo "... views/src/initScreen.i"
	@echo "... views/src/initScreen.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

