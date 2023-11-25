#include <stdio.h>

int main() {
    float matriz[50][50];
    float vetor[50];

    printf("Digite os elementos da matriz (50x50):\n");
    for (int i = 0; i < 50; i++)
        for (int j = 0; j < 50; j++)
            scanf("%f", &matriz[i][j]);

    for (int i = 0; i < 50; i++)
        vetor[i] = matriz[i][i];

    printf("\nConteúdo da diagonal principal no vetor:\n");
    for (int i = 0; i < 50; i++)
        printf("%.2f ", vetor[i]);

    return 0;
}