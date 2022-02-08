# Install script for directory: D:/ClionProjects/DSA

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/DSA")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "D:/CLion/bin/mingw/bin/objdump.exe")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Hashing/unordered_set/unordered_setOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Hashing/unordered_map/unordered_mapOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Hashing/CountDistinctElements/CountDistinctElementsOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Hashing/FrequencyOfElements/FrequencyOfElementsOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Hashing/IntersectionOf2Arrays/IntersectionOf2ArraysOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Hashing/unionOf2SortedArrays/unionOf2SortedArraysOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Hashing/PairWithGivenSumInUnsortedArray/PairWithGivenSumInUnsortedArrayOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Hashing/SubarrayWith0Sum/SubarrayWith0SumOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Hashing/SubarrayWithGivenSum/SubarrayWithGivenSumOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/String/IntroductionToString/IntroductionToStringOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/String/PalindromeCheck/PalindromeCheckOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/String/StringIsSubsequenceOfOther/StringIsSubsequenceOfOtherOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/String/CheckAnagram/CheckAnagramOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/String/LeftmostRepeatingCharacter/LeftmostRepeatingCharacterOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/LLImplement/LLImplementatOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/TraversingLL/TraversingLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/RecursiveTraversalLL/RecursiveTraversalLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/InsertAtBegin/InsertAtBeginOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/InsertAtEnd/InsertAtEndOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/DeleteFirstNode/DeleteFirstNodeOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/DeleteLastNode/DeleteLastNodeOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/InsertAtAnyPos/InsertAtAnyPosOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/SearchInLL/SearchInLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/DoubleLL/DoubleLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/InsertAtBeginInDoubleLL/InsertAtBeginInDoubleLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/InsertAtEndInDoubleLL/InsertAtEndInDoubleLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/ReverseADoubleLL/ReverseADoubleLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/DeleteHeadDDL/DeleteHeadDDLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/DeleteLastDDL/DeleteLastDDLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/InsertAtAnyPosDDL/InsertAtAnyPosDDLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/RemoveDuplicateLL/RemoveDuplicateLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/CircularLL/CircularLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/InsertAtBeginCLL/InsertAtBeginCLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/InsertAtEndCLL/InsertAtEndCLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/DeleteHeadCLL/DeleteHeadCLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/DeleteKthCLL/DeleteKthCLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/CircularDoubleLL/CircularDoubleLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/SortedInsertLL/SortedInsertLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/InsertMiddleLL/InsertMiddleLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/NthNodeFromEnd/NthNodeFromEndOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/ReverseIterativeLL/ReverseIterativeLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/LinkedList/MergeTwoSortedLL/MergeTwoSortedLLOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Stack/ArrayImplementation/ArrayImplementationOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Stack/VectorImplementation/VectorImplementationOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Stack/LLImplementation/LLImplementationOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Stack/StackTraversal/StackTraversalOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Stack/BalancedParantheses/BalancedParanthesesOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Stack/ImplementTwoStack/ImplementTwoStackOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Queue/SimpleArrayImplementation/SimpleArrayImplementationOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Queue/CircularArrayImplementation/CircularArrayImplementationOutput/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("D:/ClionProjects/DSA/Queue/LinkedListImplementation/LinkedListImplementationOutput/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "D:/ClionProjects/DSA/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
