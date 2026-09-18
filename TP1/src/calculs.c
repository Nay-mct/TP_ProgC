#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 5;
    char op = '&';

    switch (op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Erreur : division par zéro impossible.\n");
            } else {
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            }
            break;
        case '%':
            if (num2 == 0) {
                printf("Erreur : modulo par zéro impossible.\n");
            } else {
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            }
            break;
        case '&':
            printf("%d & %d = %d\n", num1, num2, num1 & num2);
            break;
        case '|':
            printf("%d | %d = %d\n", num1, num2, num1 | num2);
            break;
        case '~':
            /* Opérateur unaire : appliqué sur num1 */
            printf("~%d = %d\n", num1, ~num1);
            break;
        default:
            printf("Opérateur '%c' non reconnu.\n", op);
            break;
    }

    return 0;
}

