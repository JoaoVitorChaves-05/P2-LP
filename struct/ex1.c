#include <stdio.h>
#include <string.h>

struct aluno
{
    char nome[30];
    int RA;
    int frequencia;
    float notas[3];
    float media;
};

void imprimeMenu();
int insereAluno(struct aluno[], int);
void imprimeTurma(struct aluno[], int);
int buscaRA(struct aluno[], int, int);
int removeAluno(struct aluno[], int);
void consultaAluno(struct aluno[], int);

int main()
{
    struct aluno turmaLP[50];
    int opcao = 0;
    int n = 0;

    do
    {
        imprimeMenu();
        printf("\nOpção: ");
        scanf("%i", &opcao);
        switch (opcao)
        {
        case 1:
            // Inserir aluno
            if (insereAluno(turmaLP, n))
                n++;
            else
                printf("Não foi possível inserir aluno.\n");
            break;
        case 2:
            // Remover aluno
            if (removeAluno(turmaLP, n))
                n--;
            else
                printf("Aluno não encontrado.\n");
            break;
        case 3:
            // Imprimir turma
            imprimeTurma(turmaLP, n);
            break;
        case 4:
            // Consultar dados aluno
            consultaAluno(turmaLP, n);
            break;
        case 5:
            // Sair
            printf("\nAté logo!\n");
            break;
        default:
            printf("\nOpção inválida.\n");
        }
    } while (opcao != 5);
}

void imprimeMenu()
{
    printf("\n\nMenu:");
    printf("\n1 - Incluir aluno.");
    printf("\n2 - Remover aluno.");
    printf("\n3 - Imprime turma.");
    printf("\n4 - Consulta dados aluno.");
    printf("\n5 - Sair");
}

int insereAluno(struct aluno turmaLP[], int n)
{
    int soma;
    int RA;
    if (n == 50) {
        printf("\nTurma cheia.\n");
        return 0;
    }
    printf("RA: ");
    scanf("%i", &RA);
    if (buscaRA(turmaLP, n, RA) != -1) {
        printf("\nRA já existente.\n");
        return 0;
    }
    while (getchar() != '\n'); // Limpar buffer

    printf("Nome: ");
    gets(turmaLP[n].nome);
    turmaLP[n].RA = RA;
    printf("Frequencia: ");
    scanf("%i", &turmaLP[n].frequencia);
    soma = 0;
    for (int i = 0; i < 3; i++) {
        printf("Nota %i: ", i + 1);
        scanf("%f", &turmaLP[n].notas[i]);
        soma += turmaLP[n].notas[i];
    }
    turmaLP[n].media = soma / 3.0;
    return 1;
}

void imprimeTurma(struct aluno turmaLP[], int n)
{
    printf("\n\nTurma LP:");
    for (int i = 0; i < n; i++) {
        printf("\n\nAluno %i:", i + 1);
        printf("\nNome: %s", turmaLP[i].nome);
        printf("\nRA: %i", turmaLP[i].RA);
        printf("\nFrequencia: %i", turmaLP[i].frequencia);
        for (int j = 0; j < 3; j++)
            printf("\nNota %i: %.2f", j + 1, turmaLP[i].notas[j]);
        printf("\nMédia: %.2f", turmaLP[i].media);
    }
}

int buscaRA(struct aluno turmaLP[], int n, int RA)
{
    for (int i = 0; i < n; i++)
    {
        if (turmaLP[i].RA == RA)
            return i;
    }
    return -1; // Retorna -1 se o RA não for encontrado
}

int removeAluno(struct aluno turmaLP[], int n)
{
    int RA, index;
    printf("RA do aluno a ser removido: ");
    scanf("%i", &RA);
    index = buscaRA(turmaLP, n, RA);
    if (index == -1)
        return 0; // Aluno não encontrado

    for (int i = index; i < n - 1; i++) {
        turmaLP[i] = turmaLP[i + 1];
    }
    return 1; // Aluno removido com sucesso
}

void consultaAluno(struct aluno turmaLP[], int n)
{
    int RA, index;
    printf("RA do aluno a ser consultado: ");
    scanf("%i", &RA);
    index = buscaRA(turmaLP, n, RA);
    if (index == -1) {
        printf("Aluno não encontrado.\n");
        return;
    }

    printf("\nNome: %s", turmaLP[index].nome);
    printf("\nRA: %i", turmaLP[index].RA);
    printf("\nFrequencia: %i", turmaLP[index].frequencia);
    for (int j = 0; j < 3; j++)
        printf("\nNota %i: %.2f", j + 1, turmaLP[index].notas[j]);
    printf("\nMédia: %.2f\n", turmaLP[index].media);
}