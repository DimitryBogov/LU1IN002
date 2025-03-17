#include <stdio.h>
#define VAL1 2
#define VAL2 7
#define VAL3 5
#define VAL4 9


void min_max(int *v, int *min, int *max) {
  if(*v < *min){
    *min = *v;
  }
  if(*v > *max){
    *max = *v;
  }
}

void stats(int *v1, int *v2, int *v3, int *v4, int *min, int *max, float *moy) {
  *min = *v1;
  *max = *v1;

  if(*v1 <= 0){
    *min = -1;
    *max = -1;
    *moy = -1.0;
  }
  else if(*v2 <= 0){
    *moy = *v1;
  }
  else if(*v3 <= 0){
    min_max(v2, min, max);
    *moy = (*v1 + *v2) / 2.0;
  }
  else if(*v4 <= 0){
    min_max(v2, min, max);
    min_max(v3, min, max);
    *moy = (*v1 + *v2 + *v3) / 3.0;
  }
  else{
    min_max(v2, min, max);
    min_max(v3, min, max);
    min_max(v4, min, max);
    *moy = (*v1 + *v2 + *v3 + *v4) / 4.0;
  }
}

void afficher_resultat(float moyenne, int min, int max) {
  printf("max = %d, min = %d, moy = %.2f\n",max,min,moyenne);
}

int main() {
  float moy;
  int min, max;
  int val1 = VAL1, val2 = VAL2, val3 = VAL3, val4 = VAL4;

  /* vous devrez bien sur modifier les parametres d'appel de la fonction stats une fois cette derniere completee */
  stats(&val1, &val2, &val3, &val4, &min, &max, &moy);
  
  /* vous devrez bien sur modifier les parametres d'appel de la fonction afficher_resultat */
  afficher_resultat(moy,min,max);
  
  return 0;
}