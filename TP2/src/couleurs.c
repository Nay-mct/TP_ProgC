#include <stdio.h>

#define NB_COULEURS 10

/* Structure représentant une couleur RGBA sur 1 octet par composante */
struct Couleur {
    unsigned char rouge;
    unsigned char vert;
    unsigned char bleu;
    unsigned char alpha;
};

int main() {
    /* Initialisation de 10 couleurs en notation hexadécimale */
    struct Couleur palette[NB_COULEURS] = {
        {0xef, 0x78, 0x12, 0xff}, /* Couleur 1  */
        {0x2c, 0xc8, 0x64, 0xff}, /* Couleur 2  */
        {0xff, 0x00, 0x00, 0xff}, /* Rouge pur  */
        {0x00, 0xff, 0x00, 0xff}, /* Vert pur   */
        {0x00, 0x00, 0xff, 0xff}, /* Bleu pur   */
        {0xff, 0xff, 0x00, 0x80}, /* Jaune semi-transparent */
        {0x00, 0xff, 0xff, 0xff}, /* Cyan       */
        {0xff, 0x00, 0xff, 0xff}, /* Magenta    */
        {0x80, 0x80, 0x80, 0xff}, /* Gris       */
        {0x00, 0x00, 0x00, 0x00}  /* Transparent complet */
    };

    /* Affichage des composantes */
    for (int i = 0; i < NB_COULEURS; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %u\n", palette[i].rouge);
        printf("Vert : %u\n", palette[i].vert);
        printf("Bleu : %u\n", palette[i].bleu);
        printf("Alpha : %u\n\n", palette[i].alpha);
    }

    return 0;
}
