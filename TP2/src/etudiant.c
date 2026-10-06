#include <stdio.h>

#define NB_ETUDIANTS 5

int main() {
    /* Tableaux pour stocker les informations textuelles */
    char noms[NB_ETUDIANTS][50] = {
        "Dupont", "Martin", "Bernard", "Durand", "Leroy"
    };
    char prenoms[NB_ETUDIANTS][50] = {
        "Alice", "Bob", "Charlie", "Diana", "Evan"
    };
    char adresses[NB_ETUDIANTS][100] = {
        "10 Rue de Paris, Cergy",
        "25 Avenue des Champs, Pontoise",
        "3 Boulevard Victor Hugo, Paris",
        "14 Allée des Fleurs, Versailles",
        "8 Place de la République, Lyon"
    };

    /* Tableaux pour stocker les notes */
    float notes_prog[NB_ETUDIANTS] = {16.5f, 14.0f, 12.5f, 18.0f, 15.0f};
    float notes_sys[NB_ETUDIANTS]  = {15.0f, 13.5f, 11.0f, 17.5f, 16.0f};

    printf("=== Liste des étudiants ===\n\n");

    for (int i = 0; i < NB_ETUDIANTS; i++) {
        printf("Étudiant.e n°%d :\n", i + 1);
        printf("  Nom : %s\n", noms[i]);
        printf("  Prénom : %s\n", prenoms[i]);
        printf("  Adresse : %s\n", adresses[i]);
        printf("  Note Programmation en C : %.2f / 20\n", notes_prog[i]);
        printf("  Note Système d'exploitation : %.2f / 20\n", notes_sys[i]);
        printf("----------------------------------------\n");
    }

    return 0;
}
