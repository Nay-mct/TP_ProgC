#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NB_COULEURS 100

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

typedef struct {
    Couleur couleur;
    int occurrences;
} CouleurCompteur;

/* Fonction pour vérifier si deux couleurs sont strictement identiques */
int couleurs_egales(Couleur c1, Couleur c2) {
    return (c1.r == c2.r && c1.g == c2.g && c1.b == c2.b && c1.a == c2.a);
}

int main() {
    Couleur tableau[NB_COULEURS];
    CouleurCompteur distinctes[NB_COULEURS];
    int nb_distinctes = 0;

    srand((unsigned int)time(NULL));

    /* 1. Remplissage avec des composantes restreintes pour générer des doublons */
    for (int i = 0; i < NB_COULEURS; i++) {
        tableau[i].r = (unsigned char)(0xf0 + (rand() % 4));
        tableau[i].g = (unsigned char)(rand() % 5);
        tableau[i].b = (unsigned char)(rand() % 5);
        tableau[i].a = 0xff;
    }

    /* 2. Comptage des occurrences */
    for (int i = 0; i < NB_COULEURS; i++) {
        int trouve = 0;

        for (int j = 0; j < nb_distinctes; j++) {
            if (couleurs_egales(tableau[i], distinctes[j].couleur)) {
                distinctes[j].occurrences++;
                trouve = 1;
                break;
            }
        }

        /* Si la couleur n'a pas encore été répertoriée */
        if (!trouve) {
            distinctes[nb_distinctes].couleur = tableau[i];
            distinctes[nb_distinctes].occurrences = 1;
            nb_distinctes++;
        }
    }

    /* 3. Affichage des résultats */
    printf("Nombre total de couleurs distinctes : %d\n\n", nb_distinctes);
    for (int i = 0; i < nb_distinctes; i++) {
        Couleur c = distinctes[i].couleur;
        printf("0x%02x 0x%02x 0x%02x 0x%02x : %d\n", c.r, c.g, c.b, c.a, distinctes[i].occurrences);
    }

    return 0;
}
