#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int matriz[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int somaLinhas[3];
    int i, j;

    for (i = 0; i < 3; i++) {
        somaLinhas[i] = 0;
        for (j = 0; j < 4; j++) {
            somaLinhas[i] += matriz[i][j];
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] *= somaLinhas[i];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

