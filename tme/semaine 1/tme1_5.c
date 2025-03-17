// Exercice 8 – (CodeRunner) Visite de la Tour de Londres  
// -------------------------------------------------------------------------------  
// Tarifs en ligne (exemples au 12 juin 2018) :  
// - Adulte : 22,7 £  
// - Enfant (5-15 ans) : 10,75 £  
// - Enfant <5 ans : Gratuit  
// - Famille (2 adultes + max 3 enfants) : 57,80 £  

// Résultats attendus (tests) :  
// - 2 adultes + 3 enfants ≥5 ans → 57,80 £  
// - 2 adultes + 2 enfants ≥5 ans → 57,80 £  
// - 2 adultes + 1 enfant ≥5 ans → 56,15 £ (tarif famille non intéressant)  
// - 1 adulte + 3 enfants ≥5 ans → 54,95 £ (tarif famille non intéressant)  

// -------------------------------------------------------------------------------  
// Question 1  
// -------------------------------------------------------------------------------  
// Écrivez une fonction `prixEntree` qui prend en paramètres :  
// - Nombre d’adultes  
// - Nombre d’enfants ≥5 ans  
// et renvoie la somme à payer.  

// Fonctionnement :  
// 1. Comparez deux calculs :  
//    - Prix sans tarif famille (adultes × 22,7 + enfants × 10,75)  
//    - Prix avec **une** entrée famille (57,80 £ + prix des personnes excédentaires)  
// 2. Renvoyez le prix le plus bas des deux.  

// -------------------------------------------------------------------------------  
// Question 2  
// -------------------------------------------------------------------------------  
// Écrivez une fonction `main` pour tester `prixEntree` en affichant les résultats   
  
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

#define ADULTE 22.7
#define ENFANT 10.75
#define FAMILLE 57.8

double prixEntree(int adults, int enfants){
    double total = (adults * ADULTE) + (enfants * ENFANT);
    double familleTotal = total;
    
    if(adults >= 2){
        if(enfants >= 2){
            adults -= 2;
            if(enfants == 2){
                enfants -= 2;
            }
            else{
                enfants -= 3;
            }

            familleTotal = FAMILLE + (adults * ADULTE) + (enfants * ENFANT);
        }
    }
    
    return (total < familleTotal) ? total : familleTotal;
}//188.75

int main(){
    int a = 5, b = 7;
    double res;
    res = prixEntree(a,b);
    printf("%f\n", res);

    // assert(signeProduit(0,0) == 0);

    return 0;
}
