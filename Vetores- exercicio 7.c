#include <stdio.h>

int saoIguais(int vetor1[], int vetor2[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor1[i] != vetor2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int tamanho;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int vetor1[tamanho];
    int vetor2[tamanho];

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    if (saoIguais(vetor1, vetor2, tamanho)) {
        printf("\nOs vetores possuem conteúdo igual.\n");
    } else {
        printf("\nOs vetores possuem conteúdo diferente.\n");
    }

    return 0;
}