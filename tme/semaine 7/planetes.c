#include <stdio.h>
#define NB_PLANETES 8

typedef struct planete_s{
    char nom[10];
    float densite;
    float distance;
    int sat;
} planete;

void affichePlanete(planete plt){
    printf("Nom : %s\n", plt.nom);
    printf("Densite : %.2f\n", plt.densite);
    printf("Distance : %.2f\n", plt.distance);
    printf("Satellites : %d\n", plt.sat);
}

// void affichePlanete(planete plt){
//     printf("%s : densite = %.2f, distance soleil = %.2f, nb satellites = %d", plt.nom, plt.densite, plt.distance, plt.sat);
// }

void afficheToutesPlanetes(planete plts[], int taille){
    for(int i = 0; i < taille; i++){
        affichePlanete(plts[i]);
        printf("\n");
    }
}

void modifieDensite(planete *plt, float val){
    plt->densite = val;
}

int main(){
    planete systemeSolaire[NB_PLANETES] ={{"Mercure", 5.42, 58, 0},{"Venus", 5.25, 108.2, 0},{"Terre", 5.52,149.6,1},{"Mars",3.94,227.9,2},{"Jupiter",1.314,778.3,16},{"Saturne",0.69,1427,17},{"Uranus",1.19,2869,15},{"Neptune",1.6,4496,2}};
    
    modifieDensite(&systemeSolaire[7], 99999);

    afficheToutesPlanetes(systemeSolaire, NB_PLANETES);
    return 0;
}