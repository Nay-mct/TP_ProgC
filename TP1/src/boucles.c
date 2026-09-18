#include <stdio.h>

int main() {
    int compteur = 5;

    /* Vérification de la contrainte strictly inferieure a 10 */
    if (compteur <= 0 || compteur >= 10) {
        printf("La valeur de compteur doit être strictement comprise entre 0 et 10.\n");
        return 1;
    }

    /* Version 1 : Boucles for */
    printf("--- Version avec boucles for ---\n");
    for (int i = 0; i < compteur; i++) {
        for (int j = 0; j <= i; j++) {
            /* Conditions pour les bords : premiere colonne, hypotenuse ou derniere ligne */
            if (j == 0 || j == i || i == compteur - 1) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    /* Version 2 : Boucles while */
    printf("\n--- Version avec boucles while ---\n");
    int i = 0;
    while (i < compteur) {
        int j = 0;
        while (j <= i) {
            if (j == 0 || j == i || i == compteur - 1) {
                printf("* ");
            } else {
                printf("# ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
