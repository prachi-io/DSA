cmake_minimum_required(VERSION 3.21)
project(DSA)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory("${PROJECT_SOURCE_DIR}/Hashing/unordered_set" "${PROJECT_SOURCE_DIR}/Hashing/unordered_set/unordered_setOutput")
add_subdirectory("${PROJECT_SOURCE_DIR}/Hashing/unordered_map" "${PROJECT_SOURCE_DIR}/Hashing/unordered_map/unordered_mapOutput")
add_subdirectory("${PROJECT_SOURCE_DIR}/Hashing/CountDistinctElements" "${PROJECT_SOURCE_DIR}/Hashing/CountDistinctElements/CountDistinctElementsOutput")
add_subdirectory("${PROJECT_SOURCE_DIR}/Hashing/FrequencyOfElements" "${PROJECT_SOURCE_DIR}/Hashing/FrequencyOfElements/FrequencyOfElementsOutput")
add_subdirectory("${PROJECT_SOURCE_DIR}/Hashing/IntersectionOf2Arrays" "${PROJECT_SOURCE_DIR}/Hashing/IntersectionOf2Arrays/IntersectionOf2ArraysOutput")
add_subdirectory("${PROJECT_SOURCE_DIR}/Hashing/unionOf2SortedArrays" "${PROJECT_SOURCE_DIR}/Hashing/unionOf2SortedArrays/unionOf2SortedArraysOutput")
add_subdirectory("${PROJECT_SOURCE_DIR}/Hashing/PairWithGivenSumInUnsortedArray" "${PROJECT_SOURCE_DIR}/Hashing/PairWithGivenSumInUnsortedArray/PairWithGivenSumInUnsortedArrayOutput")
add_subdirectory("${PROJECT_SOURCE_DIR}/Hashing/SubarrayWith0Sum" "${PROJECT_SOURCE_DIR}/Hashing/SubarrayWith0Sum/SubarrayWith0SumOutput")
add_subdirectory("${PROJECT_SOURCE_DIR}/Hashing/SubarrayWithGivenSum" "${PROJECT_SOURCE_DIR}/Hashing/SubarrayWithGivenSum/SubarrayWithGivenSumOutput")