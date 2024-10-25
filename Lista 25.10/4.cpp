#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float matriz[4][4] = {{12.5, 7.2, 9.1, 14.3}, {5.4, 3.2, 11.6, 8.7}, {9.8, 4.3, 6.9, 2.5}, {3.9, 8.4, 10.7, 5.6}};
    float min = matriz[0][0];
    int minLinha, minColuna ;
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] < min) {
                min = matriz[i][j];
                minLinha = i;
                minColuna = j;
            }
        }
    }

    float max = matriz[minLinha][0];
    for (j = 1; j < 4; j++) {
        if (matriz[minLinha][j] > max) {
            max = matriz[minLinha][j];
        }
    }

    printf("MINMAX: %.2f (linha %d, coluna %d)\n", max, minLinha, minColuna);

    return 0;
}

