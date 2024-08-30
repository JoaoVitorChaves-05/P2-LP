#include <stdio.h>

int string_length(char str[]) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    if (string[string_length(string) - 1] == '\n') {
        string[string_length(string) - 1] = '\0';
    }

    int length = string_length(string);
    printf("O comprimento da string eh: %d\n", length);

    return 0;
}