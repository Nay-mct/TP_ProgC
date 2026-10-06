#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tab[TAILLE];

    /* Initialisation du générateur aléatoire */
    srand((unsigned int)time(NULL));

    /* 1. Remplissage du tableau avec des valeurs entre 1 et 1000 */
    for (int i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 1000) + 1;
    }

    /* 2. Recherche du maximum et du minimum */
    int min = tab[0];
    int max = tab[0];

    for (int i = 1; i < TAILLE; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
        if (tab[i] < min) {
            min = tab[i];
        }
    }

    /* 3. Affichage des résultats */
    printf("Le numéro le plus grand est : %d\n", max);
    printf("Le numéro le plus petit est : %d\n", min);

    return 0;
}
