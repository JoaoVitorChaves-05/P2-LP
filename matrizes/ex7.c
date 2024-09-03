#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void somaMatrizes(int MAT1[3][5], int MAT2[3][5]) {
    int MAT3[3][5];

    printf("MATRIZ SOMADA:\n");

    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            MAT3[linha][coluna] = MAT1[linha][coluna] + MAT2[linha][coluna];
            printf("%i ", MAT3[linha][coluna]);
        }
        printf("\n");
    }
}

int main() {
    int MAT1[3][5];
    int MAT2[3][5];

    srand(time(NULL));

    printf("MATRIZ 1:\n");

    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            MAT1[linha][coluna] = rand() % 101;
            printf("%i ", MAT1[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n");

    printf("MATRIZ 2:\n");

    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            MAT2[linha][coluna] = rand() % 101;
            printf("%i ", MAT2[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n");

    somaMatrizes(MAT1, MAT2);
}