#include <stdio.h>

double soma(double a, double b) {
    return a + b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double subtracao(double a, double b) {
    return a - b;
}

double divisao(double a, double b) {
    if (b == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2;

    printf("Digite dois números para as operações:\n");
    printf("Número 1: "); scanf("%lf", &num1);
    printf("Número 2: "); scanf("%lf", &num2);

    printf("Soma: %.2lf\n", soma(num1, num2));
    printf("Multiplicação: %.2lf\n", multiplicacao(num1, num2));
    printf("Subtração: %.2lf\n", subtracao(num1, num2));
    printf("Divisão: %.2lf\n", divisao(num1, num2));

    return 0;
}