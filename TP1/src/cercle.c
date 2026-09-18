#include <stdio.h>

int main() {
    double pi = 3.14159;
    double rayon = 6.0;

    /* Calculs */
    double aire = pi * rayon * rayon;
    double perimetre = 2 * pi * rayon;

    /* Affichage avec retour à la ligne */
    printf("Rayon : %.2f\n", rayon);
    printf("L'aire du cercle = %f\n", aire);
    printf("Le perimetre du cercle = %f\n", perimetre);

    return 0;
}


