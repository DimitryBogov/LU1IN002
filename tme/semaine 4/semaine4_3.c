#include <stdlib.h>
#include <stdio.h>

#define taille1 5
#define taille2 5

int *fusion(int tab1[taille1], int tab2[taille2]){
    int i1 = 0, i2 = 0, i = 0, taille = taille1 + taille2;

    int *tab;
    tab = malloc(sizeof(int)*taille);

    while(i < taille){
        if(i1 == taille1){
            tab[i] = tab2[i2];
            i2++;
            i++;
        }
        else if(i2 == taille2){
            tab[i] = tab1[i1];
            i1++;
            i++;
        }
        else if(tab1[i1] <= tab2[i2]){
            tab[i] = tab1[i1];
            i1++;
            i++;
        }
        else{
            tab[i] = tab2[i2];
            i2++;
            i++;
        }
    }
    
    return tab;
}

int main(){
    int tab1[taille1] = {2,4,6,8,10};
    int tab2[taille2] = {1,3,5,7,9};
    int *tab;

    tab = fusion(tab1, tab2);

    for(int i = 0; i < taille1 + taille2; i++){
        printf("%d\n", tab[i]);
    }

    return 0;
}
