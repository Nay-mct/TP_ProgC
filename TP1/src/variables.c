#include <stdio.h>

int main() {
    /* Types entiers : signes et non signes */
    signed char sc = 'A';
    unsigned char uc = 250;

    signed short ss = -1234;
    unsigned short us = 56789;

    signed int si = -42000;
    unsigned int ui = 84000U;

    signed long int sli = -1234567890L;
    unsigned long int uli = 1234567890UL;

    signed long long int slli = -9876543210123LL;
    unsigned long long int ulli = 9876543210123ULL;

    /* Types a virgule flottante */
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887L;

    /* Affichage des valeurs */
    printf("signed char          : %c (code ASCII: %d)\n", sc, sc);
    printf("unsigned char        : %u\n", uc);

    printf("signed short         : %hd\n", ss);
    printf("unsigned short       : %hu\n", us);

    printf("signed int           : %d\n", si);
    printf("unsigned int         : %u\n", ui);

    printf("signed long int      : %ld\n", sli);
    printf("unsigned long int    : %lu\n", uli);

    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int: %llu\n", ulli);

    printf("float                : %.2f\n", f);
    printf("double               : %.9f\n", d);
    printf("long double          : %.10Lf\n", ld);

    return 0;
}
