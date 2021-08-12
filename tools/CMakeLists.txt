

MACRO(PROJECT_TOOLS_BUILD)

    SET(_filename ${ARGV0})
    STRING(REPLACE "." ";" _temp ${_filename})
    LIST(GET _temp 0 _target)

    SET(${_target}_SRCS
        ${CMAKE_CURRENT_SOURCE_DIR}/${_target}.cpp
    )

    ADD_EXECUTABLE(${_target} ${${_target}_SRCS})
    SET_TARGET_PROPERTIES(${_target} PROPERTIES OUTPUT_NAME ${_target})

    IF(WIN32)
        SET_TARGET_PROPERTIES(${_target} PROPERTIES COMPILE_FLAGS ${COMPILE_WARNS_FLAGS})
    ELSE()
        SET_TARGET_PROPERTIES(${_target} PROPERTIES COMPILE_FLAGS "-g ${COMPILE_WARNS_FLAGS}")
    ENDIF()

    TARGET_LINK_LIBRARIES(${_target}            
                        calculator
                        )

ENDMACRO()

# ----------------------------------------------------------------------------------

# Add here new tools to compile.

PROJECT_TOOLS_BUILD(testUnit1.cpp)
PROJECT_TOOLS_BUILD(Litterale_utest.cpp)






