#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maiorValor(int nums[], int n) {
    int maior = nums[0];

    for (int i = 0; i < n; i++) {
        if (maior < nums[i])
            maior = nums[i];
    }

    return maior;
}

int main() {
    int nums[20];
    srand(time(NULL));


    for (int i = 0; i < 20; i++) {
        nums[i] = rand() % 101;
        printf("%d ", nums[i]);
    }

    printf("\n");

    printf("Maior valor: %d\n", maiorValor(nums, 20));
}