#include<stdio.h>
#define NUM_ALUNOS 25

int main() {
    int alunosPresentes;
    scanf("%d", &alunosPresentes);

    if (alunosPresentes > NUM_ALUNOS / 2.0) {
        printf("Mais da metade da turma veio.\n");
    } else {
        printf("Mais da metade da turma faltou.\n");
    }


    return 0;
}
