#include <stdio.h>

float moy_temp(float tab[], int nbj){
    float somme;
    for(int i = 0; i < nbj; i++){
        somme += tab[i];
    }

    return somme / nbj;
}

float moy_temp_gel(float tab[], int nbj){
    int jours = 0;
    float somme = 0;
    for(int i = 0; i < nbj; i++){
        if(tab[i] < 0){
            jours++;
            somme += tab[i];
        }
    }

    if(jours == 0){
        return 0;
    }

    return somme / jours;
}

int main() {
   float tab[31];
   float moy_gel;
   int i, nbj;
   
   scanf("%d", &nbj);
   for (i = 0; i < nbj; i++) {
      scanf("%f", &tab[i]);
   }
   printf("temperature moyenne sur les %d derniers jours : %.2f\n", nbj, moy_temp(tab, nbj));
   moy_gel = moy_temp_gel(tab, nbj) ;
   if (moy_gel != 0) {
      printf("temperature moyenne sur les jours de gel : %.2f\n", moy_gel);
   }
   else {
      printf("Aucune temperature au-dessous de zero.\n");
   }
   return 0;
}