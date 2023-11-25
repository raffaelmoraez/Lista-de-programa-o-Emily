#include <stdio.h>

int main() {
    int mat1[10][10], mat2[10][10], resultado[10][10];
    int linhas1, colunas1, linhas2, colunas2;

    printf("Digite as dimensões da primeira matriz (linhas e colunas): ");
    scanf("%d %d", &linhas1, &colunas1);

    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < linhas1; i++)
        for (int j = 0; j < colunas1; j++)
            scanf("%d", &mat1[i][j]);

    printf("Digite as dimensões da segunda matriz (linhas e colunas): ");
    scanf("%d %d", &linhas2, &colunas2);

    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < linhas2; i++)
        for (int j = 0; j < colunas2; j++)
            scanf("%d", &mat2[i][j]);

    if (colunas1 != linhas2) {
        printf("A multiplicação de matrizes não é possível.\n");
    } else {
        for (int i = 0; i < linhas1; i++)
            for (int j = 0; j < colunas2; j++) {
                resultado[i][j] = 0;
                for (int k = 0; k < colunas1; k++)
                    resultado[i][j] += mat1[i][k] * mat2[k][j];
            }

        printf("Resultado da multiplicação:\n");
        for (int i = 0; i < linhas1; i++) {
            for (int j = 0; j < colunas2; j++)
                printf("%d ", resultado[i][j]);
            printf("\n");
        }
    }

    return 0;
}