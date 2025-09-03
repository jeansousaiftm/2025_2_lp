#include<stdio.h>

int main() {

    int h1, m1, h2, m2;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    if (h1 == h2 && m1 == m2) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        return 0;
    }

    int dif = 0;
    m1 += h1 * 60;
    m2 += h2 * 60;

    if (m1 < m2) {
        dif = m2 - m1;
    } else {
        dif = (1440 - m1) + m2;
    }

    int hf = dif / 60;
    int mf = dif % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);

    return 0;
}
