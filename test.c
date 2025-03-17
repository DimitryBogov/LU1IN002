#include <stdlib.h>
#include <stdio.h>

typedef struct _cellule_t cellule_t;
struct _cellule_t{
 int donnee;
 cellule_t *suivant;
};

cellule_t *cons(int val, cellule_t *pListe){
 cellule_t *el;

 el = malloc(sizeof(cellule_t));
 if (el == NULL) return NULL;
 el->donnee = val;
 el->suivant = pListe;
 return el;
}

void Afficher(cellule_t *pListe){
	cellule_t *cell = pListe;
	while(cell != NULL){
		printf("%d\n", cell->donnee);
		cell = cell->suivant;
	}
}

// cellule_t* f(cellule_t* liste){
//     cellule_t *tmp;
//     tmp = liste;
//     if(tmp == NULL) {
//      return NULL;
//     }
//     while(tmp->suivant != NULL){
//      tmp = tmp->suivant;
//     }
//     return tmp;
// }

cellule_t *f(int d, cellule_t *liste){
    cellule_t *nCell;
     if (liste == NULL) {
       nCell = malloc(sizeof(cellule_t));
       nCell->donnee = d;
       nCell->suivant = NULL;
       return nCell;
     }
     
     liste->suivant = f(d, liste->suivant);
     return liste;
}

int main(){
 cellule_t *ns = NULL, *x = NULL;
 ns = cons(17, ns);
 ns = cons(15, ns);
 ns = cons(12, ns);
 
 ns = f(15, ns);
 Afficher(ns);
 return 0;
} 
