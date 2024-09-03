#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int somaLinhas(int MAT[4][5]) {
    int somaLinhas[4];
    int soma = 0;

    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            soma += MAT[linha][coluna];
        }
        printf("Soma da linha %i: %i\n", linha, soma);
        somaLinhas[linha] = soma;
        soma = 0;
    }

    for (int linha = 0; linha < 4; linha++) {
        soma += somaLinhas[linha];
    }

    return soma;
}

int main() {
    int MAT[4][5];

    srand(time(NULL));

    printf("MATRIZ:\n");

    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            MAT[linha][coluna] = rand() % 101;
            printf("%i ", MAT[linha][coluna]);
        }
        printf("\n");
    }

    int total = somaLinhas(MAT);

    printf("TOTAL: %i\n", total);
}