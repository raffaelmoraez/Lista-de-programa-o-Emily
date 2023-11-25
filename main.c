#include <stdio.h>

int main() {
    int tamanho_vetor = 15;
    int vetor[tamanho_vetor];

    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Digite o %do número inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor armazenado:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}