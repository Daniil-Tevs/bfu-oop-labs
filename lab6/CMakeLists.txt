cmake_minimum_required(VERSION 3.26)
project(Lab6)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab6 main.cpp
        src/Control.h
        src/Form.cpp
        src/Form.h
        src/Windows/WindowsButton.cpp
        src/Windows/WindowsButton.h
        src/Windows/WindowsLabel.cpp
        src/Windows/WindowsLabel.h
        src/Windows/WindowsTextBox.cpp
        src/Windows/WindowsTextBox.h
        src/Windows/WindowsControlFactory.cpp
        src/Windows/WindowsControlFactory.h
        src/Linux/LinuxButton.cpp
        src/Linux/LinuxButton.h
        src/Linux/LinuxLabel.cpp
        src/Linux/LinuxLabel.h
        src/Linux/LinuxTextBox.cpp
        src/Linux/LinuxTextBox.h
        src/Linux/LinuxControlFactory.cpp
        src/Linux/LinuxControlFactory.h
        src/MacOS/MacOSButton.cpp
        src/MacOS/MacOSButton.h
        src/MacOS/MacOSLabel.cpp
        src/MacOS/MacOSLabel.h
        src/MacOS/MacOSTextBox.cpp
        src/MacOS/MacOSTextBox.h
        src/MacOS/MacOSControlFactory.cpp
        src/MacOS/MacOSControlFactory.h
)
