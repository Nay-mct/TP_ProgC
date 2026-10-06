#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 10

int main() {
    int tab_int[TAILLE];
    float tab_float[TAILLE];

    /* Initialisation de la graine aléatoire */
    srand((unsigned int)time(NULL));

    /* Pointeurs vers les débuts des tableaux */
    int *p_int = tab_int;
    float *p_float = tab_float;

    /* 1. Remplissage des tableaux avec des pointeurs */
    for (int i = 0; i < TAILLE; i++) {
        *(p_int + i) = rand() % 100;                                   /* Entiers entre 0 et 99 */
        *(p_float + i) = ((float)(rand() % 1000)) / 100.0f;            /* Floats avec 2 décimales */
    }

    /* 2. Affichage avant modification */
    printf("Tableau d'entiers (avant la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d%s", *(p_int + i), (i == TAILLE - 1) ? "" : ", ");
    }
    printf("\n\n");

    printf("Tableau de nombres à virgule flottante (avant la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f%s", *(p_float + i), (i == TAILLE - 1) ? "" : ", ");
    }
    printf("\n\n");

    /* 3. Multiplication par 3 pour les indices divisibles par 2 */
    for (int i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) {
            *(p_int + i) *= 3;
            *(p_float + i) *= 3.0f;
        }
    }

    /* 4. Affichage après modification */
    printf("Tableau d'entiers (après la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d%s", *(p_int + i), (i == TAILLE - 1) ? "" : ", ");
    }
    printf("\n\n");

    printf("Tableau de nombres à virgule flottante (après la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f%s", *(p_float + i), (i == TAILLE - 1) ? "" : ", ");
    }
    printf("\n");

    return 0;
}
