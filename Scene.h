/****************************
 * Cole Haas 
 * February 26, 2021
****************************/

/***********
 * Scene.h *
************/

#ifndef SCENE_H
#define SCENE_H

#include "Vector.h"
#include "Plane.h"
#include "Sphere.h"
#include <queue>




class Scene {
    private:
        std::queue<Plane> planes;
        std::queue<Sphere> spheres;
    public:
        Scene();
        void add_plane(Plane plane);
        void add_sphere(Sphere sphere);
        Plane get_next_plane();
        Sphere get_next_sphere();
        int get_plane_size();
        int get_sphere_size();


};

/*
class Scene {        
    public:
    Plane plane;
    Scene();
};
*/





#endif