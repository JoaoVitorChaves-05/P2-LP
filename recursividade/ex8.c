#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menorValor(int VET[20], int menor, int i) {
    if (i == 20)
        return menor;
    else if (menor > VET[i])
        menor = VET[i];
    return menorValor(VET, menor, i + 1);
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

    printf("O menor valor do vetor é: %i\n", menorValor(VET, VET[0], 0));
}