#include <iostream>
#include "Cercle.hpp"


Cercle::Cercle(int x, int y, int w, int h): Rectangle(x, y, w, h){

}

Cercle::Cercle(int cx, int cy, int rayon):Rectangle(cx-rayon, cy-rayon, rayon, rayon){

}


std::string Cercle::toString(){
    printf("CERCLE: %d %d %d %d\n", x, y, w, h);
}
