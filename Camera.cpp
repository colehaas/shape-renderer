/****************************
 * Cole Haas 
 * February 26, 2021
****************************/

/***************
 * Camera.cpp *
***************/

#include "Camera.h"

Camera::Camera(Vector p, Vector vd, Vector ud, float fov, float ar){
    position = p;
    view_direction = vd; //nc
    up_direction = ud; //up
    field_of_view = fov;
    aspect_ratio = ar;
};

Vector Camera::view(float x , float y) const {
   
    // x = (2i/Nx) - 1
    // y = (2j/Ny) - 1 

    //convert x,y to u,v
    float u = x * tan((field_of_view / 2) * (PI / 180));
    float v = y * ( tan((field_of_view / 2) * (PI / 180)) / aspect_ratio );
    
    Vector right = up_direction ^ view_direction;

    Vector image_plane_pos = (u * right) + (v * up_direction);
    
    Vector np = (image_plane_pos + view_direction);
    np.normalize();
    
    return np;

}

Vector Camera::get_position() const {
    return position;
}
