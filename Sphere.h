/****************************
 * Cole Haas 
 * February 26, 2021
****************************/

/************
 * Sphere.h *
*************/

#ifndef SPHERE_H
#define SPHERE_H

#include "Vector.h"
#include <cmath>
#include "Ray.h"


    
class Sphere {
    private:
        Vector position;
        float radius;
        Color color;
    public:
        Sphere();
        Sphere(Vector p, float r, Color c);
        ~Sphere();
        float intersection(const Ray& r) const;
        const Color get_color() const;
};


#endif