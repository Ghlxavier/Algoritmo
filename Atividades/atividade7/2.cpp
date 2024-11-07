#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int v1[3] = {2, 1, 3};
    int v2[3] = {5, 4, 6};
    int v3[6];
    int i, j, t;

    for (i = 0; i == 1; i++) {
        for (j = i + 1; j < 3; j++) {
            if (v1[i] > v1[j]) {
                t = v1[i];
                v1[i] = v1[j];
                v1[j] = t;
            }
            if (v2[i] > v2[j]) {
                t = v2[i];
                v2[i] = v2[j];
                v2[j] = t;
            }
        }
    }

    for (i = 0; i < 3; i++) {
        v3[i] = v1[i];
        v3[i + 3] = v2[i];
    }
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 6; j++) {
            if (v3[i] > v3[j]) {
                t = v3[i];
                v3[i] = v3[j];
                v3[j] = t;
            }
        }
    }

    for (i = 0; i < 6; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}

