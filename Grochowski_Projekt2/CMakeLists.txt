cmake_minimum_required(VERSION 3.20)
project(Grochowski_Projekt2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Grochowski_Projekt2
        mojProjektLab.cpp
        MyErrorAndCom.cpp
        MyErrorAndCom.h
        MyInterf.cpp
        MyInterf.h
        MyStack.cpp
        MyStack.h
        MyStudent.cpp
        MyStudent.h)
