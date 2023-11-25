#include <stdio.h>

int main() {
    int matriz[4][4];
    int somaQuadradosPrimeiraColuna = 0;
    int somaTerceiraLinha = 0;
    int somaDiagonalPrincipal = 0;
    int somaElementosIndiceParSegundaLinha = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &matriz[i][j]);

    printf("\nMatriz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            printf("%d\t", matriz[i][j]);
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
        somaQuadradosPrimeiraColuna += matriz[i][0] * matriz[i][0];

    for (int j = 0; j < 4; j++)
        somaTerceiraLinha += matriz[2][j];

    for (int i = 0; i < 4; i++)
        somaDiagonalPrincipal += matriz[i][i];

    for (int j = 0; j < 4; j += 2)
        somaElementosIndiceParSegundaLinha += matriz[1][j];

    printf("\nResultado:\n");
    printf("b) Soma dos quadrados da primeira coluna: %d\n", somaQuadradosPrimeiraColuna);
    printf("c) Soma dos elementos da terceira linha: %d\n", somaTerceiraLinha);
    printf("d) Soma dos elementos da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("e) Soma dos elementos de índice par da segunda linha: %d\n", somaElementosIndiceParSegundaLinha);

    return 0;
}
