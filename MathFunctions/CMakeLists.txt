add_library(MathFunctions mathFunction.cpp)
target_include_directories(MathFunctions INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

option(USE_MYMATH "Use tutorial provided math implementation" ON)
if (USE_MYMATH)
	target_compile_definitions(MathFunctions PRIVATE "USE_MYMATH")

	add_library(SqrtLibrary STATIC mysqrt.cpp)
	target_include_directories(SqrtLibrary PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

	set_target_properties(SqrtLibrary PROPERTIES POSITION_INDEPENDENT_CODE ${BUILD_SHARED_LIBS})
	target_link_libraries(MathFunctions PRIVATE SqrtLibrary)
endif()

target_compile_definitions(MathFunctions PRIVATE "EXPORTING_MYMATH")

# # install rules
# set(installable_libs MathFunctions)
# if (TARGET SqrtLibrary)
# 	list(APPEND installable_libs SqrtLibrary)
# endif()

install(TARGETS MathFunctions DESTINATION libs)
install(FILES mathFunction.h mysqrt.h DESTINATION include)
