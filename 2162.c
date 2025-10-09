#include<stdio.h>

int main() {

    int n, i, pico = 0, vale = 0, resposta = 1;
    scanf("%d", &n);
    int v[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }  

    if (v[0] > v[1]) {
        vale = 1;
    } else if (v[0] < v[1]) {
        pico = 1;
    } else {
        resposta = 0;
    }

    for (i = 2; i < n; i++) {
        if (v[i] > v[i - 1] && vale == 1) {
            vale = 0;
            pico = 1;
        } else if (v[i] < v[i - 1] && pico == 1) {
            vale = 1;
            pico = 0;
        } else {
            resposta = 0;
        }
    }

    printf("%d\n", resposta);
 
    return 0;
}