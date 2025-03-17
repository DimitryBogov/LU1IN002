// Exercice 7 – (CodeRunner) Signe d’un produit  
// -------------------------------------------------------------------------------  
// Question 1  
// -------------------------------------------------------------------------------  
// Écrivez la fonction `signeProduit` qui prend en paramètres deux entiers et qui,  
// sans calculer le produit, renvoie :  
// - `0` si le produit est nul,  
// - `-1` s’il est négatif,  
// - `1` sinon.  

// -------------------------------------------------------------------------------  
// Question 2  
// -------------------------------------------------------------------------------  
// Écrivez une fonction `main` permettant de tester `signeProduit` en utilisant la  
// fonction `assert` pour vérifier différents cas de test (valeurs positives,  
// négatives, zéro, combinaisons variées).  

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

int signeProduit(int a, int b){
    if(a == 0 || b == 0){
        return 0;
    }
    else if((a < 0 && b > 0) || (b < 0 && a > 0)){
        return -1;
    }
    else{
        return 1;
    }
}

int main(){
    int a = 4, b = 4;
    int res;
    res = signeProduit(a,b);
    printf("%d\n", res);

    assert(signeProduit(0,0) == 0);

    return 0;
}
