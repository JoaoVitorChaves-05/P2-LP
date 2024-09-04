#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maiorValor(int VET[20], int maior, int i) {
    if (i == 20)
        return maior;
    else if (maior < VET[i])
        maior = VET[i];
    return maiorValor(VET, maior, i + 1);
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

    printf("O maior valor do vetor é: %i\n", maiorValor(VET, VET[0], 0));
}