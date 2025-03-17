#include <stdio.h>

void afficheMultiples(int a, int b) {
  int i = a;
  while(i <= b){
    if(i % a == 0){
      printf("%d ", i);
    }
    i++;
  }
}

int main() {
  afficheMultiples(3,20);
  return 0;
}