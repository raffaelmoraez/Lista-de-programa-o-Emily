#include <stdio.h>

int contarDigitos(int numero) {
    if (numero < 10) {
        return 1;
    } else {
        return 1 + contarDigitos(numero / 10);
    }
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    int numeroDigitos = contarDigitos(numero);

    printf("O número digitado possui %d dígito(s).\n", numeroDigitos);

    return 0;
}