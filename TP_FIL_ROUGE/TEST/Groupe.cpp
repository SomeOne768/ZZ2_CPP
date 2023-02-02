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


/*
template <typename FormeType>
void Groupe::add(FormeType & forme, int & nb) {

}
*/

// Le type est automatiquement detecté par la lambda car passé par référence.
// Dans notre cas actuel il faudrait en plus donné le tableau donc detecter le nullptr
/*
auto addForme = [](auto &maForme, int &nb)
{
};
*/

void Groupe::add(Rectangle &r)
{
    // add(r, nb_r);
    // addEncore(r, nb_r);

    // On souhaite ici mettre à jour les valeur h et w pour contenir toutes les formes
    if (nb_r < TAILLE)
    {
        r.ordre = compteur;
        this->rectangles[nb_r] = r;
        nb_r++;
        compteur++;

        // On verifie les bords gauche/sup
        Point p = this->getPoint();
        if (r.getPoint().getX() < p.getX())
        {
            p.setX(r.getPoint().getX());
        }

        if (r.getPoint().getY() < p.getY())
        {
            p.setY(r.getPoint().getY());
        }

        // On verifie les dim:
        int x_max = r.getPoint().getX() + r.getLargeur();
        int y_max = r.getPoint().getY() + r.getHauteur();
        int delta_x = p.getX() + getLargeur() - x_max;
        int delta_y = p.getY() + getHauteur() - y_max;
        if (delta_x < 0)
        {
            w += delta_x;
        }

        if (delta_y < 0)
        {
            h += delta_y;
        }
    }
}

void Groupe::add(Cercle &c)
{
    if (nb_c < TAILLE)
    {
        c.ordre = compteur;
        this->cercles[nb_c] = c;
        nb_c++;
        compteur++;

        // On verifie les bords gauche/sup
        Point p = this->getPoint();
        if (c.getPoint().getX() < p.getX())
        {
            p.setX(c.getPoint().getX());
        }

        if (c.getPoint().getY() < p.getY())
        {
            p.setY(c.getPoint().getY());
        }

        // On verifie les dim:
        int x_max = c.getPoint().getX() + c.getLargeur();
        int y_max = c.getPoint().getY() + c.getHauteur();
        int delta_x = p.getX() + getLargeur() - x_max;
        int delta_y = p.getY() + getHauteur() - y_max;
        if (delta_x < 0)
        {
            w += delta_x;
        }

        if (delta_y < 0)
        {
            h += delta_y;
        }
    }
}


// A finir: reprendre ici 

// void Groupe::add(Forme &f){
//     if (nb_c < TAILLE)
//     {
//         c.ordre = compteur;
//         this->cercles[nb_c] = c;
//         nb_c++;
//         compteur++;

//         // On verifie les bords gauche/sup
//         Point p = this->getPoint();
//         if (c.getPoint().getX() < p.getX())
//         {
//             p.setX(c.getPoint().getX());
//         }

//         if (c.getPoint().getY() < p.getY())
//         {
//             p.setY(c.getPoint().getY());
//         }

//         // On verifie les dim:
//         int x_max = c.getPoint().getX() + c.getLargeur();
//         int y_max = c.getPoint().getY() + c.getHauteur();
//         int delta_x = p.getX() + getLargeur() - x_max;
//         int delta_y = p.getY() + getHauteur() - y_max;
//         if (delta_x < 0)
//         {
//             w += delta_x;
//         }

//         if (delta_y < 0)
//         {
//             h += delta_y;
//         }
//     }
// }