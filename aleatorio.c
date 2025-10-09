#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 10
int main() {
    srand(time(NULL));
    int v[TAM], i, j;
    for (i = 0; i < TAM; i++) {
        v[i] = rand() % 100;
    } 
    for (i = 0; i < TAM; i++) {
        printf("X[%d] = %d\n", i, v[i]);
    }
    return 0;
}