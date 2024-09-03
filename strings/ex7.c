#include <stdio.h>
#include <string.h>

void inverteString(char str1[100], char str2[100]) {
    int count = 0;

    for (int i = strlen(str1) - 1; i >= 0; i--) {
        str2[count] = str1[i];
        printf("%c", str2[count]);
        count++;
    }

    printf("\n");
}

int main() {
    char str1[100];
    char str2[100];

    printf("Insira uma string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = '\0';

    inverteString(str1, str2);
}