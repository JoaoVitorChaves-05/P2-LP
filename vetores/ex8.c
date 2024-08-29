#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int somaElementos(int nums[20], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++)
        soma += nums[i];

    return soma;
}

float mediaElementos(int nums[], int n) {
    int soma = somaElementos(nums, n);
    return soma / n;
}

int qtdElementos(int nums[], int n) {
    float media = mediaElementos(nums, n);
    int qtd = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] > media)
            qtd++;
    }

    return qtd;
}

int main() {
    int nums[20];
    srand(time(NULL));


    for (int i = 0; i < 20; i++) {
        nums[i] = rand() % 101;
        printf("%d ", nums[i]);
    }

    printf("\n");

    printf("Soma dos elementos: %d\n", somaElementos(nums, 20));
    printf("Média dos elementos: %.2f\n", mediaElementos(nums, 20));
    printf("Quantos elementos estão acima da média: %d\n", qtdElementos(nums, 20));
}