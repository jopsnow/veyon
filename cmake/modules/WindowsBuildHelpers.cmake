MACRO(ADD_WINDOWS_RESOURCE TARGET)
	IF(VEYON_BUILD_WIN32)
		SET(WINRC "${CMAKE_CURRENT_BINARY_DIR}/${TARGET}.rc")
		SET(RCOBJ "${CMAKE_CURRENT_BINARY_DIR}/winrc.obj")
		ADD_CUSTOM_COMMAND(OUTPUT ${RCOBJ}
							COMMAND ${WINDRES}
								-I${CMAKE_CURRENT_SOURCE_DIR}
								-o${RCOBJ}
								-i${WINRC}
							DEPENDS ${WINRC})
		TARGET_SOURCES(${TARGET} PUBLIC ${RCOBJ})
	ENDIF(VEYON_BUILD_WIN32)
ENDMACRO()

MACRO(MAKE_GRAPHICAL_APP TARGET)
	IF(VEYON_BUILD_WIN32)
		SET_TARGET_PROPERTIES(${TARGET} PROPERTIES LINK_FLAGS -mwindows)
	ENDIF()
ENDMACRO()

MACRO(MAKE_CONSOLE_APP TARGET)
	IF(VEYON_BUILD_WIN32)
		SET_TARGET_PROPERTIES(${TARGET} PROPERTIES LINK_FLAGS -mconsole)
	ENDIF()
ENDMACRO()

