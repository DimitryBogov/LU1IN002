// #include <stdio.h>

// void afficheIntersection(int a1, int a2, int b1, int b2){
//     int inter1 = -1, inter2 = -1;
    
//     if(a1 <= b1 && a1 <= b2 && a2 >= b1){
//         inter1 = b1;
//     }
    
//     if(a2 >= b1 && a2 >= b2 && a1 <= b2){
//         inter2 = b2;
//     }

//     if(b1 <= a1 && b1 <= a2 && b2 >= a1){
//         inter1 = a1;
//     }

//     if(b2 >= a1 && b2 >= a2 && b1 <= a2){
//         inter2 = a2;
//     }

//     if(inter1 == -1){
//         printf("Vide\n");
//     }
//     else{
//         for(int i = inter1; i <= inter2; i++){
//             printf("%d ", i);
//         }
//     }
// }

// int main(){
//   int a1,a2,b1,b2;

//   scanf("%d",&a1);
//   scanf("%d",&a2);
//   scanf("%d",&b1);
//   scanf("%d",&b2);
 
//   afficheIntersection(a1, a2, b1, b2); // 2 - 4, 2 - 4

//   return 0;
// }

#include <stdio.h>

void afficheIntersection(int a1, int a2, int b1, int b2) {
    int inter1 = (a1 > b1) ? a1 : b1; // La plus grande des bornes inférieures
    int inter2 = (a2 < b2) ? a2 : b2; // La plus petite des bornes supérieures

    if (inter1 > inter2) {
        printf("Vide\n");
    } else {
        for (int i = inter1; i <= inter2; i++) {
            printf("%d ", i);
        }
    }
}

int main() {
    int a1, a2, b1, b2;

    scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
    afficheIntersection(a1, a2, b1, b2);

    return 0;
}

