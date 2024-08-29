#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nums[100];
    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        nums[i] = rand() % 101;
        printf("%d ", nums[i]);
    }

    printf("\n");

    int nPar;
    int nImpar;

    for (int j = 0; j < 100; j++) {
        if (nums[j] % 2 == 0)
            nPar++;
        else
            nImpar++;
    }

    printf("Quantidade de números pares: %i\n", nPar);
    printf("Quantidade de números ímpares: %i\n", nImpar);
}