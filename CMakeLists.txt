cmake_minimum_required(VERSION 3.21)
project(DSA)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory("${PROJECT_SOURCE_DIR}/Hashing/unordered_set" "${PROJECT_SOURCE_DIR}/Hashing/unordered_set/unordered_setOutput")
add_subdirectory("${PROJECT_SOURCE_DIR}/Hashing/unordered_map" "${PROJECT_SOURCE_DIR}/Hashing/unordered_map/unordered_mapOutput")
