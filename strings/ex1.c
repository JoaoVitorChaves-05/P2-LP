#include <stdio.h>
#include <string.h>

void isPalindrome(char word[100]) {
    char wordInvertida[100];
    int pos = 0;
    for (int i = strlen(word) - 1; i > -1; i--) {
        wordInvertida[pos] = word[i];
        pos++;
    }

    if (strcmp(word, wordInvertida) == 0)
        printf("%s é palíndromo.\n", word);
    else
        printf("%s não é palíndromo.\n", word);
}

int main() {
    char word[100];

    printf("Insira uma palavra: ");
    fgets(word, sizeof(word), stdin);
    word[strlen(word) - 1] = '\0';

    isPalindrome(word);
}