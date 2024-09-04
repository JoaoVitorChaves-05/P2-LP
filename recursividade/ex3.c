#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void showFibonacci(int n, int index) {
    if (index <= n) {
        printf("%i ", fibonacci(index));
        showFibonacci(n, index+1);
    }
}

int main() {
    int n;
    printf("Insira qual termo de fibonacci quer ver: ");
    scanf("%i", &n);

    printf("Sequência de fibonacci até o termo %i: \n", n);
    showFibonacci(n, 1);

    printf("\n");
}