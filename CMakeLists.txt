cmake_minimum_required(VERSION 3.27)
project(VacumCleanerAgent)

set(CMAKE_CXX_STANDARD 23)

include_directories(List)
include_directories(Map)
include_directories(Pair)
include_directories(PriorityQueue)
include_directories(testData)
include_directories(Vector)

add_executable(VacumCleanerAgent
        Main.cpp)
