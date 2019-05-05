# Set minimum required version
cmake_minimum_required(VERSION 3.0.0)
# Set C++ compiler
set(CMAKE_CXX_COMPILER clang++)
# Set project name and language
project(Qt_Learning CXX)

# Find Qt5Widgets package
find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)

# Set include directories
include_directories(src)

# Enable auto moc
set(CMAKE_AUTOMOC ON)

# Enable auto uic
set(CMAKE_AUTOUIC ON)

# Enable auto rcc
set(CMAKE_AUTORCC ON)

# Add subdirectories
add_subdirectory(src/iconeditor)

#QT5_ADD_RESOURCES(RESOURCES res/resource.qrc)

# Set source
set(APP_SOURCE src/main.cc)
add_executable(${PROJECT_NAME} ${APP_SOURCE} ${RESOURCES})

# Link Qt5 library
target_link_libraries(${PROJECT_NAME}
    Qt5::Core Qt5::Gui Qt5::Widgets
    IconEditor
)