cmake_minimum_required(VERSION 3.2)

project(Reserve_Polish_notation_calculator)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Make this a GUI application on Windows
if(WIN32)
  set(CMAKE_WIN32_EXECUTABLE ON)
endif()

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()


# Turn on automatic invocation of the MOC, UIC & RCC
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)


# Configure Qt
find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Qt5 COMPONENTS Widgets REQUIRED)


INCLUDE_DIRECTORIES(
        ${CMAKE_SOURCE_DIR}/tools
        ${CMAKE_SOURCE_DIR}/src
        ${CMAKE_SOURCE_DIR}/src/internal
        ${CMAKE_SOURCE_DIR}/src/Litteral
)


SET(all_SOURCES 
        ${CMAKE_CURRENT_SOURCE_DIR}/src/controleur.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Litteral/LitEntier.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Litteral/LitExpression.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Litteral/LitNumerique.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Litteral/LitRationelle.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Litteral/LitReelle.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Litteral/LitAtom.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Litteral/LitProgramme.cpp
        
        ${CMAKE_CURRENT_SOURCE_DIR}/src/MainWindow.cpp

        ${CMAKE_CURRENT_SOURCE_DIR}/src/OperateurManager.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Operateur.cpp

        ${CMAKE_CURRENT_SOURCE_DIR}/src/Pile.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/qcomputer.cpp
   )

ADD_LIBRARY(calculator  STATIC ${all_SOURCES})
# add_executable(Student_project ${all_SOURCES})



# Add the Qt5 components for linking
target_link_libraries(calculator  Qt5::Widgets)
target_link_libraries(calculator  Qt5::Core)
target_link_libraries(calculator  Qt5::Gui)


add_subdirectory(tools)
add_subdirectory(src)

