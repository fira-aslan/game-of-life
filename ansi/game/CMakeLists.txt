cmake_minimum_required(VERSION 3.0)
project(game LANGUAGES C)
add_library(${PROJECT_NAME} "")
target_sources(${PROJECT_NAME} PRIVATE life.c life.h)
target_include_directories(${PROJECT_NAME} PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))