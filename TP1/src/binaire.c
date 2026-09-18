#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int k = 0; k < taille; k++) {
        int n = nombres[k];
        printf("%5d en binaire : ", n);

        if (n == 0) {
            printf("0\n");
            continue;
        }

        int bits[32];
        int index = 0;
        unsigned int temp = (unsigned int)n;

        /* Extraction des bits avec % et / */
        while (temp > 0) {
            bits[index] = temp % 2;
            temp = temp / 2;
            index++;
        }

        /* Affichage dans l'ordre inverse */
        for (int i = index - 1; i >= 0; i--) {
            printf("%d", bits[i]);
        }
        printf("\n");
    }

    return 0;
}
