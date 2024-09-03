#include <stdio.h>

struct data {
    int dia;
    int mes;
    int ano;
};

struct data fim_evento(struct data datainicio, int duracao) {
    struct data datafim = datainicio;

    datafim.dia += duracao;

    while (datafim.dia > 30) {
        datafim.dia -= 30;
        datafim.mes++;

        if (datafim.mes > 12) {
            datafim.mes = 1;
            datafim.ano++;
        }
    }

    return datafim;
}

int main() {
    struct data inicio;
    int duracao = 5;

    printf("Dia de início: ");
    scanf("%i", &inicio.dia);

    while (inicio.dia <= 0 || inicio.dia > 30) {
        printf("Insira um dia entre 1 e 30.\n");
        printf("Dia de início: ");
        scanf("%i", &inicio.dia);
    }

    printf("Mes de início: ");
    scanf("%i", &inicio.mes);

    while (inicio.mes <= 0 || inicio.mes > 12) {
        printf("Insira um mes entre 1 e 30.\n");
        printf("Mes de início: ");
        scanf("%i", &inicio.mes);
    }

    printf("Ano de início: ");
    scanf("%i", &inicio.ano);

    while (inicio.ano < 0) {
        printf("Insira um ano maior ou igual a 0.\n");
        printf("Ano de início: ");
        scanf("%i", &inicio.ano);
    }

    printf("Duração em dias: ");
    scanf("%i", &duracao);

    while (duracao <= 0) {
        printf("Insira um período maior que 0.\n");
        printf("Duração em dias: ");
        scanf("%i", &duracao);
    }

    struct data fim = fim_evento(inicio, duracao);
    printf("Data de término: %02d/%02d/%d\n", fim.dia, fim.mes, fim.ano);

    return 0;
}
