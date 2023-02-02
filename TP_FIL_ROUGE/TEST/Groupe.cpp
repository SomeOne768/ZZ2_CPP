#include <iostream>
#include "Groupe.hpp"

Groupe::Groupe() : Groupe(0, 0, 0, 0)
{
}

Groupe::Groupe(Point p, int w, int h) : Forme(p, COULEURS::BLEU)
{
    this->w = w;
    this->h = h;
    compteur = 0;
    nb_c = 0;
    nb_r = 0;
}

Groupe::Groupe(int x, int y, int w, int h) : Forme(x, y)
{
    this->w = w;
    this->h = h;
    compteur = 0;
    nb_c = 0;
    nb_r = 0;
}

int Groupe::getCompteur()
{
    return compteur;
}

std::string Groupe::toString()
{
    // On affiche dans l'ordre
    int i = 0,
        j = 0;

    std::string out = "";
    while (i < nb_c && j < nb_r)
    {
        if (cercles[i].ordre < rectangles[j].ordre)
        {
            out += cercles[i].toString();
            out += " ";
            i++;
        }
        else
        {
            out += rectangles[j].toString();
            out += " ";
            j++;
        }
    }

    if (i != nb_c)
    {
        // Il reste des cercles à afficher
        while (i < nb_c)
        {
            out += cercles[i].toString();
            out += " ";
            i++;
        }
    }

    else if (j != nb_r)
    {
        // Il reste des rectangles à afficher
        while (j < nb_r)
        {
            out += rectangles[j].toString();
            out += " ";
            j++;
        }
    }

    return out;
}

void Groupe::afficher()
{
    int i = 0,
        j = 0;

    while (i < nb_c && j < nb_r)
    {
        if (cercles[i].ordre < rectangles[j].ordre)
        {
            cercles[i].afficher();
            i++;
        }
        else
        {
            rectangles[j].afficher();
            j++;
        }
    }

    if (i != nb_c)
    {
        // Il reste des cercles à afficher
        while (i < nb_c)
        {
            cercles[i].afficher();
            i++;
        }
    }

    else if (j != nb_r)
    {
        // Il reste des rectangles à afficher
        while (j < nb_r)
        {
            rectangles[j].afficher();
            j++;
        }
    }
}

void Groupe::add(Rectangle &r)
{
    if (nb_r < TAILLE)
    {
        r.ordre = compteur;
        this->rectangles[nb_r] = r;
        nb_r++;
        compteur++;
    }
}

void Groupe::add(Cercle &c)
{
    if (nb_r < TAILLE)
    {
        c.ordre = compteur;
        this->cercles[nb_c] = c;
        nb_c++;
        compteur++;
    }
}