# CMake version
cmake_minimum_required(VERSION 3.0)

# Project name
project(cafe)

# Define the search path for header files
include_directories(headers)

# Specify the required C++ standard
if(CMAKE_VERSION GREATER "3.1.2") 
    set(CMAKE_CXX_STANDARD 14)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS OFF)
else()
    if(CMAKE_COMPILER_IS_GNUCXX)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
    endif()    
endif()    

# Define the executable
add_executable(${PROJECT_NAME}
               headers/CoffeeOrder.hpp
               headers/DrinkOrder.hpp
               headers/LatteOrder.hpp
               headers/Customer.hpp
               headers/Cake.hpp
               headers/Table.hpp
               headers/LockTable.hpp
               src/CoffeeOrder.cpp
               src/LatteOrder.cpp
               src/DrinkOrder.cpp
               src/Customer.cpp
               src/Cake.cpp
               src/Table.cpp
               src/LockTable.cpp
               src/main.cpp)
