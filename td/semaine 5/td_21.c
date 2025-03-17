#include <stdio.h>
#include <stdlib.h>

#define NB_V 5

void affiche_distances(int villes[], int distances[NB_V][NB_V]){
    printf("km\t");
    for(int i = 0; i < NB_V; i++){
        printf("%d\t", villes[i]);
    }
    printf("\n");

    for(int i = 0; i < NB_V; i++){
        printf("%d\t", villes[i]);

        for(int j = 0; j < NB_V; j++){
            if(i==j){
                printf("-\t");
            }
            else{
                printf("%d\t", distances[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}

int main(){
    int villes[NB_V] = {29, 59, 67, 75, 83};
    int distances[NB_V][NB_V] = {{0, 598, 900, 504, 995},
    {598, 0, 407, 203, 861}, {900, 407, 0, 397, 621},
    {504, 203, 397, 0, 694}, {995, 861, 621, 694, 0}};

    affiche_distances(villes, distances);

    return 0;
}