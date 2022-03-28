/****************************
 * Cole Haas 
 * February 26, 2021
****************************/

/***********
 * Plane.h *
************/

#ifndef PLANE_H
#define PLANE_H

#include "Vector.h"
#include "Ray.h"



class Plane {
    private:
        Vector position;
        Vector normal_direction;
        Color color;
    public:

        Plane();
        Plane(const Vector p, const Vector n, const Color c);

        ~Plane();

        float intersection(const Ray& r) const;
        const Color get_color() const;
};


#endif