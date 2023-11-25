#include <stdio.h>

int main() {
    int mat1[10][10], mat2[10][10], resultado[10][10];
    int linhas, colunas;

    printf("Digite as dimensões das matrizes (linhas e colunas): ");
    scanf("%d %d", &linhas, &colunas);

    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            scanf("%d", &mat1[i][j]);

    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            scanf("%d", &mat2[i][j]);

    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            resultado[i][j] = mat1[i][j] + mat2[i][j];

    printf("\nMatriz Resultante (Soma):\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++)
            printf("%d ", resultado[i][j]);
        printf("\n");
    }

    return 0;
}
