#include<stdio.h>
#define TAM 2001

int main() {

    int v[TAM], i, n, x;

    for (i = 0; i < TAM; i++) {
        v[i] = 0;
    }
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        v[x]++;
    }

    for (i = 0; i < TAM; i++) {
        if (v[i] > 0) {
            printf("%d aparece %d vez(es)\n", i, v[i]);
        }
    }

    return 0;
}
