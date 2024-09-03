#include <stdio.h>
#include <stdlib.h>

struct tempo {
    int horas;
    int minutos;
};

struct tempo converteTempo(int minutos) {
    int horas = minutos / 60;

    struct tempo Time;
    Time.horas = horas;
    Time.minutos = minutos % 60;

    return Time;
}

int main() {
    int min;
    printf("Insira o tempo em minutos: ");
    scanf("%i", &min);

    struct tempo Time = converteTempo(min);

    printf("Horas: %i\n", Time.horas);
    printf("Minutos: %i\n", Time.minutos);

}