#include <stdio.h>

int somaN(int n) {
    if (n == 1)
        return n;
    return n + somaN(n-1);
}

int main() {
    int n;
    printf("Insira um número: ");
    scanf("%i", &n);

    int soma = somaN(n);
    printf("Soma de 1 até %i: %i\n", n, soma);
}