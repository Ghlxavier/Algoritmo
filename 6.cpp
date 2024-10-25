#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int segundosTotais = 3665;
    int horas, minutos, segundos;

    horas = segundosTotais / 3600;
    minutos = (segundosTotais % 3600) / 60;
    segundos = segundosTotais % 60;

    printf("%d horas, %d minutos, %d segundos\n", horas, minutos, segundos);

    return 0;
}

