#ifndef MERE_HPP_AZ
#define MERE_HPP_AZ

class Mere
{
protected:
    static int x;

public:
    Mere();
    ~Mere();
    static int getCompteur();
    virtual void afficher();
};

#endif