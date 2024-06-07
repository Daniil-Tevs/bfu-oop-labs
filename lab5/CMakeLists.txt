cmake_minimum_required(VERSION 3.26)
project(Lab5)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab5 main.cpp
        inc/User.h
        inc/IUserManager.h
        inc/IUserRepository.h
        src/FileUserManager.cpp
        inc/FileUserManager.h
        src/FileUserRepository.cpp
        inc/FileUserRepository.h
        src/App.cpp
        inc/App.h)
