#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 16;
    int b = 3;

    /* Opérations arithmétiques */
    printf("Addition (a + b)        : %d\n", a + b);
    printf("Soustraction (a - b)     : %d\n", a - b);
    printf("Multiplication (a * b)   : %d\n", a * b);
    printf("Division entière (a / b) : %d\n", a / b);
    printf("Modulo (a %% b)           : %d\n", a % b);

    /* Opérateurs logiques / comparaisons (affichage valeur et libellé booléen) */
    printf("a == b                   : %d (%s)\n", (a == b), (a == b) ? "true" : "false");
    printf("a > b                    : %d (%s)\n", (a > b), (a > b) ? "true" : "false");

    return 0;
}


