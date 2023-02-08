#ifndef GROUPE_HPP_AZ
#define GROUPE_HPP_AZ
#include "Cercle.hpp"
#include "Rectangle.hpp"
#include "Forme.hpp"
#include <iostream>

const int TAILLE = 10;

class Groupe : public Forme
{
    /*
    template <typename FormeType>
    void add(FormeType & forme, int&);
    */
    void addEncore(Forme & f);
public:
    int nb_f;
    int compteur;
    Groupe();
    Groupe(Point, int, int);
    Groupe(int, int, int, int);

    Forme formes[TAILLE];

    int getCompteur();
    std::string toString();
    // -- A retirer
    // void add(Rectangle&);
    // void add(Cercle&);
    // --
    // A finir: reprendre ici
    void add(Forme&);
    // --
    void afficher();



    static void afficherTab(Forme *tab[TAILLE], int n);
};

#endif
