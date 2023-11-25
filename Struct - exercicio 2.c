#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    int codigoDisciplina;
    float nota1, nota2;
};

int main() {
    struct Aluno alunos[10];
    int numAlunos;

    printf("Digite o número de alunos (até 10): ");
    scanf("%d", &numAlunos);

    if (numAlunos > 10) {
        printf("O número de alunos deve ser no máximo 10.\n");
        return 1;
    }

    for (int i = 0; i < numAlunos; i++) {
        printf("\n%dº Aluno:\n", i + 1);
        printf("Matrícula: "); scanf("%d", &alunos[i].matricula);
        printf("Nome: "); scanf("%s", alunos[i].nome);
        printf("Código da Disciplina: "); scanf("%d", &alunos[i].codigoDisciplina);
        printf("Nota1: "); scanf("%f", &alunos[i].nota1);
        printf("Nota2: "); scanf("%f", &alunos[i].nota2);
    }

    printf("\nListagem Final dos Alunos:\n");
    for (int i = 0; i < numAlunos; i++) {
        float mediaFinal = (alunos[i].nota1 + 2 * alunos[i].nota2) / 3.0;
        printf("\n%dº Aluno:\nMatrícula: %d\nNome: %s\nCódigo da Disciplina: %d\nNota1: %.2f\nNota2: %.2f\nMédia Final: %.2f\n",
               i + 1, alunos[i].matricula, alunos[i].nome, alunos[i].codigoDisciplina, alunos[i].nota1, alunos[i].nota2, mediaFinal);
    }

    return 0;
}