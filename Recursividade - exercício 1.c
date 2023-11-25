#include <stdio.h>

unsigned long long int calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    int numero;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro: Fatorial não está definido para números negativos.\n");
        return 1;
    }

    unsigned long long int resultado = calcularFatorial(numero);

    printf("O fatorial de %d é: %llu\n", numero, resultado);

    return 0;
}