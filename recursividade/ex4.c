#include <stdio.h>

int potencia(int base, int expoente) {
    if (expoente == 0)
        return 1;

    return base * potencia(base, expoente - 1);
}

int main() {
    int base;
    int expoente;

    printf("Insira a base: ");
    scanf("%i", &base);

    printf("Insira o expoente: ");
    scanf("%i", &expoente);

    printf("Resultado: %i\n", potencia(base, expoente));
}