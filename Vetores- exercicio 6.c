#include <stdio.h>

void organizarNumeros(int *vetor, int tamanho) {
    int temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tamanho;
    printf("Digite a quantidade de números inteiros: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite os números inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    organizarNumeros(vetor, tamanho);

    printf("\nVetor organizado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}