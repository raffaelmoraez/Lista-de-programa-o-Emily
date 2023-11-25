#include <stdio.h>

struct Horario {
    int hora;
    int minutos;
    int segundos;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    struct Data dataCompromisso;
    struct Horario horarioCompromisso;
    char texto[100];
};

int main() {
    struct Horario horarioExemplo = {12, 30, 0};
    struct Data dataExemplo = {25, 11, 2023};

    struct Compromisso compromissoExemplo = {
        .dataCompromisso = dataExemplo,
        .horarioCompromisso = horarioExemplo,
        .texto = "Reunião de Equipe"
    };

    printf("Compromisso:\n");
    printf("Data: %02d/%02d/%04d\n", compromissoExemplo.dataCompromisso.dia, compromissoExemplo.dataCompromisso.mes, compromissoExemplo.dataCompromisso.ano);
    printf("Horário: %02d:%02d:%02d\n", compromissoExemplo.horarioCompromisso.hora, compromissoExemplo.horarioCompromisso.minutos, compromissoExemplo.horarioCompromisso.segundos);
    printf("Descrição: %s\n", compromissoExemplo.texto);

    return 0;
}