#ifndef __MATH_FUNCTION_MATH_FUNCTION_H__
#define __MATH_FUNCTION_MATH_FUNCTION_H__

#if defined(_WIN32)
#  if defined(MATH_EXPORT)
#    define API_MATH __declspec(dllexport)
#  elif defined(MATH_SHARED)
#    define API_MATH __declspec(dllimport)
#  endif
#else
#   if defined(MATH_EXPORT) || defined(MATH_SHARED)
#       if defined(__GNUC__) || defined(__clang__)
#           define API_MATH __attribute__((visibility("default")))
#       endif
#   endif
#endif
#ifndef API_MATH
#   define API_MATH
#endif

namespace mathFunction {
    double API_MATH CalSqrt(double x);
    double API_MATH CalLogExp(double x);
}

#endif //__MATH_FUNCTION_MATH_FUNCTION_H__
