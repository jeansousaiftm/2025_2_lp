#include<stdio.h>
#include<math.h>

int main() {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int maior = (a + b + fabs(a - b)) / 2;
    maior = (maior + c + fabs(maior - c)) / 2;

    printf("%d eh o maior\n", maior);

    return 0;
}
