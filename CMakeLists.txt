cmake_minimum_required(VERSION 3.26)
project(ProjectOOP)

set(CMAKE_CXX_STANDARD 23)

add_executable(ProjectOOP source/main.cpp
        classes/Case.cpp
        classes/Company.cpp
        classes/Component.cpp
        classes/Computershop.cpp
        classes/CPU.cpp
        classes/Customer.cpp
        classes/GPU.cpp
        classes/HardDrive.cpp
        classes/Invoice.cpp
        classes/Memory.cpp
        classes/Motherboard.cpp
        classes/PowerSupply.cpp)
