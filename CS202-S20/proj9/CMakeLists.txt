cmake_minimum_required(VERSION 2.8.9) 

project(proj9) 

include_directories(include/MyModule) 

set(MYMODULE_SOURCES src/MyModule/ArrayQueue.cpp 
		     src/MyModule/DataType.cpp
 		     src/MyModule/NodeQueue.cpp)

add_library(MyModule ${MYMODULE_SOURCES})

add_executable(proj9 src/proj9.cpp)

target_link_libraries(proj9 MyModule)

install(TARGETS proj9 MyModule
	RUNTIME DESTINATION ${PROJECT_SOURCE_DIR}/devel/bin
	LIBRARY DESTINATION ${PROJECT_SOURCE_DIR}/devel/lib
	ARCHIVE DESTINATION ${PROJECT_SOURCE_DIR}/devel/lib/static)

install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/
	DESTINATION ${PROJECT_SOURCE_DIR}/devel/include
	FILES_MATCHING PATTERN "*.h" PATTERN "*.hpp")