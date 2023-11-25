#include <stdio.h>

int main() {
    int opcao;

    printf("Bem-vindo ao sistema do hotel!\n");
    printf("Escolha uma opção:\n");
    printf("1. Fazer Check-in\n");
    printf("2. Chamar serviço de quarto\n");
    printf("3. Fazer pedido\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: {
            char nome[50], cpf[15], telefone[15], cidade[50], estado[3];
            printf("Informe seu nome: ");
            scanf("%s", nome);
            printf("Informe seu CPF: ");
            scanf("%s", cpf);
            printf("Informe seu telefone: ");
            scanf("%s", telefone);
            printf("Informe sua cidade: ");
            scanf("%s", cidade);
            printf("Informe seu estado: ");
            scanf("%s", estado);
            printf("Check-in concluído para %s!\n", nome);
        } break;

        case 2: {
            char nome[50];
            int numeroQuarto;
            printf("Informe seu nome: ");
            scanf("%s", nome);
            printf("Informe o número do quarto: ");
            scanf("%d", &numeroQuarto);
            printf("Serviço de quarto chamado por %s para o quarto %d!\n", nome, numeroQuarto);
        } break;

        case 3: {
            int opcaoPedido;
            printf("Escolha uma opção de pedido:\n");
            printf("1. Comida\n");
            printf("2. Bebida\n");
            printf("3. Finalizar pedido\n");
            scanf("%d", &opcaoPedido);

            switch (opcaoPedido) {
                case 1:
                    printf("Pedido de comida realizado!\n");
                    break;

                case 2:
                    printf("Pedido de bebida realizado!\n");
                    break;

                case 3:
                    printf("Pedido finalizado!\n");
                    break;

                default:
                    printf("Opção inválida!\n");
                    break;
            }
        } break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}