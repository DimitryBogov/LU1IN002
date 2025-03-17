#include <stdlib.h>
#include <stdio.h>

int est_deb(char *s1, char *s2){
    if(*s1 == '\0'){
        return 1;
    }
    
    if(*s1 != *s2){
        return 0;
    }
    else{
        return est_deb(s1+1, s2+1);
    }
}

int n_est_pas_deb(char *s1, char *s2){
    if(*s1 == '\0'){
        return 0;
    }

    if(*s1 != *s2){
        return 1;
    }
    else{
        return n_est_pas_deb(s1+1, s2+1);
    }
}

int est_incluse(char *s1, char *s2){
    if(est_deb(s1, s2)){
        return 1;
    }
    
    if(*s2 == '\0'){
        return 0;
    }
    else{
        return est_incluse(s1, s2+1);
    }
}

int main(){
    char *s1 = "l";
    char *s2 = "alphabet";
    int res = est_incluse(s1, s2);

    printf("%d\n", res);

    return 0;
}
