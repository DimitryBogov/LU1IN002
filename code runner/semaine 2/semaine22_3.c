#include <stdio.h>

int valeur() {
  int n;
  scanf("%d",&n);
  return n;
}

float moyennePos(){
  int i = 0, n;
  float somme = 0.0;
  while(1 == 1){
    n = valeur();
    if(n < 0){
      break;
    }
    else{
      somme += n;
      i++;
    }
  }
  
  if(i == 0){
    return -1;
  }
  else{
    return somme/i;
  }
}

int main() {
 
  printf("moyennePos = %.2f\n",moyennePos());
  return 0;
}