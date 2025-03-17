#include <stdio.h>
#include <stdlib.h>

float *conversion(int tab[31]){
    float *tab_c;
    tab_c = malloc(sizeof(float)*31);

    for(int i = 0; i < 31; i++){
        tab_c[i] = (tab[i] - 32) * 5.0/9.0;
    }

    return tab_c;
}

int main() {
   int tabF[31];
   float *tabC;
   int i, nb;
   
   scanf("%d", &nb);
   for (i = 0; i < nb; i++) {
      scanf("%d", &tabF[i]);
   }
   
   tabC = conversion(tabF);
   for (i = 0; i < nb; i++) {
      printf("%.1f  ", tabC[i]);
   }
   printf("\n");

   free(tabC);
   
   return 0;
}
