#include<stdio.h>
#include<string.h>

int main() {

    /*char nome1[100] = { "Abacate" },
        nome2[100] = { "Abacaxi" };*/

    char nome1[100], nome2[100];

    scanf("%[^\n]%*c", nome1);
    scanf("%[^\n]%*c", nome2);
    //printf("%s\n%d\n", nome, strlen(nome));
    printf("%d\n", strcmp(nome1, nome2));

    strcpy(nome1, nome2);

    return 0;
}
