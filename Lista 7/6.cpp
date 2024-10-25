#include <stdio.h>
#include <stdlib.h>
#include <math.h>

converteSegundos(int totalSegundos, int *horas, int *minutos, int *segundos) {
    *horas = totalSegundos / 3600;
    *minutos = (totalSegundos % 3600) / 60;
    *segundos = totalSegundos % 60;
}

int main() {
    int totalSegundos = 312311;
    int horas, minutos, segundos;

    converteSegundos(totalSegundos, &horas, &minutos, &segundos);

    printf("%d horas, %d minutos, %d segundos\n", horas, minutos, segundos);

    return 0;
}
