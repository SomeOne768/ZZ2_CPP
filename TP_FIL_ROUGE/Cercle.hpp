#ifndef CERCLE_HPP_AZ
#define CERCLE_HPP_AZ
#include "Rectangle.hpp"

class Cercle : public Rectangle
{

public:
    Cercle(int,int,int,int);
    Cercle(int cx, int cy, int rayon);
    std::string toString() override;
    int ordre;

};



#endif