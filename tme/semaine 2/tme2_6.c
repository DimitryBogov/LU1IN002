// Exercice 11 – (CodeRunner) Propagation épidémie  
// -------------------------------------------------------------------------------  
// Des chercheurs étudient la vitesse de propagation d’une épidémie dans une ville  
// où un seul individu est initialement malade. Chaque personne contaminée infecte  
// `x` nouvelles personnes par jour. On cherche à déterminer :  
// 1. Le nombre de jours pour atteindre un pourcentage donné de la population contaminée.  
// 2. Le pourcentage contaminé après un nombre de jours donné.  

// Hypothèses :  
// - Une personne contaminée reste contagieuse indéfiniment.  
// - La contamination est cumulative.  

// -------------------------------------------------------------------------------  
// Question 1  
// -------------------------------------------------------------------------------  
// Écrivez la fonction `jours` qui prend en paramètres :  
// - `x` (entier) : nombre de personnes contaminées par jour par une personne infectée  
// - `population` (entier) : population totale de la ville  
// - `pourcentage` (réel entre 0.0 et 100.0) : pourcentage cible à atteindre  

// La fonction renvoie le nombre de jours nécessaires pour contaminer au moins le  
// pourcentage cible de la population (1 personne initialement infectée).  

// Exemples de résultats (population = 10 000, x = 5) :  
// - 100.00 % → 6 jours  
// - 50.00 % → 5 jours  
// - 25.00 % → 5 jours  
// - 10.00 % → 4 jours  

// -------------------------------------------------------------------------------  
// Question 2  
// -------------------------------------------------------------------------------  
// Écrivez la fonction `pourcentage` qui prend en paramètres :  
// - `x` (entier) : contaminations quotidiennes par personne  
// - `population` (entier) : population totale  
// - `jours` (entier) : nombre de jours étudiés  

// La fonction renvoie le pourcentage de la population contaminée après ce nombre  
// de jours.  

// Exemples de résultats (population = 10 000, x = 5) :  
// - 2 jours → 0.36 %  
// - 3 jours → 2.16 %  
// - 4 jours → 12.96 %  
// - 5 jours → 77.76 %  
// - 6 jours → 100.00 %

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

int jours(int nb_per, int pop, float pourcent){
    int jours = 0;
    int contamine = 1;

    while((float)contamine/pop*100 <= pourcent){
        contamine += (nb_per * contamine);
        jours++;
    }

    return jours;
}

float pourcentage(int nb_per, int pop, int jours_etu){
    float pourcent = 0.0;
    int contamine = 1;
    int jours = 0;

    while(jours <= jours_etu){
        pourcent = (float)contamine/pop*100;
        contamine += (nb_per * contamine);
        jours++;
    }

    return pourcent > 100.0 ? 100.0 : pourcent;
}

int main(){
    int res = jours(5,10000,100);
    printf("%d\n", res);
    float res2 = pourcentage(5,10000,6);
    printf("%f\n", res2);
    return 0;
}
