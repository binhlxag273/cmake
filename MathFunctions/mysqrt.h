#ifndef __MATH_FUNCTIONS_MYSQRT_H__
#define __MATH_FUNCTIONS_MYSQRT_H__

#if defined(_WIN32)
#  if defined(EXPORTING_MYMATH)
#    define DECLSPEC __declspec(dllexport)
#  else
#    define DECLSPEC __declspec(dllimport)
#  endif
#else // non windows
#  define DECLSPEC
#endif

double CalSqrt(double x);
double CalLogExp(double x);

#endif //__MATH_FUNCTIONS_MYSQRT_H__
