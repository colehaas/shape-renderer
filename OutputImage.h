/****************************
 * Cole Haas 
 * February 26, 2021
****************************/

/*****************
 * OutputImage.h *
******************/

#ifndef OUTPUTIMAGE_H
#define OUTPUTIMAGE_H

#include "ImagePlane.h"
#include "Vector.h"
#include <iostream>
#include <fstream>

void header(int w, int h, std::ofstream& file);
void pixel(Color color, std::ofstream& file);
void writePPM(ImagePlane plane, std::string filename);


#endif