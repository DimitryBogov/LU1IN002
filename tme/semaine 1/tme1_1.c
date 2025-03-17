// Exercice 2 – Compilation et exécution dans un terminal  
// -------------------------------------------------------------------------------  
// Contrairement à Python (langage interprété), le C est un langage compilé. Le code  
// source écrit dans un éditeur de texte est traduit par un compilateur en un fichier  
// binaire exécutable par le processeur. Ce fichier exécutable n’est généré que si le  
// compilateur ne détecte aucune erreur de syntaxe.  

// Nous utiliserons le compilateur `gcc`. La compilation nécessite un terminal pour  
// envoyer des commandes au système.  

// -------------------------------------------------------------------------------  
// Question 1  
// -------------------------------------------------------------------------------  
// Utilisez `cd` (et `ls` si nécessaire) pour vous placer dans le répertoire contenant  
// votre fichier `hello.c`.  

// -------------------------------------------------------------------------------  
// Question 2  
// -------------------------------------------------------------------------------  
// 1. Compilez avec `gcc hello.c`. Répétez jusqu’à correction de toutes les erreurs.  
// 2. Utilisez `ls` pour lister le répertoire et identifier le nom de l’exécutable  
//    généré (par défaut : `a.out`).  

// Attention : Tous les exécutables auront le nom `a.out` par défaut, ce qui est  
// peu pratique.  

// -------------------------------------------------------------------------------  
// Question 3  
// -------------------------------------------------------------------------------  
// 1. Supprimez `a.out` avec `rm a.out`.  
// 2. Recompilez en choisissant un nom explicite pour l’exécutable :  
//    `gcc -o hello hello.c`  

// -------------------------------------------------------------------------------  
// Question 4  
// -------------------------------------------------------------------------------  
// Exécutez le programme avec :  
// `./hello`  

// -------------------------------------------------------------------------------  
// Question 5  
// -------------------------------------------------------------------------------  
// 1. Compilez avec l’option `-Wall` pour afficher tous les avertissements :  
//    `gcc -Wall -o hello hello.c`  
// 2. Vérifiez qu’aucun avertissement ou erreur n’apparaît.  

// Remarques :  
// - Si votre code utilise `math.h`, ajoutez `-lm` à la commande.  
// - Si votre code utilise `cini.h`, ajoutez `-lcini`.

#include <stdlib.h>
#include <stdio.h>

int main(){
    printf("Hello World!\n");
    return 0;
}
