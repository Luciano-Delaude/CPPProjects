#include <math.h>
#include <stdexcept>
#include "myMathlib.hpp"
double mySqrt(double x){
    if(x<0){
        throw std::runtime_error("Negative argument");
    }
    return sqrt(x);
}