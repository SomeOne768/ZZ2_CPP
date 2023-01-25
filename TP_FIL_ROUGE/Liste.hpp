#ifndef __LISTE_HPP__AZ
#define __LISTE_HPP__AZ
#include "Cercle.hpp"
#include "Rectangle.hpp"
#include <iostream>

const int TAILLE = 10;

// class Cercle;
// class Rectangle;

class Liste{
public:
    Cercle cercles[TAILLE];
    int nb_c;
    Rectangle rectangles[TAILLE];
    int nb_r;
    int compteur;

    Liste();
    int getCompteur();
    std::string toString();

};


#endif