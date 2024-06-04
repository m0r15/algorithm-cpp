project(example_project)

set(SOURCES
    src/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directorie(${PROJECT_NAME}
    PRIVATE ${PROJECT_SOURCE_DIR}/include
)