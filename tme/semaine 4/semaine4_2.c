#include <stdio.h>
#include <stdlib.h>

#define taille 4

int indiceInsert(int tab[taille], int nbEl, int el){
    if(nbEl <= taille){
        int i = 0;
        while(i <= nbEl){
            if(tab[i] == el){
                return -1;
            }

            if(tab[i] > el){
                return i;
            }
            i++;
        }
        return i;
    }
    return -1;
}

int insertEl(int tab[taille], int nbEl, int el, int index){
    if(nbEl <= taille){
        int i = 0;
        while(i <= nbEl){
            if(tab[i] == el){
                return 0;
            }
            
            if(i == index){
                int i2 = i+1, cur, prev = tab[i];
                
                while(i2 <= nbEl){
                    cur = tab[i2];
                    tab[i2] = prev;
                    prev = cur;
                    i2++;
                }
                tab[index] = el;
                return 1;
            }
            i++;
        }
    }
    return 0;
}

int main(){
    int tab[taille] = {3,5,7,9};
    int res = indiceInsert(tab, 4, 10);
    
    printf("%d\n", res);
    
    res = insertEl(tab, 4, 10, res);

    printf("%d\n", res);
    printf("\n");

    for(int i = 0; i < taille; i++){
        printf("%d\n", tab[i]);
    }

    return 0;
}
