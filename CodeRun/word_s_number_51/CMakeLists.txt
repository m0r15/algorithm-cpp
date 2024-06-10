project(word_s_number_51)

message(STATUS "Generate ${PROJECT_NAME}")

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/src/input.txt
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

set(SOURCES
    src/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})
