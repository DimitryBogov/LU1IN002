#define NB_JOURS 7
#define NB_AMIS 4

void init_zero(float tab[][NB_JOURS], int taille) {
    for(int i = 0; i < taille; i++){
        for(int j = 0; j < NB_JOURS; j++){
            tab[i][j] = 0;
        }
    }
}

void affecte_depenses(float tab[][NB_JOURS], int jour, float montant, int id){
    float chaque = (float)montant / NB_AMIS;

    for(int j = 0; j < NB_AMIS; j++){
        if(j == id){
            tab[j][jour] = montant - chaque;
        }
        else{
            tab[j][jour] = -chaque;
        }
    }
}

float calcul_solde(float tab[][NB_JOURS], int id) {
    float total = 0;

    for(int j = 0; j < NB_JOURS; j++){
        total += tab[id][j];
    }

    return total;
}

void affiche_soldes(float tab[][NB_JOURS]) {
  for(int i = 0; i < NB_AMIS; i++){
    printf("Solde pour %d : %.2f\n", i, calcul_solde(tab, i));
  }
}