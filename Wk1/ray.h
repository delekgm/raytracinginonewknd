#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray{
    public:
        point3 orig;
        vec3 dir;

        // Constructors
        ray(){};
        ray(const point3 &origin, const vec3 &direction) 
        : orig(origin), dir(direction){}

        // Methods
        point3 origin() const { return this->orig; }
        vec3 direction() const { return this->dir; }

        point3 at(double t) const {
            return orig + t * dir;
        }

};

#endif