#include <stdio.h>
#include <string.h>

void inverterString(char *str, int inicio, int fim) {
    if (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        inverterString(str, inicio + 1, fim - 1);
    }
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    inverterString(str, 0, strlen(str) - 1);

    printf("A string invertida é: %s\n", str);

    return 0;
}