/****************************
 * Cole Haas 
 * February 26, 2021
****************************/

/*********
 * Ray.h *
**********/


#ifndef RAY_H
#define RAY_H

#include "Vector.h"


class Ray {

    private:
        Vector position;
        Vector direction;
    
    public:

        Ray(Vector, Vector);

        const Vector get_position() const;
        const Vector get_direction() const;

};





#endif