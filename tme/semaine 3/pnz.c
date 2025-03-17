#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NB_VALEURS 50
#define VMIN -20
#define VMAX 20

int valeur_aleatoire(int min, int max)
{
  return min + rand() % (max - min + 1);
}

void pos_neg_zero(int val, int *pos, int *neg, int *zero){
  if(val == 0){
    (*zero)++;
  }
  else if(val < 0){
    (*neg)++;
  }
  else{
    (*pos)++;
  }
}

int main(){
  /* initialisation du g�n�rateur de nombres al�atoires */
  srand(time(NULL));
  
  int positive = 0, negative = 0, zeros = 0;
  for(int i = 0; i < NB_VALEURS; i++){
    int res = valeur_aleatoire(VMIN,VMAX);
    printf("%d\n", res);
    pos_neg_zero(res, &positive, &negative, &zeros);
  }
  printf("%d | %d | %d\n", positive, negative, zeros);

  return 0;
}