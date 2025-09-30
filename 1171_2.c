#include<stdio.h>

int main() {

    int n, i, j;
    scanf("%d", &n);

    int v[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for (i = 1; i <= 2000; i++) {
        int contagem = 0;
        for (j = 0; j < n; j++) {
            if (v[j] == i) {
                contagem++;
            }
        }
        if (contagem > 0) {
            printf("%d aparece %d vez(es)\n", i, contagem);
        }
    }


    return 0;
}
