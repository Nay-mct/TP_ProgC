#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

/* Procédure pour afficher le contenu d'un tableau */
void afficher_tableau(const int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d%s", tab[i], (i == taille - 1) ? "" : " ");
    }
    printf("\n");
}

int main() {
    int tab[TAILLE];

    /* Initialisation de la graine aléatoire */
    srand((unsigned int)time(NULL));

    /* Remplissage avec 100 entiers (positifs et négatifs entre -500 et 499) */
    for (int i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 1000) - 500;
    }

    /* 1. Affichage du tableau non trié */
    printf("Tableau non trié :\n");
    afficher_tableau(tab, TAILLE);
    printf("\n");

    /* 2. Algorithme de tri à bulles (ordre croissant) */
    for (int i = 0; i < TAILLE - 1; i++) {
        for (int j = 0; j < TAILLE - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    /* 3. Affichage du tableau trié */
    printf("Tableau trié par ordre croissant :\n");
    afficher_tableau(tab, TAILLE);

    return 0;
}
