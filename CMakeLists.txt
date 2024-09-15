cmake_minimum_required(VERSION 3.29)
project(bank_projectVs)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(bank_projectVs
    Source/Admin.cpp
    Source/Admin.h
    Source/Client.cpp
    Source/Client.h
    Source/Employee.cpp
    Source/Employee.h
    Source/main.cpp
    Source/Person.cpp
    Source/Person.h
    Source/Validation.cpp
    Source/Validation.h
        Source/main.cpp
        Source/DataSourceInterface.h
        Source/FileManager.h
        Source/FileManager.cpp
        Source/Parser.h
        Source/Parser.cpp
        Source/FilesHelper.h
        Source/FilesHelper.cpp)
