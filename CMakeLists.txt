cmake_minimum_required(VERSION 3.2)

set(CMAKE_CXX_STANDARD 14)

include("cmake/HunterGate.cmake") # teach your project about Hunter (before project())

HunterGate( # Latest release shown here: https://github.com/ruslo/hunter/releases
    URL "https://github.com/ruslo/hunter/archive/v0.20.17.tar.gz"
    SHA1 "d7d1d5446bbf20b78fa5ac1b52ecb67a01c3790e"
    LOCAL # <----- load cmake/Hunter/config.cmake
)

project(demo-keras-app)

hunter_add_package(frugally-deep)
find_package(frugally-deep CONFIG REQUIRED)

add_executable(main main.cpp)
add_executable(seq_model seq_model.cpp)
target_link_libraries(main PUBLIC frugally-deep::fdeep) # add frugally-deep and dependencies (libs/includes/flags/definitions)
target_link_libraries(seq_model PUBLIC frugally-deep::fdeep) # add frugally-deep and dependencies (libs/includes/flags/definitions)
