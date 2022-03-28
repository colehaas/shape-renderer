/****************************
 * Cole Haas 
 * February 26, 2021
****************************/
/*******************
 * OutputImage.cpp *
********************/

#include "OutputImage.h"

//precondition file is open
void header(int w, int h, std::ofstream& file) {
    file << "P3" << std::endl;
    file << w << " " << h << std::endl;
    file << 255 << std::endl;
}

void pixel(Color color, std::ofstream& file) {
    int r = (int)(color.r * 255);
    int g = (int)(color.g * 255);
    int b = (int)(color.b * 255);
    file << r << " " << g << " " << b << std::endl;
}

void writePPM(ImagePlane plane, std::string filename) {
    
    int x, y, w, h;
    Color color;
    std::ofstream file;
    file.open(filename);
    w = plane.get_Nx();
    h = plane.get_Ny(); 
    
    header(w, h, file);
    
    for (y = 0; y < h; y++) {
        for (x = 0; x < w; x++) {
            color = plane.get_color(x, y);
            pixel(color, file);
        }
    }
    file.close();
}   


