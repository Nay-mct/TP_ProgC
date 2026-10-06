#include <stdio.h>

/* Fonction utilitaire pour afficher les octets d'une variable en hexadécimal (big-endian) */
void afficher_hex(const unsigned char *ptr, size_t taille) {
    for (int i = (int)taille - 1; i >= 0; i--) {
        printf("%02x", ptr[i]);
    }
}

int main() {
    /* 1. Déclaration et initialisation des variables de base */
    char c = 0x41;                     /* 'A' */
    short s = 0x1234;
    int i = 0x1a2b3c4d;
    long int li = 0x123456789abcdef0L;
    long long int lli = 0x0123456789abcdefLL;
    float f = 2.0f;                    /* 0x40000000 en IEEE 754 */
    double d = 3.1415926535;
    long double ld = 1.0L;

    /* 2. Pointeurs vers ces variables */
    char *p_c = &c;
    short *p_s = &s;
    int *p_i = &i;
    long int *p_li = &li;
    long long int *p_lli = &lli;
    float *p_f = &f;
    double *p_d = &d;
    long double *p_ld = &ld;

    /* 3. Affichage avant manipulation */
    printf("--- Avant la manipulation ---\n");
    printf("Adresse de c   : %p, Valeur : 0x%02x\n", (void *)p_c, (unsigned char)*p_c);
    printf("Adresse de s   : %p, Valeur : 0x%04x\n", (void *)p_s, (unsigned short)*p_s);
    printf("Adresse de i   : %p, Valeur : 0x%08x\n", (void *)p_i, (unsigned int)*p_i);
    printf("Adresse de li  : %p, Valeur : 0x%lx\n", (void *)p_li, (unsigned long)*p_li);
    printf("Adresse de lli : %p, Valeur : 0x%llx\n", (void *)p_lli, (unsigned long long)*p_lli);

    printf("Adresse de f   : %p, Valeur : 0x", (void *)p_f);
    afficher_hex((const unsigned char *)p_f, sizeof(float));
    printf("\n");

    printf("Adresse de d   : %p, Valeur : 0x", (void *)p_d);
    afficher_hex((const unsigned char *)p_d, sizeof(double));
    printf("\n");

    printf("Adresse de ld  : %p, Valeur : 0x", (void *)p_ld);
    afficher_hex((const unsigned char *)p_ld, sizeof(long double));
    printf("\n\n");

    /* 4. Manipulation via les pointeurs */
    *p_c = 0x42;               /* 'B' */
    *p_s = 0x5678;
    *p_i = 0x4d3c2b1a;
    *p_li = 0x0fedcba987654321L;
    *p_lli = 0x76543210fedcba98LL;
    *p_f = 1.0f;               /* 0x3f800000 en IEEE 754 */
    *p_d = 2.7182818284;
    *p_ld = 0.5L;

    /* 5. Affichage après manipulation */
    printf("--- Après la manipulation ---\n");
    printf("Adresse de c   : %p, Valeur : 0x%02x\n", (void *)p_c, (unsigned char)*p_c);
    printf("Adresse de s   : %p, Valeur : 0x%04x\n", (void *)p_s, (unsigned short)*p_s);
    printf("Adresse de i   : %p, Valeur : 0x%08x\n", (void *)p_i, (unsigned int)*p_i);
    printf("Adresse de li  : %p, Valeur : 0x%lx\n", (void *)p_li, (unsigned long)*p_li);
    printf("Adresse de lli : %p, Valeur : 0x%llx\n", (void *)p_lli, (unsigned long long)*p_lli);

    printf("Adresse de f   : %p, Valeur : 0x", (void *)p_f);
    afficher_hex((const unsigned char *)p_f, sizeof(float));
    printf("\n");

    printf("Adresse de d   : %p, Valeur : 0x", (void *)p_d);
    afficher_hex((const unsigned char *)p_d, sizeof(double));
    printf("\n");

    printf("Adresse de ld  : %p, Valeur : 0x", (void *)p_ld);
    afficher_hex((const unsigned char *)p_ld, sizeof(long double));
    printf("\n");

    return 0;
}
