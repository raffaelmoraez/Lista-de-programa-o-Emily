#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    char endereco[100];
    char telefone[20];
};

int compararStrings(const void *a, const void *b) {
    return strcmp(((struct Pessoa*)a)->nome, ((struct Pessoa*)b)->nome);
}

int main() {
    struct Pessoa pessoas[10];

    printf("Digite os dados de 10 pessoas:\n");
    for (int i = 0; i < 10; i++) {
        printf("\n%dª Pessoa:\n", i + 1);
        printf("Nome: ");
        scanf("%s", pessoas[i].nome);
        printf("Endereço: ");
        scanf("%s", pessoas[i].endereco);
        printf("Telefone: ");
        scanf("%s", pessoas[i].telefone);
    }

    qsort(pessoas, 10, sizeof(struct Pessoa), compararStrings);

    printf("\nPessoas em ordem alfabética:\n");
    for (int i = 0; i < 10; i++) {
        printf("\n%dª Pessoa:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Endereço: %s\n", pessoas[i].endereco);
        printf("Telefone: %s\n", pessoas[i].telefone);
    }

    return 0;
}
