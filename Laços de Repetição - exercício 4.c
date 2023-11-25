#include <stdio.h>

int main() {
    int contadorNegativos = 0;
    int valor;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);

        if (valor < 0) {
            contadorNegativos++;
        }
    }

    printf("Quantidade de valores negativos: %d\n", contadorNegativos);

    return 0;
}