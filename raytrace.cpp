/****************************
 * Cole Haas 
 * February 26, 2021
****************************/

/****************
 * raytrace.cpp *
*****************/

#include "Vector.h"
#include "Camera.h"
#include "ImagePlane.h"
#include "Ray.h"
#include "Trace.h"
#include "Sphere.h"
#include "Plane.h"
#include "Scene.h"
#include "OutputImage.h"
#include <ostream>

int main(void) {
 
//SCENE SETUP//

//initialize values
Camera camera = Camera(Vector(0,0,0), Vector(0,0,1), Vector(0,1,0), 90.0, 1.3333);
ImagePlane imageplane = ImagePlane(1024, 768);
Scene scene = Scene();

Color c;

//add plane
//plane color
c.r = 0;
c.g = 0.5;
c.b = 1;

Plane plane = Plane(Vector(0,2,0),Vector(0,1,0),c);
scene.add_plane(plane);


//add sphere
//sphere color
c.r = 0.5;
c.g = 1;
c.b = 0;

Sphere sphere = Sphere(Vector(1,2,15), 3, c);
scene.add_sphere(sphere);



//TRACE SCENE//

int x, y, w, h;
float i, j;
Vector ray_direction, ray_origin;
Color color;

w = imageplane.get_Nx();
h = imageplane.get_Ny();

ray_origin = camera.get_position();

for (y = 0; y < h; y++) {
    j = ( (( 2.0 * (float)y) / (float)h ) - 1.0);
    for (x = 0; x < w; x++) {
        i = ( (( 2.0 * (float)x) / (float)w ) - 1.0);
        ray_direction = camera.view(i, j);
        Ray ray = Ray(ray_origin, ray_direction);
        color = Trace(ray, scene);
        imageplane.set_color(x, y, color);
    }
}

writePPM(imageplane, "output.ppm");

return 0;

}
