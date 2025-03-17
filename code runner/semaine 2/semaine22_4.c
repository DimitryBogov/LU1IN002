#include <stdio.h>

int valeur() {
  int n;
  scanf("%d",&n);
  return n;
}

float moyennePos(int nb){
  int i = 0, j = 0, n;
  float somme = 0.0;
  while(j < nb){
    n = valeur();
    if(n >= 0){
      somme += n;
      i++;
    }
    j++;
  }
  
  if(i == 0){
    return -1;
  }
  else{
    return somme/i;
  }
}

int main() {
 
  printf("moyennePos = %.2f\n",moyennePos(valeur()));
  return 0;
}