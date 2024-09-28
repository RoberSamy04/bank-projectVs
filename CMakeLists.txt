cmake_minimum_required(VERSION 3.29)

# Set the project name
project(bank_projectVs)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Add the executable
add_executable(bank_projectVs
        Source/main.cpp
        Source/bank/Admin.cpp
        include/bank/Admin.h
        Source/bank/Client.cpp
        include/bank/Client.h
        Source/bank/Employee.cpp
        include/bank/Employee.h
        Source/bank/Person.cpp
        include/bank/Person.h
        Source/bank/Validation.cpp
        include/bank/Validation.h
        include/bank/DataSourceInterface.h
        Source/bank/FileManager.cpp
        include/bank/FileManager.h
        Source/bank/Parser.cpp
        include/bank/Parser.h
        Source/bank/FilesHelper.cpp
        include/bank/FilesHelper.h
        Source/bank/ClientManager.cpp
        include/bank/ClientManager.h
        Source/bank/EmployeeManager.cpp
        include/bank/EmployeeManager.h
        Source/bank/AdminManager.cpp
        include/bank/AdminManager.h
        Source/bank/Screens.cpp
        include/bank/Screens.h
        include/bank.h
)