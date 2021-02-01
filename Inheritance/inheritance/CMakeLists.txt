cmake_minimum_required(VERSION 3.17)
project(inheritance)

set(CMAKE_CXX_STANDARD 20)

add_executable(inheritance main.cpp Passport.cpp Passport.h ForeignPassport.cpp ForeignPassport.h)