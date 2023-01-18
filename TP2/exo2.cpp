#include <iostream>
// #include "Bavarde.hpp"
class Bavarde
{
private:
    int x;
public:
    Bavarde(/* args */);
    Bavarde(int);
    ~Bavarde();
    int getX();    

} bizarre(1);

Bavarde::Bavarde(){
    printf("Construction de 0\n");
    x = 0;
}

Bavarde::Bavarde(int x){
    printf("Construction de %d\n", x);
    this->x = x;
}

Bavarde::~Bavarde(){
    printf("Tais-toi %d!\n", this->x);
}


Bavarde globale(2);


void fonction(Bavarde b){
    std::cout << "code de la fonction";
}

int Bavarde::getX(){
    return x;
}


int main(){

    Bavarde b1(3);
    Bavarde b2(4);
    Bavarde *p = new Bavarde(5);

    fonction(b1);

    std::cout << Bavarde(0).getX() << std::endl;


    return 0;
}