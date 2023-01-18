#include <iostream>
#include "Rectangle.hpp"


Rectangle::Rectangle(int x, int y, int w, int h): x(x), y(y), w(w), h(h){

}

std::string Rectangle::toString(){
    printf("RECTANGLE: %d %d %d %d\n", x, y, w, h);
}