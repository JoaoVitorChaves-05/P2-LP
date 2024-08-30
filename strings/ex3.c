#include <stdio.h>
#include <string.h>

int isVogal(char letter) {
    char vogais[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    
    for (int j = 0; j < 10; j++) {
        if (letter == vogais[j] || letter == ' ')
            return 1;
    }

    return 0;
}

int contaConsoantes(char string[100]) {
    int count = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (!isVogal(string[i])) {
            count++;
        }
    }

    return count;
}

int main() {
    char string[100];
    printf("Insira uma frase: ");
    fgets(string, sizeof(string), stdin);
    string[strlen(string) - 1] = '\0';

    int nConsoantes = contaConsoantes(string);
    printf("Quantidade de consoantes: %i\n", nConsoantes);
}