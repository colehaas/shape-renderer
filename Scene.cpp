/****************************
 * Cole Haas 
 * February 26, 2021
****************************/

/*************
 * Scene.cpp *
**************/

#include "Scene.h"

Scene::Scene() {
}

void Scene::add_plane( Plane plane) {
    planes.push(plane);
}

void Scene::add_sphere(Sphere sphere) {
    spheres.push(sphere);
}

Plane Scene::get_next_plane() {
     Plane plane = planes.front();
    planes.pop();
    planes.push(plane);
    return plane;
}

Sphere Scene::get_next_sphere() {
    Sphere sphere = spheres.front();
    spheres.pop();
    spheres.push(sphere);
    return sphere;
}

int Scene::get_plane_size() {
    return planes.size();
}

int Scene::get_sphere_size() {
    return spheres.size();
}


