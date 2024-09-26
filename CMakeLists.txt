cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME "Bank project")
project(${PROJECT_NAME}) # Project name

# Add the include directory to the project
include_directories(include)

# Collect all header files in the include directory
file(GLOB HEADER_FILES "include/*.h" "include/bank/*.h")

# Collect all source files in the src directory
file(GLOB SRC_FILES "src/bank/*.cpp")

set(LIBRARY_NAME "Bank")

# Create a library with all source files and header files
add_library(${LIBRARY_NAME} ${SRC_FILES} ${HEADER_FILES})

# Create executables for each main file
add_executable(main "src/main.cpp")

# Link the Bank library to the main executable
target_link_libraries(main PRIVATE ${LIBRARY_NAME})