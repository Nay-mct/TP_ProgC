#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tab[TAILLE];
    int cible = 0;
    int trouve = 0;

    /* Initialisation de la graine aléatoire */
    srand((unsigned int)time(NULL));

    /* Remplissage du tableau avec des valeurs entre -50 et 50 pour faciliter les tests */
    for (int i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 101) - 50;
    }

    /* 1. Affichage du tableau */
    printf("Tableau :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d%s", tab[i], (i == TAILLE - 1) ? "" : " ");
    }
    printf("\n\n");

    /* 2. Demande de l'entier à rechercher */
    printf("Entrez l'entier que vous souhaitez chercher : ");
    if (scanf("%d", &cible) != 1) {
        printf("Erreur de saisie.\n");
        return 1;
    }

    /* 3. Recherche dans le tableau */
    for (int i = 0; i < TAILLE; i++) {
        if (tab[i] == cible) {
            trouve = 1;
            break; /* Inutile de continuer dès qu'on l'a trouvé */
        }
    }

    /* 4. Affichage du résultat */
    if (trouve) {
        printf("\nRésultat : entier présent\n");
    } else {
        printf("\nRésultat : entier absent\n");
    }

    return 0;
}
