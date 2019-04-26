# Set minimum required version
cmake_minimum_required(VERSION 3.0.0)
project(GoToCellDialog CXX)
add_library(${PROJECT_NAME} STATIC
    gotocelldialog.cc
    gotocelldialog.ui
)
target_link_libraries(${PROJECT_NAME}
    Qt5::Core Qt5::Gui Qt5::Widgets
)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}_autogen/include)