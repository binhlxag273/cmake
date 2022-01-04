#ifndef __MATH_FUNCTION_MATH_FUNCTION_H__
#define __MATH_FUNCTION_MATH_FUNCTION_H__

#if defined(_WIN32)
#  if defined(EXPORTING_MYMATH)
#    define DECLSPEC __declspec(dllexport)
#  else
#    define DECLSPEC __declspec(dllimport)
#  endif
#else // non windows
#  define DECLSPEC
#endif

namespace mathFunction {
    double DECLSPEC CalSqrt(double x);
    double DECLSPEC CalLogExp(double x);
}

#endif //__MATH_FUNCTION_MATH_FUNCTION_H__
