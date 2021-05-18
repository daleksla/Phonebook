cmake_minimum_required(VERSION 3.2) 
set(CMAKE_CXX_STANDARD 14) # using C++14
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++14 -lsqlite3 -lpython3.4m -lpython3.7m")
project(cmake_example CXX)

# location of source code files
include_directories(${CMAKE_SOURCE_DIR})


# tell cmake where to put the executables that it creates
file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/.) # deposit it in current directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/. )
#if u put another folder name it'd put it there / would create a folder if needed

# where to put the object files it creates
file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/lib) # make a folder called lib
SET(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)

# files we actually want to compile
add_library( myOtherFiles addOrganisation.cpp 
addPerson.cpp 
getOrganisation.cpp 
getPerson.cpp 
getOccupation.cpp 
data.cpp 
insert.cpp )

add_executable( sourcev3 source.cpp ) # file with our main function in it
target_link_libraries(sourcev3 LINK_PRIVATE myOtherFiles LINK_PUBLIC sqlite3 python2.7 python3.4m python3.7m) #links our main file, the other files, and the public sqlite3