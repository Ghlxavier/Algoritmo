#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaMedia(float n1, float n2, float n3, char tipo) {
    if (tipo == 'A') {
        return (n1 + n2 + n3) / 3.0;
    } else if (tipo == 'P') {
        return (n1 * 5 + n2 * 3 + n3 * 2) / 10.0;
    }
    return 0;
}

int main() {
    float nota1 = 8.0, nota2 = 7.5, nota3 = 9.0;
    char letra = 'P';
    float media = calculaMedia(nota1, nota2, nota3, letra);
    printf("Média: %.2f\n", media);

    return 0;
}

