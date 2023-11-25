#include <stdio.h>

int main() {
    int codigoVoto;
    int votosCandidato[4] = {0};
    int votosNulos = 0, votosBranco = 0;

    printf("Digite o código do candidato (ou 0 para encerrar): ");

    while (1) {
        scanf("%d", &codigoVoto);

        if (codigoVoto == 0) {
            break;
        } else if (codigoVoto >= 1 && codigoVoto <= 4) {
            votosCandidato[codigoVoto - 1]++;
        } else if (codigoVoto == 5) {
            votosNulos++;
        } else if (codigoVoto == 6) {
            votosBranco++;
        } else {
            printf("Código de voto inválido. Tente novamente.\n");
            continue;
        }

        printf("Digite o próximo código do candidato (ou 0 para encerrar): ");
    }

    printf("\nResultados da eleição:\n");
    for (int i = 0; i < 4; i++) {
        printf("Candidato %d: %d votos\n", i + 1, votosCandidato[i]);
    }
    printf("Votos nulos: %d\n", votosNulos);
    printf("Votos em branco: %d\n", votosBranco);

    return 0;
}