cmake_minimum_required(VERSION 3.10)
project(PdfViewer VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS
    Widgets)

file(GLOB_RECURSE SOURCES
    "src/*.cpp"
    "src/*.h"
)
qt_add_executable(${PROJECT_NAME}
    ${SOURCES}
)

add_library(poppler-qt6 STATIC IMPORTED)
set_target_properties(poppler-qt6 PROPERTIES
    IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/3rdpart/poppler-win64/lib/poppler-qt6.lib"
    IMPORTED_IMPLIB "${CMAKE_SOURCE_DIR}/3rdpart/poppler-win64/lib/poppler-qt6.lib"
    INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/3rdpart/poppler-win64/include"
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    Qt6::Widgets
    poppler-qt6
)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)
