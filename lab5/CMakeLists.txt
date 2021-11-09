cmake_minimum_required(VERSION 3.11)

project(lab5)
include_directories(include)

add_executable(lab5 src/main.cpp src/Point.cpp src/Point.cpp include/Point.h include/Pojazd.h src/Pojazd.cpp)