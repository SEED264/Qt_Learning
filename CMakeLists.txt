# Set minimum required version
cmake_minimum_required(VERSION 3.0.0)
# Set C++ compiler
set(CMAKE_CXX_COMPILER clang++)
# Set project name and language
project(Qt_Learning CXX)

# Find Qt5Widgets package
find_package(Qt5Widgets REQUIRED)

# Set include directories
include_directories(src)

# Enable auto moc
set(CMAKE_AUTOMOC ON)

# Set main source to variable
set(APP_SOURCE src/Main.cc src/finddialog.cc)
add_executable(${PROJECT_NAME} ${APP_SOURCE})

# Link Qt5 library
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)