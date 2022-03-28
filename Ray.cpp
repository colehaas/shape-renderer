/****************************
 * Cole Haas 
 * February 26, 2021
****************************/

/***********
 * Ray.cpp *
************/

#include "Ray.h"

Ray::Ray(Vector p, Vector d) {
    position = p;
    direction = d;
}

const Vector Ray::get_position() const {
    return position;
}

const Vector Ray::get_direction() const {
    return direction;
}


