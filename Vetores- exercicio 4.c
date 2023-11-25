#include <stdio.h>
#include <string.h>

int main() {
    int tamanho_vetor = 10;
    char vetor_nomes[tamanho_vetor][50];

    printf("Digite os 10 nomes de pessoas:\n");
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("Nome %d: ", i + 1);
        scanf("%s", vetor_nomes[i]);
    }

    char nome_digitado[50];
    printf("Digite um nome qualquer de pessoa: ");
    scanf("%s", nome_digitado);

    int encontrado = 0;
    for (int i = 0; i < tamanho_vetor; i++) {
        if (strcmp(nome_digitado, vetor_nomes[i]) == 0) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("ACHEI\n");
    } else {
        printf("NÃO ACHEI\n");
    }

    return 0;
}