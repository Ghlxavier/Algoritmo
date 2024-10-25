#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaPesoIdeal(float altura, char sexo) {
    if (sexo == 'M') {
        return (72.7 * altura) - 58;
    } else if (sexo == 'F') {
        return (62.1 * altura) - 44.7;
    }
    return 0;
}

int main() {
    float altura = 1.75;
    char sexo = 'M';
    float pesoIdeal = calculaPesoIdeal(altura, sexo);
    printf("Peso ideal: %.2f kg\n", pesoIdeal);

    return 0;
}

