#include <stdlib.h>
#include <stdio.h>

int indiceInsert(int tab[], int el, int nb, int taille){
    if(nb <= taille){
        int i = 0;
        while(i <= nb){
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
    else{
        return -1;
    }
}

int insertElt(int tab[], int el, int *nb, int taille){
    int index = indiceInsert(tab, el, *nb, taille);
    if(index == -1){
        return 0;
    }

    int i = 0;
    while(i <= *nb){
        if(tab[i] == el){
            return 0;
        }
        
        if(i == index){
            int i2 = i+1, cur, prev = tab[i];
            
            while(i2 <= *nb){
                cur = tab[i2];
                tab[i2] = prev;
                prev = cur;
                i2++;
            }
            tab[index] = el;
            (*nb)++;
            return 1;
        }
        i++;
    }
    return 0;
}

void affiche_tab(int tab[], int taille) {
	int i;
    for (i = 0; i < taille; i++) {
        printf("%d  ", tab[i]);
    }
    printf("\n");
}

int main() {
   int tab[6];
   int i, inser_OK, nbEl, val;
   
   scanf("%d", &nbEl);
   for (i = 0; i < nbEl; i++) {
      scanf("%d", tab + i);
   }
   scanf("%d", &val);
   
   // printf("\n%d\n\n", indiceInsert(tab, val, nbEl, 6));

   inser_OK = insertElt(tab, val, &nbEl, 6);
   printf("insertion OK ? %d\n", inser_OK);
   affiche_tab(tab, nbEl);
   return 0;
}
