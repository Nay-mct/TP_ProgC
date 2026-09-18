#include <stdio.h>

int main() {
    int somme = 0;

    for (int i = 1; i <= 1000; i++) {
        /* Condition d'exclusion prioritaire : divisible par 11 */
        if (i % 11 == 0) {
            continue;
        }

        /* Divisible par 5 ou par 7 */
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        /* Arrêt immédiat si la somme dépasse 5000 */
        if (somme > 5000) {
            break;
        }
    }

    printf("Somme finale : %d\n", somme);

    return 0;
}
