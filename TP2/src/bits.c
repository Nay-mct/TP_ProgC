#include <stdio.h>

int main() {
    /* Test avec une valeur ayant les bits 28 et 12 à 1 : (1U << 28) | (1U << 12) */
    unsigned int d = (1U << 28) | (1U << 12);

    /* Extraction du 4e bit de gauche (bit 28) et 20e bit de gauche (bit 12) */
    int bit4 = (d >> 28) & 1;
    int bit20 = (d >> 12) & 1;

    /* Condition : les deux bits doivent valoir 1 */
    if (bit4 == 1 && bit20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
