SET(calculation_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/internal/main.cpp
)

ADD_EXECUTABLE(calculator_app ${calculation_SRCS})

TARGET_LINK_LIBRARIES(calculator_app
                      calculator
                     )
