#include<stdio.h>

int main() {

    int f, i, x, t = 1;

    scanf("%d", &f);

    while (f > 0) {

        printf("Teste %d\n", t++);

        for (i = 1; i <= f; i++) {
            scanf("%d", &x);
            if (x == i) {
                printf("%d\n\n", x);
            }
        }

        scanf("%d", &f);
    }

    return 0;
}


