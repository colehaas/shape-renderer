/****************************
 * Cole Haas 
 * February 26, 2021
****************************/

/****************
 * ImagePlane.h *
*****************/

#ifndef IMAGEPLANE_H
#define IMAGEPLANE_H

#include "Vector.h"
#include <vector>


class ImagePlane {
    private:
        int Nx, Ny;
        //std::vector <Color> data;
        Color* data;
    public:
        ImagePlane(int, int);

        Color get_color(int, int) const;
        void set_color(int, int, const Color&);
        int get_Nx() const;
        int get_Ny() const;

};



#endif