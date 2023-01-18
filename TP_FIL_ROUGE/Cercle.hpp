#ifndef CERCLE_HPP_AZ
#define CERCLE_HPP_AZ
#include "Rectangle.hpp"

class Cercle : public Rectangle{
public:
    Cercle(int,int,int,int);
    Cercle(int cx, int cy, int rayon);
    virtual std::string toString() override;

};



#endif