#include <stdio.h>
#include <string.h>

int isVogal(char letter) {
    char vogals[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < 10; i++) {
        if (letter == vogals[i])
            return 1;
    }

    return 0;
}

int main() {
    char letters[10];
    int nConsoantes;

    printf("Insira até 10 caracteres: ");
    fgets(letters, sizeof(letters), stdin);
    letters[strlen(letters)] = '\0';

    for (int i = 0; i < strlen(letters); i++) {
        if (!isVogal(letters[i])) {
            nConsoantes++;
            printf("%c ", letters[i]);
        }
    }
    printf("\n");
}