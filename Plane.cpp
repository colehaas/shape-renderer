/****************************
 * Cole Haas 
 * February 26, 2021
****************************/

/*************
 * Plane.cpp *
**************/

#include "Plane.h"
#include <iostream>

Plane::Plane(){
    Vector v(0,0,0);
    Color c;
    c.r = 0;
    c.g = 0;
    c.b = 0;
    position = v;
    normal_direction = v;
    color = c;
}

Plane::Plane(const Vector p, const Vector n, const Color c) {
    position = p; 
    normal_direction = n; 
    color = c;
}

Plane::~Plane(){}

float Plane::intersection(const Ray& r) const {
    float a, b;
    
    Vector ray_direction = r.get_direction();
    Vector ray_origin = r.get_position();
    Vector L = (ray_origin - position);
    a = (float)(-L * normal_direction);
    b = ray_direction * normal_direction;

    if (b == 0) {
        return -1.0;
    }

    float t = a/b;

    if (t < 0) {
        return -1.0;
    }

    return t;
}

const Color Plane::get_color() const {
    return color;
}


