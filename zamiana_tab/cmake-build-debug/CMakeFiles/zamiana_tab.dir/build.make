# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\mghej\Documents\CLionProjects\zamiana_tab

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\mghej\Documents\CLionProjects\zamiana_tab\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\zamiana_tab.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\zamiana_tab.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\zamiana_tab.dir\flags.make

CMakeFiles\zamiana_tab.dir\main.cpp.obj: CMakeFiles\zamiana_tab.dir\flags.make
CMakeFiles\zamiana_tab.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mghej\Documents\CLionProjects\zamiana_tab\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/zamiana_tab.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\zamiana_tab.dir\main.cpp.obj /FdCMakeFiles\zamiana_tab.dir\ /FS -c C:\Users\mghej\Documents\CLionProjects\zamiana_tab\main.cpp
<<

CMakeFiles\zamiana_tab.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zamiana_tab.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe > CMakeFiles\zamiana_tab.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mghej\Documents\CLionProjects\zamiana_tab\main.cpp
<<

CMakeFiles\zamiana_tab.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zamiana_tab.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\zamiana_tab.dir\main.cpp.s /c C:\Users\mghej\Documents\CLionProjects\zamiana_tab\main.cpp
<<

# Object files for target zamiana_tab
zamiana_tab_OBJECTS = \
"CMakeFiles\zamiana_tab.dir\main.cpp.obj"

# External object files for target zamiana_tab
zamiana_tab_EXTERNAL_OBJECTS =

zamiana_tab.exe: CMakeFiles\zamiana_tab.dir\main.cpp.obj
zamiana_tab.exe: CMakeFiles\zamiana_tab.dir\build.make
zamiana_tab.exe: CMakeFiles\zamiana_tab.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\mghej\Documents\CLionProjects\zamiana_tab\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable zamiana_tab.exe"
	"C:\Program Files (x86)\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\zamiana_tab.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\zamiana_tab.dir\objects1.rsp @<<
 /out:zamiana_tab.exe /implib:zamiana_tab.lib /pdb:C:\Users\mghej\Documents\CLionProjects\zamiana_tab\cmake-build-debug\zamiana_tab.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\zamiana_tab.dir\build: zamiana_tab.exe
.PHONY : CMakeFiles\zamiana_tab.dir\build

CMakeFiles\zamiana_tab.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\zamiana_tab.dir\cmake_clean.cmake
.PHONY : CMakeFiles\zamiana_tab.dir\clean

CMakeFiles\zamiana_tab.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\mghej\Documents\CLionProjects\zamiana_tab C:\Users\mghej\Documents\CLionProjects\zamiana_tab C:\Users\mghej\Documents\CLionProjects\zamiana_tab\cmake-build-debug C:\Users\mghej\Documents\CLionProjects\zamiana_tab\cmake-build-debug C:\Users\mghej\Documents\CLionProjects\zamiana_tab\cmake-build-debug\CMakeFiles\zamiana_tab.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\zamiana_tab.dir\depend

