#include <stdio.h>

void showBinary(int n) {
    if (n > 1) {
        showBinary(n / 2);
    }
    printf("%d", n % 2); 
}

int main() {
    int numero;

    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    printf("Representação binária de %d: ", numero);
    showBinary(numero);
    printf("\n");

    return 0;
}
