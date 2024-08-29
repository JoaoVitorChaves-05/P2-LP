#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menorValor(int nums[], int n) {
    int menor = nums[0];

    for (int i = 0; i < n; i++) {
        if (menor > nums[i])
            menor = nums[i];
    }

    return menor;
}

int main() {
    int nums[20];
    srand(time(NULL));


    for (int i = 0; i < 20; i++) {
        nums[i] = rand() % 101;
        printf("%d ", nums[i]);
    }

    printf("\n");

    printf("Menor valor: %d\n", menorValor(nums, 20));
}