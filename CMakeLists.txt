cmake_minimum_required(VERSION 3.26)
project(ProjectOOP)

set(CMAKE_CXX_STANDARD 23)

add_executable(ProjectOOP src/main.cpp
        src/Case.cpp
        src/Company.cpp
        src/Component.cpp
        src/Computershop.cpp
        src/CPU.cpp
        src/Customer.cpp
        src/GPU.cpp
        src/HardDrive.cpp
        src/Invoice.cpp
        src/Memory.cpp
        src/Motherboard.cpp
        src/PowerSupply.cpp)
