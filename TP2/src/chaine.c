#include <stdio.h>

int main() {
    char ch1[100] = "Hello";
    char ch2[] = " World!";
    char copie[100];
    char concat[200];

    int i = 0;
    int j = 0;
    int longueur = 0;

    /* 1. Calcul de la longueur de ch1 */
    while (ch1[longueur] != '\0') {
        longueur++;
    }
    printf("Nombre de caractères de ch1 : %d\n", longueur);

    /* 2. Copie de ch1 dans copie */
    i = 0;
    while (ch1[i] != '\0') {
        copie[i] = ch1[i];
        i++;
    }
    copie[i] = '\0';
    printf("Chaîne copiée : %s\n", copie);

    /* 3. Concaténation de ch1 et ch2 dans concat */
    /* Copie initiale de ch1 */
    i = 0;
    while (ch1[i] != '\0') {
        concat[i] = ch1[i];
        i++;
    }

    /* Ajout des caractères de ch2 à la suite */
    j = 0;
    while (ch2[j] != '\0') {
        concat[i] = ch2[j];
        i++;
        j++;
    }
    concat[i] = '\0';
    printf("Chaîne concaténée : %s\n", concat);

    return 0;
}
