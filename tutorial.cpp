
#include <iostream>
#include <string>

#include "TutorialConfig.h"

#ifdef USE_MYMATH
#   include "MathFunctions/mysqrt.h"
#else
#   include <math.h>
#endif

int main(int argc, char* argv[])
{
    if (argc < 2) {
        // report version
        std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
                << Tutorial_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }
    else {
        double outputValue = CalLogExp(std::stod(argv[1]));
        std::cout << argv[1] << " is " << outputValue << "\n";
    }

    return 0;
}
