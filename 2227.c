#include<stdio.h>

int main() {

    int a, v, i, x, y, t = 1;
    scanf("%d %d", &a, &v);

    while (a > 0 && v > 0) {
        int q[a + 1];
        for (i = 0; i <= a; i++) {
            q[i] = 0;
        }
        for (i = 0; i < v; i++) {
            scanf("%d %d", &x, &y);
            q[x]++;
            q[y]++;
        }
        int maior = 0;
        for (i = 0; i <= a; i++) {
            if (q[i] > maior) {
                maior = q[i];
            }
        }

        printf("Teste %d\n", t++);

        for (i = 0; i <= a; i++) {
            if (q[i] == maior) {
                printf("%d ", i);
            }
        }

        printf("\n\n");

        scanf("%d %d", &a, &v);
    }

    return 0;
}