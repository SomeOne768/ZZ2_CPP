#include <iostream>
#include "Cercle.hpp"

Cercle::Cercle() : Cercle(0, 0, 0, 0) {}
Cercle::Cercle(int x, int y, int w, int h)
    : Forme(x, y)
{
    this->w = w;
    this->h = h;
}

Cercle::Cercle(int cx, int cy, int rayon) : 
    Cercle(cx - rayon, cy - rayon, rayon, rayon)
{
}

std::string Cercle::toString()
{
    char buffer[100];
    sprintf(buffer, "CERCLE: %d %d %d %d", this->getPoint().getX(), this->getPoint().getY(), w, h);
    std::string s = buffer;
    return s;
}

void Cercle::afficher()
{
    printf("Cercle - w:%d h:%d x:%d y:%d\n", w, h, this->getPoint().getX(), this->getPoint().getY());
}

int Cercle::getRayon()
{
    return w;
}

void Cercle::setRayon(int r)
{
    // On retouche au centre  ?
    w = h = r;
}