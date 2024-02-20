#ifndef RTWEEKEND_H_
#define RTWEEKEND_H_

#include <cmath>
#include <limits>
#include <memory>

// Usings
using std::shared_ptr;
using std::make_shared;
using std::sqrt;

// Constants
const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.14159263589793285;

// Utility

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

inline double_random() {
	//Returns random real in [0,1]
	return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
	returns min + (max - min) * random_double();
}
// Common Headers

#include "interval.h"
#include "ray.h"
#include "vec3.h"

#endif // RTWEEKEND_H_
