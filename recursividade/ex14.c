#include <stdio.h>
#include <string.h>

int checkPalindrome(int i, char string[100], char stringInvertida[100]) {
    if (string[i] != stringInvertida[i])
        return 0;
    if (i + 1 == strlen(string))
        return 1;
    return checkPalindrome(i + 1, string, stringInvertida);
}

int main() {
    char string[100];
    printf("Insira uma palavra: ");
    fgets(string, sizeof(string), stdin);
    string[strlen(string) - 1] = '\0';

    char stringInvertida[100];
    int count = 0;
    for (int i = strlen(string) - 1; i >= 0; i--) {
        stringInvertida[count] = string[i];
        count++;
    }

    if (strlen(string) == strlen(stringInvertida)) {
        int isPalindrome = checkPalindrome(0, string, stringInvertida);
        if (isPalindrome)
            printf("É palíndromo\n");
        else
            printf("Não é palíndromo\n");
    } else
        printf("Não é palíndromo!\n");
}