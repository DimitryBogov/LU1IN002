#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <time.h>

void echange(int *p1, int *p2){
    int t = *p1;
    *p1 = *p2;
    *p2 = t;
}

void tri(int *p1, int *p2){
    if(*p1 > *p2){
        echange(p1, p2);
    }
}

void tri_3(int *p1, int *p2, int *p3){
    while (*p1 > *p2 || *p2 > *p3){
        if(*p1 > *p2){
            tri(p1, p2);
        }
        if(*p2 > *p3){
            tri(p2, p3);
        }
    }
}

int main(){
    int a = 4, b = 12, c = 1;
    printf("%d,%d,%d\n", a,b,c);
    tri_3(&a,&b,&c);
    printf("%d,%d,%d\n", a,b,c);
    
    // printf("%d | %d\n", a, b);
    // tri(&a, &b); // a = 2, b = 5
    // printf("%d | %d\n", a, b);
    // tri(&a, &b);
    // printf("%d | %d\n", a, b);
    return 0;
}
