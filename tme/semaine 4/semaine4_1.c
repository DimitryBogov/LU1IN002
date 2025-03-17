#include <stdlib.h>
#include <stdio.h>

#define NB 31
#define MIN -200
#define MAX 300

void init_temp(float tab[NB]){
    int temp;
    float temp_f;
    for(int i = 0; i < NB; i++){
        temp = MIN + rand() % (MAX - MIN + 1);
        temp_f = temp / 10.0;
        tab[i] = temp_f;
    }
}

float moy_temp(float tab[NB]){
    float somme;
    for(int i = 0; i < NB; i++){
        somme += tab[i];
    }

    return somme / NB;
}

float neg_moy(float tab[NB]){
    int jours = 0;
    float somme = 0;
    for(int i = 0; i < NB; i++){
        if(tab[i] < 0){
            jours++;
            somme += tab[i];
        }
    }

    if(jours == 0){
        printf("Aucune temperature au-dessous de zero.");
    }

    return somme / jours;
}

int main(){
    float tableau[NB];

    init_temp(tableau);

    for(int i = 0; i < NB; i++){
        printf("%.2f\n", tableau[i]);
    }
    printf("\n");

    printf("%.2f\n", moy_temp(tableau));
    printf("%.2f\n", neg_moy(tableau));

    return 0;
}
