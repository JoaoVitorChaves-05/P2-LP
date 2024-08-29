#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void findNumber(int m[20][20], int x) {
    int find = 0;

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (m[i][j] == x) {
                printf("Encontrado na posição: %d, %d", i, j);
                find = 1;
            }
        }
    }

    if (!find)
        printf("Número não encontrado.");
}

int main() {
    int m[20][20];
    int x;

    printf("Insira o número para busca: ");
    scanf("%i", &x);

    findNumber(m, x);
}