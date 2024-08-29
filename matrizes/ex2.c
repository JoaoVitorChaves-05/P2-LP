#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findNumber(int m[20][20], int x) {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (m[i][j] == x) {
                printf("Encontrado na posição: %d, %d", i, j);
                return 1;
            }
        }
    }

    printf("Valor não encontrado");
    return 0;
}

int main() {
    int m[20][20];
    int x;

    printf("Insira o número para busca: ");
    scanf("%i", &x);

    findNumber(m, x);
}