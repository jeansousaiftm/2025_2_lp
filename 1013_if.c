#include<stdio.h>

int main() {

    int a, b, c, maior;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        maior = a;
    } else if (b > c) {
        maior = b;
    } else {
        maior = c;
    }

    //maior = (a > b && a > c) ? a : (b > c) ? b : c;

    printf("%d eh o maior\n", maior);

    return 0;
}
