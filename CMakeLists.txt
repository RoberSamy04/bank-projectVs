cmake_minimum_required(VERSION 3.29)
project(bank_projectVs)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(bank_projectVs
    Admin.cpp
    Admin.h
    Client.cpp
    Client.h
    Employee.cpp
    Employee.h
    main.cpp
    Person.cpp
    Person.h
    Validation.cpp
    Validation.h)
