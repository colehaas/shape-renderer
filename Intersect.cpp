#include "Vector.h"
#include "Ray.h"
#include "Sphere.h"
#include "Plane.h"

#include <iostream>



int main(void) {

Color color;
color.r = 1;
color.g = 1;
color.b = 1;

//PLANE
Vector plane_position = Vector(0,0,10);
Vector plane_normal = Vector(0,0,1);

Plane plane = Plane(plane_position, plane_normal, color);

//SPHERE
Vector sphere_position = Vector(0,0,0);
float sphere_radius = 2.0;

Sphere sphere = Sphere(sphere_position, sphere_radius, color);

//RAY
Vector ray_position = Vector(0, 0, -10);
//Vector ray_direction = Vector(0, 0, 1);
//Vector ray_direction = Vector(0, -0.7071067812, 0.7071067812);
Vector ray_direction = Vector(0, 0, -1);

//maybe add something to change ray direction

Ray ray = Ray(ray_position, ray_direction);

//INTERSECTIONS

float plane_t = plane.intersection(ray);
float sphere_t = sphere.intersection(ray);

std::cout << "PLANE t: " << plane_t << std::endl;
std::cout << "SPHERE t: " << sphere_t << std::endl;

}