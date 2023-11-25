##include <stdio.h>

int main() {
    int tamanho_vetor = 12;
    int vetor_original[tamanho_vetor];
    float vetor_modificado[tamanho_vetor];

    printf("Digite os 12 elementos do vetor:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor_original[i]);
    }

    for (int i = 0; i < tamanho_vetor; i++) {
        if (i % 2 == 0) {
            vetor_modificado[i] = vetor_original[i] / 2.0;
        } else {
            vetor_modificado[i] = vetor_original[i] * 3.0;
        }
    }

    printf("\nVetor original:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d ", vetor_original[i]);
    }

    printf("\nVetor modificado:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%.2f ", vetor_modificado[i]);
    }

    return 0;
}