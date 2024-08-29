#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int m[6][6];
    int qtdMaior10;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            m[i][j] = rand() % 101;
            if (m[i][j] > 10) {
                printf("%i é maior que 10.\n", m[i][j]);
                qtdMaior10++;
            }
        }
    }

    printf("Quantidade de elementos maiores que 10: %d", qtdMaior10);
}