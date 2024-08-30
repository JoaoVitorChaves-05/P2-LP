#include <stdio.h>
#include <string.h>

int string_compare(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char string1[100];
    char string2[100];

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);
    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);

    if (string1[strlen(string1) - 1] == '\n') {
        string1[strlen(string1) - 1] = '\0';
    }
    if (string2[strlen(string2) - 1] == '\n') {
        string2[strlen(string2) - 1] = '\0';
    }

    int result = string_compare(string1, string2);

    if (result == 1) {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }

    return 0;
}