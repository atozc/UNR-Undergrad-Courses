cmake_minimum_required(VERSION 2.8.9)

project(proj7)

include_directories(include/MyModule)

set(MYMODULE_SOURCES src/MyModule/MyString.cpp)

add_library(MyModule ${MYMODULE_SOURCES})

add_executable(proj7 src/proj7.cpp)

target_link_libraries(proj7 MyModule)

install(TARGETS proj7 MyModule 
	RUNTIME DESTINATION ${PROJECT_SOURCE_DIR}/devel/bin
	LIBRARY DESTINATION ${PROJECT_SOURCE_DIR}/devel/bin
	ARCHIVE DESTINATION ${PROJECT_SOURCE_DIR}/devel/bin/static)

install(DIRECTORY ${PROJECT_SOURCE_DIR}/include
	DESTINATION ${PROJECT_SOURCE_DIR}/devel/include
	FILES_MATCHING PATTERN "*.h" PATTERN "*.hpp")


