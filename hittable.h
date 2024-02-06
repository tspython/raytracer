#ifndef HITTABLE_H_
#define HITTABLE_H_

#include "ray.h"

class hit_record {
  public:
    point3 p;
    vec3 normal;
    double t;
};

class hittable {
  public:
    virtual ~hittable() = default;
    virtual bool hit(const ray& r, double ray_tmin, double ray_tmax, hitrecord& rec) const = 0;
};

#endif // HITTABLE_H_
