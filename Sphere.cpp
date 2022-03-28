/****************************
 * Cole Haas 
 * February 26, 2021
****************************/

/**************
 * Sphere.cpp *
***************/

#include "Sphere.h"
#include <iostream>

Sphere::Sphere(){
    Color c;
    c.r = 255;
    c.g = 255;
    c.b = 255;
    position = Vector(0,0,0);
    radius = 0;
    color = c;
}

Sphere::Sphere(Vector p, float r, Color c) {
    position = p; 
    radius = r; 
    color = c;
}

Sphere::~Sphere(){}


float Sphere::intersection(const Ray& r) const {

    Vector ray_direction = r.get_direction();
    Vector ray_origin = r.get_position();
    Vector L = ray_origin - position; 
    float a = ray_direction * ray_direction;
    float b = 2 * (L * ray_direction);
    float c =  (L * L) - (radius * radius); 
    float f = b*b - 4*a*c;


    // f < 0 (no intersection)
    // f = 0 (1 intersection)
    // f > 0 (2 intersections)

    float t;
    if(f < 0){
        t = -1.0;
    }
    else {

        float t0 = ((-b - sqrt(f)) / (2*a));
        float t1 = ((-b + sqrt(f)) / (2*a));

        if (t0 < 0) {
            t = t1;
        }
        else {
            t = t0;
        }
    }
    return t;
    
}

const Color Sphere::get_color() const {
    return color;
}


