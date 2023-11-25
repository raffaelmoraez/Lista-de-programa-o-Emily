##include <stdio.h>
#include <math.h>

int main() {
    int numeroLados;
    double medidaLado, area;

    printf("Digite o número de lados do polígono: ");
    scanf("%d", &numeroLados);

    if (numeroLados == 3) {
        printf("TRIÂNGULO\n");
        printf("Digite a medida do lado (em cm): ");
        scanf("%lf", &medidaLado);

        area = (medidaLado * medidaLado * sqrt(3)) / 4;

        printf("Área: %.2lf cm²\n", area);
    } else if (numeroLados == 4) {
        printf("QUADRADO\n");
        printf("Digite a medida do lado (em cm): ");
        scanf("%lf", &medidaLado);

        area = medidaLado * medidaLado;

        printf("Área: %.2lf cm²\n", area);
    } else if (numeroLados == 5) {
        printf("PENTÁGONO\n");
    } else {
        printf("Polígono não reconhecido\n");
    }

    return 0;
}