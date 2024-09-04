#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma(int VET[20], int i) {
    if (i == 20)
        return 0;
    return VET[i] + soma(VET, i + 1);
}

int main() {
    int VET[20];
    srand(time(NULL));

    printf("Vetor: \n");

    for (int i = 0; i < 20; i++) {
        VET[i] = rand() % 101;
        printf("%i ", VET[i]);
    }

    printf("\n");

    printf("O soma do vetor é: %i\n", soma(VET, 0));
} 