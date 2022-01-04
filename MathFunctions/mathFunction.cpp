#include "MathFunction.h"

#include <math.h>

#ifdef USE_MYMATH
    #include "mysqrt.h"
#endif

namespace mathFunction {
    double CalSqrt(double x) {
        #ifdef USE_MYMATH
            return detail::CalSqrt(x);
        #else
            std::cout << "Using static library\n";
            return std::sqrt(x);
        #endif
    }

    double DECLSPEC CalLogExp(double x) {
        #ifdef USE_MYMATH
            return detail::CalLogExp(x);
        #else
            std::cout << "Using static library\n";
            return std::sqrt(x);
        #endif
    }
}
