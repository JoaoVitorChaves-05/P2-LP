#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor1[10];
    int vetor2[10];
    int vetor3[20];

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        vetor1[i] = rand() % 101;
        printf("%d ", vetor1[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++) {
        vetor2[i] = rand() % 101;
        printf("%d ", vetor2[i]);
    }

    printf("\n");

    int k = 0;
    for (int aux = 0; aux < 10; aux++) {
        vetor3[k] = vetor1[aux];
        k++;
        vetor3[k] = vetor2[aux];
        k++;
    }

    printf("\nO vetor resultante com elementos intercalados é:\n");
    for(int i = 0; i < 20; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");
}