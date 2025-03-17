#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PIERRE 1
#define FEUILLE PIERRE+1
#define CISEAUX FEUILLE+1
#define NBESSAIS 3
#define POINTSGAGNANTS 3 

  /* Il sera probablement n�cessaire de modifier les parametres et valeur de retour des fonctions 
    choix_ordinateur, choix_joueur, score et jeu */

  /* Les declarations actuelles permettent de compiler et d'executer le programme */

void affichage_objet(int obj){
  /* hypoth�se : obj = PIERRE ou
     obj = FEUILLE ou obj = CISEAUX
   
   affiche le nom de l'objet correspondant � obj */
  
  if (obj == PIERRE){
    printf("PIERRE");
  } else {
    if (obj == FEUILLE){
      printf("FEUILLE");
    } else {
      printf("CISEAUX");
    }
  }
}

int choix_ordinateur(void) {
/* hypoth�se : PIERRE < FEUILLE < CISEAUX
  toutes les valeurs comprises entre PIERRE et CISEAUX sont "valables"
  renvoie une valeur choisie al�atoirement entre PIERRE et CISEAUX */
  
  return 0;
}

int choix_joueur() {
/* hypoth�ses : PIERRE < FEUILLE < CISEAUX 
  renvoie la valeur choisie par le joueur
  v�rifie qu'elle est comprise entre PIERRE et CISEAUX 
  redemande la saisie si ce n'est pas le cas
  
  Si apr�s NBESSAIS le joueur n'a pas saisi de valeur valable,
  cette derni�re est tir�e au sort */
  
  return 0;
}

void score(){
  /* hypoth�ses : le coup du joueur et celui de l'ordinateur sont valables 
                  (�gaux � PIERRE, FEUILLE ou CISEAUX)
   augmente de 1 le score du joueur si le coup du joueur est gagnant
   augmente de 1 le score de l'ordinateur si le coup de l'ordinateur est gagnant */
  
}


void jeu() {
  /* boucle de jeu, la partie s'arr�te d�s qu'un des deux joueurs 
   atteint POINTSGAGNANTS points */
}

int main() {
  
  srand(time(NULL));
 
  jeu();
  return 0;
}
