#ifndef GROUPE_HPP_AZ
#define GROUPE_HPP_AZ
#include "Cercle.hpp"
#include "Rectangle.hpp"
#include "Forme.hpp"
#include <iostream>

const int TAILLE = 10;

class Groupe : public Forme
{
public:
    int nb_c;
    int nb_r;
    int compteur;
    Groupe();
    Groupe(Point, int, int);
    Groupe(int, int, int, int);

    Rectangle rectangles[TAILLE];
    Cercle cercles[TAILLE];
    //DEMANDER PROF: Cercle *cercles = new Cercle[TAILLE];

    int getCompteur();
    std::string toString();
    void add(Rectangle&);
    void add(Cercle&);
    void afficher();

    //DEMANDER prof: static void afficherTab(Forme **tab, int n);
    static void afficherTab(Forme tab[TAILLE], int n);
    // static void afficherTab(Rectangle tab[TAILLE], int n);
    // static void afficherTab(Cercle tab[TAILLE], int n);
};

#endif
