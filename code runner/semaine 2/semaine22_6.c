#include <stdio.h>

void afficheDiviseurs(int n) {
  int i = 1, j;
  while(n >= i){
    j = 1;
    while(j <= i){
      if(i % j == 0){
        printf("%d ", j);
      }
      j++;
    }
    printf("\n");
    i++;
  }
}

int main() {
  afficheDiviseurs(4);
  return 0;
}