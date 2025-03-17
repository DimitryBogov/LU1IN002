// Exercice 14 – (CodeRunner) Visite de la Tour de Londres  
// -------------------------------------------------------------------------------  
// Tarifs (exemples au 12 juin 2018) :  
// - Adulte : 22,7 £  
// - Enfant (5-15 ans) : 10,75 £  
// - Enfant <5 ans : Gratuit  
// - Famille (2 adultes + max 3 enfants) : 57,80 £  

// Résultats attendus (tests) :  
// - 2 adultes + 1 enfant ≥5 ans → 56,15 £  
// - 2 adultes + 2 enfants ≥5 ans → 57,80 £  
// - 2 adultes + 3 enfants ≥5 ans → 57,80 £  
// - 6 adultes + 3 enfants ≥5 ans → 148,60 £ (1 famille + 4 adultes)  
// - 1 adulte + 3 enfants ≥5 ans → 54,95 £  
// - 5 adultes + 7 enfants ≥5 ans → 149,05 £ (2 familles + 1 adulte + 1 enfant)  
// - 6 adultes + 8 enfants ≥5 ans → 173,4 £ (3 familles)  
// - 10 adultes → 227 £  
// - 4 enfants → 43 £  

// -------------------------------------------------------------------------------  
// Question 1  
// -------------------------------------------------------------------------------  
// Écrivez une fonction `prixEntree` qui :  
// 1. Prend en paramètres le nombre d’adultes et d’enfants ≥5 ans.  
// 2. Applique le tarif famille **autant de fois que possible**.  
// 3. Calcule le prix total en combinant :  
//    - Tarifs famille utilisés au maximum  
//    - Personnes restantes payant individuellement (adulte/enfant)  
// 4. Renvoie la somme à payer.  

// -------------------------------------------------------------------------------  
// Question 2  
// -------------------------------------------------------------------------------  
// Écrivez une fonction `main` pour tester `prixEntree`.  

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

#define ADULTE 22.7
#define ENFANT 10.75
#define FAMILLE 57.8

double prixEntree(int adults, int enfants){
    double total = (adults * ADULTE) + (enfants * ENFANT);
    double familleTotal;
    
    while(adults >= 2 && enfants >= 2){
        adults -= 2;
        if(enfants == 2){
            enfants -= 2;
        }
        else{
            enfants -= 3;
        }

        familleTotal += FAMILLE;
    }
    familleTotal += (adults * ADULTE) + (enfants * ENFANT);
    
    return (total < familleTotal) ? total : familleTotal;
}//188.75

int main(){
    int a = 2, b = 1;
    double res;
    res = prixEntree(a,b);
    printf("%f\n", res);

    // assert(signeProduit(0,0) == 0);

    return 0;
}
