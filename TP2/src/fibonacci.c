#include <stdio.h>

int main() {
    int n = 7;
    long long u0 = 0;
    long long u1 = 1;
    long long un;

    if (n < 0) {
        printf("Veuillez choisir un entier positif ou nul.\n");
        return 1;
    }

    printf("Suite de Fibonacci jusqu'à U%d :\n", n);

    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            un = u0;
        } else if (i == 1) {
            un = u1;
        } else {
            un = u0 + u1;
            u0 = u1;
            u1 = un;
        }

        /* Séparation par virgule sauf pour le dernier élément */
        if (i == n) {
            printf("%lld\n", un);
        } else {
            printf("%lld, ", un);
        }
    }

    return 0;
}
