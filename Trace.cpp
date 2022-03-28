/****************************
 * Cole Haas 
 * February 26, 2021
****************************/

/*************
 * Trace.cpp *
**************/

#include "Trace.h"

Color Trace(const Ray& r, Scene& s) {

    int size;
    float intersection;
    float cip = -1.0;
    float cis = -1.0;
    Plane closest_plane, plane;
    Sphere closest_sphere, sphere;
    Color c;

    //Planes
    size = s.get_plane_size();
    for (int c = 0; c < size; c++) {
        plane = s.get_next_plane();
        intersection = plane.intersection(r);
        if ((intersection > 0) && ((cip < 0) || (intersection < cip))) {
            cip = intersection;
            closest_plane = plane;
        }
    }
    
    //Spheres
    size = s.get_sphere_size();
    for (int c = 0; c < size; c++) {
        sphere = s.get_next_sphere();
        intersection = sphere.intersection(r);
        if ((intersection > 0) && ((cis < 0) || (intersection < cis))) {
            cis = intersection;
            closest_sphere = sphere;
        }
    }

    //find closest intersection to camera
    if ( ((cis > 0) && (cip > 0) && (cis < cip)) || ((cip < 0) && (cis > 0)) ) {
        intersection = cis;
        c = closest_sphere.get_color();
    }
    else if ( ((cip > 0) && (cis > 0) && (cip < cis)) || ((cis < 0) && (cip > 0)) ){
        intersection = cip;
        c = closest_plane.get_color();
    }

    //if not intersection set color to black
    if (intersection < 0) {
        c.r = 0;
        c.g = 0;
        c.b = 0;
    }

    return c;

        
}







