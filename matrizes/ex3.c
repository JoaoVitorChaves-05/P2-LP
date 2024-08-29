#include <stdio.h>

int main() {
    int m[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            m[i][j] = 0;
        }
    }

    for (int k = 0; k < 5; k++)
        m[k][k] = 1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%i ", m[i][j]);
        }
        printf("\n");
    }
}