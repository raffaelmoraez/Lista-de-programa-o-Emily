#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    char curso[50];
};

int main() {
    struct Aluno alunos[5];

    printf("Digite as informações de 5 alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("\n%dº Aluno:\n", i + 1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Número de Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Curso: ");
        scanf("%s", alunos[i].curso);
    }

    printf("\nDados Armazenados:\n");
    for (int i = 0; i < 5; i++) {
        printf("\n%dº Aluno:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Número de Matrícula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
    }

    return 0;
}