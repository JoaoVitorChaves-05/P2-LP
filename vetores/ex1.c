#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findNumber(int n, int nums[20]) {
    int count = 0;

    for (int i = 0; i < 20; i++) {
        if (n == nums[i])
            count++;
    }

    return count;
}

int main() {
    int nums[20];
    srand(time(NULL));

    for (int i = 0; i < 20; i++) {
        nums[i] = rand() % 101;
        printf("%d ", nums[i]);
    }

    printf("\n");

    int n;
    printf("INSIRA UM NÚMERO ENTRE 0 e 100 PARA BUSCAR: ");
    scanf("%d", &n);

    int count = findNumber(n, nums);

    if (count)
        printf("O número %d apareceu %d vezes!\n", n, count);
    else
        printf("O número %d nao apareceu nenhuma vez!\n", n);
}