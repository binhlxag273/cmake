
add_library(MathFunctions mathFunction.cpp mysqrt.cpp)
target_include_directories(MathFunctions INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

if (USE_MYMATH)
	target_compile_definitions(MathFunctions PRIVATE USE_MYMATH)
endif()

if (BUILD_SHARED_LIBS)
	target_compile_definitions(MathFunctions PRIVATE MATH_EXPORT INTERFACE MATH_SHARED)
endif()

install(TARGETS MathFunctions DESTINATION libs)
install(FILES mathFunction.h mysqrt.h DESTINATION include)
