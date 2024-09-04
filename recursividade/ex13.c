#include <stdio.h>

int ordemDecrescente(int n) {
    if (n == 0) {
        printf("%i ", n);
        return n;
    }
    printf("%i ", n);
    return ordemDecrescente(n - 1);
}

int main() {
    int n;
    printf("Insira um número: ");
    scanf("%i", &n);

    ordemDecrescente(n);
    printf("\n");
}