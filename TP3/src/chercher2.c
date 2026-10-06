#include <stdio.h>

#define NB_PHRASES 10

/* Fonction manuelle de comparaison de deux chaînes sans bibliothèque externe */
int chaines_identiques(const char *s1, const char *s2) {
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0;
        }
        i++;
    }

    /* Les deux chaînes doivent se terminer en même temps */
    return (s1[i] == '\0' && s2[i] == '\0');
}

int main() {
    const char *phrases[NB_PHRASES] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    /* Deux tests : une phrase existante, puis une phrase absente */
    const char *recherche1 = "La programmation en C est amusante.";
    const char *recherche2 = "Je préfère le Python.";

    const char *cibles[2] = {recherche1, recherche2};

    for (int t = 0; t < 2; t++) {
        const char *cible = cibles[t];
        int trouve = 0;

        printf("Recherche de : \"%s\"\n", cible);

        for (int i = 0; i < NB_PHRASES; i++) {
            if (chaines_identiques(phrases[i], cible)) {
                trouve = 1;
                break;
            }
        }

        if (trouve) {
            printf("Résultat : Phrase trouvée\n\n");
        } else {
            printf("Résultat : Phrase non trouvée\n\n");
        }
    }

    return 0;
}
