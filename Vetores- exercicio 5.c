#include <stdio.h>

int main() {
    int tamanho_vetor = 20;
    int vetor1[tamanho_vetor];
    int vetor2[tamanho_vetor];
    int vetor_diferenca[tamanho_vetor];
    int vetor_soma[tamanho_vetor];
    int vetor_multiplicacao[tamanho_vetor];

    printf("Digite os 20 números inteiros do primeiro vetor:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os 20 números inteiros do segundo vetor:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < tamanho_vetor; i++) {
        vetor_diferenca[i] = vetor1[i] - vetor2[i];
        vetor_soma[i] = vetor1[i] + vetor2[i];
        vetor_multiplicacao[i] = vetor1[i] * vetor2[i];
    }

    printf("\nVetor Diferença:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetor_diferenca[i]);
    }

    printf("\nVetor Soma:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetor_soma[i]);
    }

    printf("\nVetor Multiplicação:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetor_multiplicacao[i]);
    }

    return 0;
}