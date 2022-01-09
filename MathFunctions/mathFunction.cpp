#include "mathFunction.h"

#include <math.h>
#include <iostream>

#ifdef USE_MYMATH
    #include "mysqrt.h"
#endif

namespace mathFunction {
    double CalSqrt(double x) {
        #ifdef USE_MYMATH
            return detail::CalSqrt(x);
        #else
            std::cout << "No use mymath\n";
            return std::sqrt(x);
        #endif
    }

    double CalLogExp(double x) {
        #ifdef USE_MYMATH
            return detail::CalLogExp(x);
        #else
            std::cout << "No use mymath\n";
            return std::sqrt(x);
        #endif
    }
}
