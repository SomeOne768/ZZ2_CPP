#include <iostream>


class Bavarde {
  // 
  // Mettre votre code ici
  //
};


int main(int, char **) {
  const int TAILLE = 20;
  Bavarde   tab1[TAILLE];
  Bavarde * tab2 = new Bavarde[TAILLE];
  // Combien d'instances sont créées ?

  for (int i =0; i < TAILLE; ++i) {
     tab1[i].afficher();
     tab2[i].afficher();
  }

  // Combien d'instances sont détruites ?
  return 0;
}