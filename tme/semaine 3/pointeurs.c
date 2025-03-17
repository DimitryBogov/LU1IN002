#include <stdio.h>

void ma_fonction(int v1, int v2) {
  int a;
  int b;
  
  a = v1;
  b = a + v2;
  a = 2 * b;
  printf("a=%d, b=%d\n",a,b);
}

int main() {
  ma_fonction(10,20);
}