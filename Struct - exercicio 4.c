#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {
    struct Pessoa pessoa;

    printf("Digite o nome: ");
    scanf("%s", pessoa.nome);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite o endereço: ");
    scanf("%s", pessoa.endereco);

    printf("\nDados Armazenados:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereço: %s\n", pessoa.endereco);

    return 0;
}