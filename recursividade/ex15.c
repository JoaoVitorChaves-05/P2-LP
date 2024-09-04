#include <stdio.h>
#include <string.h>

int inverteString(int i, char word[100], char wordInvertida[100]) {
    wordInvertida[i] = word[strlen(word) - 1 - i];
    if (i == strlen(word) - 1)
        return 0;
    return inverteString(i + 1, word, wordInvertida);
}

int main() {
    char word[100];
    char wordInvertida[100];

    printf("Insira uma palavra: ");
    fgets(word, sizeof(word), stdin);
    word[strlen(word) - 1] = '\0';

    inverteString(0, word, wordInvertida);
    
    for (int i = 0; i < strlen(wordInvertida); i++)
        printf("%c", wordInvertida[i]);
    printf("\n");
}