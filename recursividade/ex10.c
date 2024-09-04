#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float media(float VET[20], int i) {
    if (i == 20)
        return 0;
    return VET[i]/20.00 + media(VET, i + 1);
}

int main() {
    float VET[20];
    srand(time(NULL));

    printf("Vetor: \n");

    for (int i = 0; i < 20; i++) {
        VET[i] = rand() % 101;
        printf("%.0f ", VET[i]);
    }

    printf("\n");

    printf("O media do vetor é: %.2f\n", media(VET, 0));
}