#include <stdio.h>
#include <stdlib.h>

struct DATA {
    int dia;
    int mes;
    int ano;
};

int calculaTempo(struct DATA date1, struct DATA date2) {
    int diasTotais1 = date1.ano * 365 + ((date1.mes * 30) - 30) + date1.dia;
    int diasTotais2 = date2.ano * 365 + ((date2.mes * 30) - 30) + date2.dia;

    return abs(diasTotais1 - diasTotais2);
}

int main() {
    struct DATA date1;
    struct DATA date2;

    struct DATA dates[2];

    for (int i = 0; i < 2; i++) {
        printf("Data %i:\n", i);

        printf("Dia: ");
        scanf("%i", &dates[i].dia);

        while (dates[i].dia < 1 || dates[i].dia > 30) {
            printf("Insira um dia entre 1 e 30.");
            printf("Dia: ");
            scanf("%i", &dates[i].dia);
        }

        printf("Mês: ");
        scanf("%i", &dates[i].mes);

        while (dates[i].mes < 1 || dates[i].mes > 12) {
            printf("Insira um mes entre 1 e 12.");
            printf("Mes: ");
            scanf("%i", &dates[i].dia);
        }

        printf("Ano: ");
        scanf("%i", &dates[i].ano);

        while (dates[i].ano <= 0) {
            printf("Insira um ano maior que 0.\n");
            printf("Mes: ");
            scanf("%i", &dates[i].dia);
        }
    }

    int tempo = calculaTempo(dates[0], dates[1]);
    printf("A diferença de dias é: %i.\n", tempo);
}