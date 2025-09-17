#include<stdio.h>

int main() {

    int op, a = 0, g = 0, d = 0;

    do {

        scanf("%d", &op);

        switch (op) {
        case 1:
            a++;
            break;
        case 2:
            g++;
            break;
        case 3:
            d++;
            break;
        };

    } while (op != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);

    return 0;
}
