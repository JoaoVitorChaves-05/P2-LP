#include <stdio.h>
#include <string.h>

int contaVogal(char string[100]) {
    int count = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == 'a' || string[i] == 'A')
            count++;
        else if (string[i] == 'e' || string[i] == 'E')
            count++;
        else if (string[i] == 'i' || string[i] == 'I')
            count++;
        else if (string[i] == 'o' || string[i] == 'O')
            count++;
        else if (string[i] == 'u' || string[i] == 'U')
            count++;
    }

    return count;
}

int main() {
    char string[100];
    printf("Insira uma frase: ");
    fgets(string, sizeof(string), stdin);
    string[strlen(string) - 1] = '\0';

    int nVogais = contaVogal(string);
    printf("Quantidade de vogais: %i\n", nVogais);
}