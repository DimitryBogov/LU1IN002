// Exercice 5 – (CodeRunner) Calcul du discriminant  
// -------------------------------------------------------------------------------  
// Étant donné qu’il s’agit du premier exercice de TP à soumettre via CodeRunner,  
// le nombre de soumissions est illimité pour cet exercice uniquement.  

// Dans cet exercice, vous devez écrire plusieurs fonctions et un jeu de tests adapté.  
// Exemples de polynômes du second degré et leurs racines :  
// - `4*x² + 4*x + 1` : racine double `-0.5`  
// - `4*x² + 6*x + 1` : deux racines `-0.191` et `-1.309`  
// - `-7*x² -5*x -1` : pas de racine réelle.  

// Rappels :  
// - Le discriminant (Δ) du polynôme est égal à `b² - 4*a*c`.  
// - Si Δ < 0 : le polynôme n’a pas de racine réelle.  
// - Si Δ = 0 : le polynôme a une racine double égale à `-b/(2*a)`.  
// - Si Δ > 0 : le polynôme a deux racines `(-b-√Δ)/(2*a)` et `(-b+√Δ)/(2*a)`.  

// -------------------------------------------------------------------------------  
// Question 1  
// -------------------------------------------------------------------------------  
// Écrivez une fonction `discriminant` qui renvoie la valeur du discriminant du  
// polynôme du second degré `ax² + bx + c`. Les valeurs entières de `a`, `b`, et `c`  
// seront passées en paramètre de la fonction. Écrivez une fonction `main` pour tester  
// votre fonction `discriminant`.  

// -------------------------------------------------------------------------------  
// Question 2  
// -------------------------------------------------------------------------------  
// Ajoutez à votre programme une fonction `afficheRacines` qui :  
// 1. Prend en paramètre les coefficients entiers `a`, `b`, `c` du polynôme.  
// 2. Affiche les racines (ou "racine double" / "pas de racine réelle").  
// 3. Utilise obligatoirement la fonction `discriminant`.  

// Pour calculer la racine carrée, utilisez `sqrt()`. Ajoutez `#include <math.h>` sous  
// `#include <stdio.h>`. Ajoutez l’option `-lm` à votre commande de compilation.  

// -------------------------------------------------------------------------------  
// Question 3  
// -------------------------------------------------------------------------------  
// Complétez la fonction `main` pour tester `afficheRacines` en définissant un jeu de  
// tests couvrant tous les cas (racine double, deux racines, pas de racine).

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

int discriminant(int a, int b, int c){
    return (b * b) - 4 * a * c;
}

void afficheRacines(int a, int b, int c){
    int dis = discriminant(a,b,c);

    if(dis == 0){
        double rac = -b/(2*a);
        printf("%f\n", rac);
    }
    else if(dis > 0){
        double rac1 = (-b - sqrt(dis))/(2*a);
        double rac2 = (-b + sqrt(dis))/(2*a);
        printf("%f, %f\n", rac1, rac2);
    }
    else{
        printf("rien\n");
    }
}

int main(){
    int a = 4, b = 4, c = 1;
    int res;
    res = discriminant(a,b,c);
    printf("%d\n", res);
    assert(discriminant(-7,-5,-1) == -3);
    assert(discriminant(4,6,1) == 20);
    assert(discriminant(4,4,1) == 0);
    afficheRacines(a,b,c);
    return 0;
}
