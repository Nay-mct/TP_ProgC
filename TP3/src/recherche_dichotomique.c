#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tab[TAILLE];
    int cible = 0;
    int trouve = 0;

    srand((unsigned int)time(NULL));

    /* 1. Remplissage avec des entiers aléatoires */
    for (int i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 200) - 100;
    }

    /* 2. Tri par sélection ou à bulles pour garantir que le tableau est trié */
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
    printf("Tableau trié :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d%s", tab[i], (i == TAILLE - 1) ? "" : " ");
    }
    printf("\n\n");

    /* 4. Saisie de la valeur recherchée */
    printf("Entrez l'entier que vous souhaitez chercher : ");
    if (scanf("%d", &cible) != 1) {
        printf("Erreur de saisie.\n");
        return 1;
    }

    /* 5. Algorithme de recherche dichotomique */
    int gauche = 0;
    int droite = TAILLE - 1;

    while (gauche <= droite) {
        int milieu = gauche + (droite - gauche) / 2;

        if (tab[milieu] == cible) {
            trouve = 1;
            break;
        } else if (tab[milieu] < cible) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
        }
    }

    /* 6. Affichage du résultat */
    if (trouve) {
        printf("\nRésultat : entier présent\n");
    } else {
        printf("\nRésultat : entier absent\n");
    }

    return 0;
}
