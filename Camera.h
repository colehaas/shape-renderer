/****************************
 * Cole Haas 
 * February 26, 2021
****************************/

/***************
 * Camera.h *
***************/

#ifndef CAMERA_H
#define CAMERA_H

#include "Vector.h"
#include <cmath>

#define PI 3.14159265



class Camera {

    private:

        // position of the pinhole
        Vector position;

        // direction from center of the image plane through the the pinhole
        // perpindicular to the image plane        
        Vector view_direction;

        Vector up_direction;

        //horrizontal field of view in degrees
        float field_of_view;


        float aspect_ratio;

    public:

        Camera(Vector, Vector, Vector, float, float);

        Vector view(float, float) const;
        Vector get_position() const;

};

#endif