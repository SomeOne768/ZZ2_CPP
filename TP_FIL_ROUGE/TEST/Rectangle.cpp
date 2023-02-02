#include <iostream>
#include "Rectangle.hpp"
#include <sstream>


Rectangle::Rectangle() : Rectangle(0,0,0,0){
}

Rectangle::Rectangle(int x, int y, int w, int h) : Forme(w,h), x(x), y(y){
}

std::string Rectangle::toString(){
    std::ostringstream oss;
    oss << "CERCLE: "<< x <<" "<< y << " " << w << " " << h << std::endl;
    std::string s(oss.str());
    return s;   
}


void Rectangle::afficher(){
    printf("Rectangle - w:%d h:%d x:%d y:%d", w, h, x, y);
}