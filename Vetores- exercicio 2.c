#include <stdio.h>

int main() {
    int tamanho_vetor = 10;
    float vetor_original[tamanho_vetor];
    float vetor_inverso[tamanho_vetor];

    printf("Digite os 10 elementos do vetor:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetor_original[i]);
    }

    for (int i = 0; i < tamanho_vetor; i++) {
        vetor_inverso[i] = vetor_original[tamanho_vetor - 1 - i];
    }

    printf("\nVetor original:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%.2f ", vetor_original[i]);
    }

    printf("\nVetor inverso:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%.2f ", vetor_inverso[i]);
    }

    return 0;
}