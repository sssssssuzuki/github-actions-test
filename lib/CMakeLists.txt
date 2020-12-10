cmake_minimum_required(VERSION 3.10)

set (CMAKE_CXX_STANDARD 17)

if(WIN32)
	set(OS win32)
elseif(APPLE)
	set(OS macosx)
else()
	set(OS linux)
endif()

if (POLICY CMP0074)
  cmake_policy(SET CMP0074 NEW)
endif()

if (POLICY CMP0079)
  cmake_policy(SET CMP0079 NEW)
endif()

file(GLOB cpp_files *.cpp)
file(GLOB include_files  ../include/*.h)

set(SOURCE_LIST 
  ${cpp_files}
  ${include_files}
)

add_library(sayhello STATIC ${SOURCE_LIST})

include_directories(../include)

if (WIN32)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd4068 /wd4819 /D _SILENCE_CXX17_RESULT_OF_DEPRECATION_WARNING")
endif()
