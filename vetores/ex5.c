#include <stdio.h>

int main() {
    int nums[20];
    int pares[20];
    int impares[20];

    int nPares = 0;
    int nImpares = 0;

    for (int i = 0; i < 20; i++) {
        printf("Número %d: ", i);
        scanf("%d", &nums[i]);

        if (nums[i] % 2 == 0) {
            pares[i] = nums[i];
            nPares++;
        }
        else {
            impares[i] = nums[i];
            nImpares++;
        }
    }

    printf("Vetor total: \n");

    for (int i = 0; i < 20; i++)
        printf("%d ", nums[i]);

    printf("\n\n");

    printf("Vetor dos pares: \n");

    for (int j = 0; j < nPares; j++)
        printf("%d ", nums[j]);

    printf("\n\n");

    printf("Vetor dos ímpares: \n");

    for (int k = 0; k < nImpares; k++)
        printf("%d ", nums[k]);
    
    printf("\n\n");
}