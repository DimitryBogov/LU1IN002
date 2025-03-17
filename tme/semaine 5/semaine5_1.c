#include <stdlib.h>
#include <stdio.h>

int compte_mots(char *phrase){
    int mots = 0, i = 0, espace_finis = 0;

    char c = phrase[i];
    while(c != '\0'){ 
        if(c != ' ' && espace_finis == 0){
            mots++;
            espace_finis = 1;
        }
        
        if(c == ' ' && espace_finis == 1){
            espace_finis = 0;
        }
        
        i++;
        c = phrase[i];
    }
    return mots;
}

int main(){
    char *phrase = "Hello World Guys\0";
    int res = compte_mots(phrase);
    printf("%d\n", res);
    return 0;
}
