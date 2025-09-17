#include<stdio.h>

int main() {

    int n, t = 1, i;

    scanf("%d", &n);
    while (n > 0) {

        int j, z, s = 0;

        printf("Teste %d\n", t++);

        for (i = 0; i < n; i++) {
            scanf("%d %d", &j, &z);
            s += (j - z);
            printf("%d\n", s);
        }

        printf("\n");

        scanf("%d", &n);
    }

    return 0;
}
