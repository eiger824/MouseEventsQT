cmake_minimum_required(VERSION 3.2)
project(MouseEvent)
find_package(Qt4 REQUIRED)

INCLUDE(${QT_USE_FILE})

# add definitions
ADD_DEFINITIONS(
  ${QT_DEFINITIONS} 
)

include_directories(
)

set(HEADERS
  gui.hpp
  )

set(SOURCES
  gui.cpp
  )

qt4_wrap_cpp(HEADERS_MOC ${HEADERS})

add_executable(mouse
  main.cpp
  ${SOURCES}
  ${HEADERS_MOC}
  )

target_link_libraries(mouse
  Qt4::QtGui
  Qt4::QtXml
  )

