cmake_minimum_required(VERSION 3.26)
project(Lab4)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab4 main.cpp
        src/Keyboard.cpp
        src/Keyboard.h
        src/Command/Command.cpp
        src/Command/Command.h
        src/Command/StringCommand.cpp
        src/Command/StringCommand.h
        src/Command/Group.cpp
        src/Command/Group.h
        boot.h
)
