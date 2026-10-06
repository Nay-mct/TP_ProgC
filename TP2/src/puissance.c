#include <stdio.h>

int main() {
    int a = 2;
    int b = 3;
    long long resultat = 1;

    /* Cas particulier pour l'exposant négatif non supporté en entier simple */
    if (b < 0) {
        printf("L'exposant doit être positif ou nul.\n");
        return 1;
    }

    /* Calcul de a^b avec une boucle for */
    for (int i = 0; i < b; i++) {
        resultat *= a;
    }

    printf("%d élevé à la puissance %d = %lld\n", a, b, resultat);

    return 0;
}
