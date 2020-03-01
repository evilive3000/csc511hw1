cmake_minimum_required(VERSION 3.15)
project(csc511hw1)

set(CMAKE_CXX_STANDARD 14)

add_executable(csc511hw1 main.cpp src/Person.cpp src/Person.h src/Student.cpp src/Student.h src/GradStudent.cpp src/GradStudent.h src/PhDStudent.cpp src/PhDStudent.h)