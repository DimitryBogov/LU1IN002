#include <stdlib.h>
#include <stdio.h>

#define NB_AMIS 4
#define NB_JOURS 7

float *initialize(){
    float *tab;
    tab = malloc(sizeof(float) * NB_AMIS * NB_JOURS);
    for(int i = 0; i < NB_AMIS; i++){
        for(int j = 0; j < NB_JOURS; j++){
            *(tab + i * NB_JOURS + j) = 0;
        }
    }

    return tab;
}

int *payeur(){
    int *tab;
    tab = malloc(sizeof(int)*NB_JOURS*3);

    for(int i = 0; i < NB_JOURS; i++){
        *(tab + i * 3 + 0) = i+1; // jour
        *(tab + i * 3 + 1) = rand() % (NB_AMIS); // qui paye
        *(tab + i * 3 + 2) = 30 + rand() % (50 - 30 + 1); // combien
    }

    return tab;
}

void solde(int *pay, float *tab){
    int personne, montant;
    float chaque;
    for(int i = 0; i < NB_JOURS; i++){
        personne = *(pay + i * 3 + 1);
        montant = *(pay + i * 3 + 2);
        chaque = (float)montant / NB_AMIS;

        for(int j = 0; j < NB_AMIS; j++){
            if(j == personne){
                *(tab + j * NB_JOURS + i) = montant - chaque;
            }
            else{
                *(tab + j * NB_JOURS + i) = -chaque;
            }
        }
        
    }
}

float solde_un(float *tab, int pers){
    float total = 0;

    for(int j = 0; j < NB_JOURS; j++){
        if(*(tab + pers * NB_JOURS + j) < 0){
            total += *(tab + pers * NB_JOURS + j);
        }
    }

    return total;
}

int main(){
    float *tab, total;
    int *pay;
    tab = initialize();

    pay = payeur();

    for(int i = 0; i < NB_JOURS; i++){
        printf("Jour %d : %d paye %d", *(pay + i * 3 + 0), *(pay + i * 3 + 1), *(pay + i * 3 + 2));
        printf("\n");
    }

    printf("\n\n");

    for(int i = 0; i < NB_AMIS; i++){
        for(int j = 0; j < NB_JOURS; j++){
            printf("%.2f\t", *(tab + i * NB_JOURS + j));
        }
        printf("\n");
    }

    printf("\n\n");

    solde(pay, tab);

    for(int i = 0; i < NB_AMIS; i++){
        for(int j = 0; j < NB_JOURS; j++){
            printf("%.2f\t", *(tab + i * NB_JOURS + j));
        }
        printf("\n");
    }

    printf("\n\n");

    total = solde_un(tab, 1);
    
    printf("%.2f\n", total);

    return 0;
}
