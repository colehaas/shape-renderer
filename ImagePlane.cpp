/****************************
 * Cole Haas 
 * February 26, 2021
****************************/

/******************
 * ImagePlane.cpp *
*******************/

#include "ImagePlane.h"

    ImagePlane::ImagePlane(int nx, int ny) {
        Nx = nx;
        Ny = ny;
        //data.reserve(nx*ny);
        data = new Color [nx*ny];
    }

    Color ImagePlane::get_color(int i, int j) const {
        // precondition
        // i, j are respecitively between 0 inclusive and Nx, Ny exclusive

        // get one dimensional index from i, j
        int index = i + (Nx * j);

        // return Color at index 
        // check if color exists at index
        //return data.at(index);
        return data[index];
    }

    void ImagePlane::set_color(int i, int j, const Color& color) {
        // precondition
        // i, j are respecitively between 0 inclusive and Nx, Ny exclusive

        // get one dimensional index from i, j
        int index = i + (Nx * j);
        // set Color at index
        data[index] = color;

    }
    
    int ImagePlane::get_Nx() const {
        return Nx;
    }
    
    int ImagePlane::get_Ny() const {
        return Ny;
    }

