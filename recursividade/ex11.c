#include <stdio.h>

int potencia(int expoente) {
    if (expoente == 0)
        return 1;

    return 2 * potencia(expoente - 1);
}

int main() {
    int expoente;

    printf("Insira o expoente: ");
    scanf("%i", &expoente);

    printf("Resultado 2**%i: %i\n", expoente, potencia(expoente));
}