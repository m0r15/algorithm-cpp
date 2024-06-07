project(shorter_path_length)

message(STATUS "Generate ${PROJECT_NAME}")

set(SOURCES
    src/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})
