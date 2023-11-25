#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;

    do {
        printf("Digite um número inteiro positivo (digite um negativo para encerrar): ");
        scanf("%d", &numero);

        if (numero >= 0) {
            soma += numero;
            contador++;
        }
    } while (numero >= 0);

    if (contador > 0) {
        double media = (double)soma / contador;
        printf("A média dos números é: %.2lf\n", media);
    } else {
        printf("Nenhum número positivo foi digitado.\n");
    }

    return 0;
}