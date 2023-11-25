#include <stdio.h>

int main() {
    int matriz[3][4];  
    int transposta[4][3];

    printf("Digite os elementos da matriz (3x4):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &matriz[i][j]);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            transposta[j][i] = matriz[i][j];

    printf("\nMatriz Transposta:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", transposta[i][j]);
        printf("\n");
    }

    return 0;
}