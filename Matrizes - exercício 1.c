#include <stdio.h>

int main() {
    int mat[10][15];

    printf("Digite os elementos da matriz (10x15):\n");
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 15; j++)
            scanf("%d", &mat[i][j]);

    printf("\nSoma dos elementos de cada linha e paridade:\n");
    for (int i = 0; i < 10; i++) {
        int somaLinha = 0;
        for (int j = 0; j < 15; j++)
            somaLinha += mat[i][j];
        printf("Linha %d: Soma = %d, %s\n", i + 1, somaLinha, (somaLinha % 2 == 0) ? "Par" : "Ímpar");
    }

    printf("\nSoma dos elementos de cada coluna e paridade:\n");
    for (int j = 0; j < 15; j++) {
        int somaColuna = 0;
        for (int i = 0; i < 10; i++)
            somaColuna += mat[i][j];
        printf("Coluna %d: Soma = %d, %s\n", j + 1, somaColuna, (somaColuna % 2 == 0) ? "Par" : "Ímpar");
    }

    return 0;
}