# CMake generated Testfile for 
# Source directory: /home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife
# Build directory: /home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(CUnit_Tests "/home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife/tests")
set_tests_properties(CUnit_Tests PROPERTIES  _BACKTRACE_TRIPLES "/home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife/CMakeLists.txt;13;add_test;/home/user/DevTech/Game of Life/game-of-life/SDL2_Impl/GameOfLife/CMakeLists.txt;0;")
subdirs("clipped")
subdirs("game")
