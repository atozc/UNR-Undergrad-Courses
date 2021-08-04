make_minimum_required(VERSION 2.8.9)

project(projX)

include_directories(include/MyModule)

set(MYMODULE_SOURCES src/MyModule/DateType.cpp
                     src/MyModule/SmartPtr.cpp)

add_library(MyModule ${MYMODULE_SOURCES})

add_executable(projX src/projX.cpp)

target_link_libraries(projX MyModule)

install(TARGETS projX MyModule 
	RUNTIME DESTINATION ${PROJECT_SOURCE_DIR}/devel/bin
	LIBRARY DESTINATION ${PROJECT_SOURCE_DIR}/devel/bin
	ARCHIVE DESTINATION ${PROJECT_SOURCE_DIR}/devel/bin/static)

install(DIRECTORY ${PROJECT_SOURCE_DIR}/include
	DESTINATION ${PROJECT_SOURCE_DIR}/devel/include
	FILES_MATCHING PATTERN "*.h" PATTERN "*.hpp")
