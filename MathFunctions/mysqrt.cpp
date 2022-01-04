#include "mysqrt.h"

#include <iostream>

namespace mathFunction{
namespace detail {
    double CalSqrt(double x)
    {
        return sqrt(x);
    }

    double CalLogExp(double x)
    {
        double result = exp(log(x) * 0.5);
        std::cout << "Computing sqrt of " << x << " to be " << result
                    << " using log and exp" << std::endl;
        return result;
    }
}
}
