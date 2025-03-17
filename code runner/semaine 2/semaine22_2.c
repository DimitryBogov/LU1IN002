#include <stdio.h>

int valeur() {
  int n;
  scanf("%d",&n);
  return n;
}

float moyenne(int n) {
    int i = 0;
    float somme = 0.0;
    while(i < n){
        somme += valeur();
        i++;
    }

    return somme/n;
}

int main() {
  int nb;

  nb = valeur();
  printf("moyenne = %.2f\n",moyenne(nb));
  return 0;
}
  