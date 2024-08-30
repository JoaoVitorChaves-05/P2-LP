#include <stdio.h>
#include <string.h>

int findWord(char VET[5][100], char word[100]) {
    for (int i = 0; i < 5; i++) {
        if (strcmp(VET[i], word) == 0)
            return i;
    }

    return -1;
}

int main() {
    char VET[5][100] = {"casa", "carro", "gato", "cachorro", "televisao"};
    char word[100];

    printf("Insira uma palavra para buscar: ");
    fgets(word, sizeof(word), stdin);
    word[strlen(word) - 1] = '\0';

    int pos = findWord(VET, word);

    if (pos != -1) {
        printf("Palavra encontrada na posição %i.\n", pos);
    } else {
        printf("Palavra não encontrada.\n");
    }
}