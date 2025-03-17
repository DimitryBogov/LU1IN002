#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 10
#define MIN 4

int initialize(int brut[MAX+1]){
    int taille = MIN + rand() % (MAX - MIN + 1);
    int i;
    for(i = 0; i < taille; i++){
        brut[i] = rand() % 2;
    }
    brut[i] = -1;

    return taille;
}

void afficher(int brut[MAX+1], int len){
    int i = 0;
    while(i < len+1){
        printf("%d\t", brut[i]);
        i++;
    }
    printf("\n");
}

int compress_tab(int tab_brut[], int tab_compress[]){
    int meme = 0, index = 0, parcours = 1;
    int prev = *tab_brut, *i = tab_brut;
    while(parcours){
        if(*i == -1){
            parcours = 0;
        }

        if(prev == *i){
            meme++;
        }
        else{
            if(meme == 1){
                tab_compress[index] = prev;
            }
            else{
                tab_compress[index] = meme;
                tab_compress[index + 1] = prev;
                index++;
            }
            index++;

            prev = *i;
            meme = 1;
        }
        i++;
    }
    tab_compress[index] = -1;

    return index;
}

int decompress_tab(int tab_brut[], int tab_compress[]){
    int index = 0;
    for(int *x = tab_compress; *x != -1; x++){
        if(*x != 0 && *x != 1){
            for(int i = 0; i < *x; i++){
                tab_brut[index] = *(x+1);
                index++;
            }
            x++;
        }
        else{
            tab_brut[index] = *x;  
            index++;          
        }
    }
    tab_brut[index] = -1;

    return index;
}

int verifie(int tab_brut[], int tab_brut2[]){
    int i = 0;
    while(tab_brut[i] != -1 || tab_brut2[i] != -1){
        if(tab_brut[i-1] == -1 || tab_brut2[i-1] == -1)
            return 0;

        if(tab_brut[i] != tab_brut2[i])
            return 0;
        i++;
    }
    return 1;
}

int main(){
    // srand(time(NULL));
    // for (int i = 0; i < 10; i++) {
    //     rand(); // On "brûle" quelques valeurs pour casser la régularité
    // }

    // int brut[MAX+1], brut2[MAX+1], compress[MAX+1], res;

    // res = initialize(brut);
    // //initialize(brut2);

    // printf("%d\n", res);
    // afficher(brut, res);
    // printf("\n\n");

    // // COMPRESS
    // res = compress_tab(brut, compress);

    // printf("%d\n", res);
    // afficher(compress, res);
    // printf("\n\n");

    // // DECOMPRESS
    // res = decompress_tab(brut, compress);

    // printf("%d\n", res);
    // afficher(brut, res);
    // printf("\n\n");

    // VERIFICATION
    int brut2[] = {1,1,5,-1};
    int brut[] = {1,1,5,4,7,-1};
    int res = verifie(brut, brut2);
    printf("%d\n", res);

    return 0;
}
