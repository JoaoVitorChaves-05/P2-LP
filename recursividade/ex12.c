#include <stdio.h>

int ordemCrescente(int n, int i) {
    if (i == n) {
        printf("%i ", i);
        return i;
    }
    printf("%i ", i);
    return ordemCrescente(n, i + 1);
}

int main() {
    int n;
    printf("Insira um número: ");
    scanf("%i", &n);

    ordemCrescente(n, 0);
    printf("\n");
}