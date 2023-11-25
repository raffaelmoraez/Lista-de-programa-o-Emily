#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    float notaProva1, notaProva2, notaProva3, mediaGeral;
};

int main() {
    struct Aluno alunos[5];

    printf("Digite as informações de 5 alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("\n%dº Aluno:\n", i + 1);
        printf("Matrícula: "); scanf("%d", &alunos[i].matricula);
        printf("Nome: "); scanf("%s", alunos[i].nome);
        printf("Nota Prova 1: "); scanf("%f", &alunos[i].notaProva1);
        printf("Nota Prova 2: "); scanf("%f", &alunos[i].notaProva2);
        printf("Nota Prova 3: "); scanf("%f", &alunos[i].notaProva3);
        alunos[i].mediaGeral = (alunos[i].notaProva1 + alunos[i].notaProva2 + alunos[i].notaProva3) / 3.0;
    }

    int indMaiorNotaProva1 = 0, indMaiorMediaGeral = 0, indMenorMediaGeral = 0;
    for (int i = 1; i < 5; i++) {
        if (alunos[i].notaProva1 > alunos[indMaiorNotaProva1].notaProva1) indMaiorNotaProva1 = i;
        if (alunos[i].mediaGeral > alunos[indMaiorMediaGeral].mediaGeral) indMaiorMediaGeral = i;
        if (alunos[i].mediaGeral < alunos[indMenorMediaGeral].mediaGeral) indMenorMediaGeral = i;
    }

    printf("\nAluno com maior nota na Prova 1:\nNome: %s, Nota: %.2f\n", alunos[indMaiorNotaProva1].nome, alunos[indMaiorNotaProva1].notaProva1);
    printf("\nAluno com maior média geral:\nNome: %s, Média: %.2f\n", alunos[indMaiorMediaGeral].nome, alunos[indMaiorMediaGeral].mediaGeral);
    printf("\nAluno com menor média geral:\nNome: %s, Média: %.2f\n", alunos[indMenorMediaGeral].nome, alunos[indMenorMediaGeral].mediaGeral);

    printf("\nSituação de Aprovação/Reprovação:\n");
    for (int i = 0; i < 5; i++) printf("%s: %s\n", alunos[i].nome, (alunos[i].mediaGeral >= 6.0) ? "Aprovado" : "Reprovado");

    return 0;
}