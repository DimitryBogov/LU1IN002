// Exercice 3 – Jeu de test  
// -------------------------------------------------------------------------------  
// La commande `cp` permet de copier un fichier ou le contenu d’un répertoire :  
// - `cp nom_rep/fichier1 .` : Copie `fichier1` (situé dans `nom_rep`) dans le  
//   répertoire courant.  
// - `cp nom_rep1/fichier1 nom_rep2` : Copie `fichier1` dans `nom_rep2`.  
// - `cp nom_rep/*.c .` : Copie tous les fichiers `.c` de `nom_rep` vers le  
//   répertoire courant.  

// -------------------------------------------------------------------------------  
// Question 1  
// -------------------------------------------------------------------------------  
// Recopiez dans votre répertoire `LU1IN002/semaine1` le programme `jeuTest.c`  
// suivant (disponible sur Moodle) :  

// #include <stdio.h>  
// int alternative(int n1, int n2, int n3) {  
//     int res;  
//     if (n1 > 8) {  
//         res = 3;  
//     } else {  
//         if (n3 == 20) {  
//             res = 2;  
//         } else {  
//             if ((n2 >= 10) && (n3 >= 10)) {  
//                 res = 1;  
//             } else {  
//                 res = 0;  
//             }  
//         }  
//     }  
//     return res;  
// }  
// int main() {  
//     // À compléter  
//     return 0;  
// }  

// -------------------------------------------------------------------------------  
// Question 2  
// -------------------------------------------------------------------------------  
// Complétez la fonction `main` par un jeu de test permettant de tester toutes les  
// branches de la fonction `alternative`. Indiquez en commentaire, pour chaque test,  
// le cas traité.

#include <stdio.h>
#include <assert.h>

int alternative(int n1, int n2, int n3) {
  int res ;
	
  if (n1 > 8) {
    res = 3;
  } else {
    if (n3 == 20) {
      res = 2;
    } else {
      if ((n2 >= 10) && (n3 >= 10)) {
        res = 1;
      } else {
        res = 0;
      }
    }
  }
  
  return res;
}

int main(){
  assert(alternative(1,2,3) == 1);
  return 0;
}
