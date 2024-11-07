#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int v1[5] {1, 2, 3, 4, 5};
	int v2[5] {6, 7, 8, 9, 10};
	int a;
	
	printf("Antes da troca: \n");
	for(int i = 0; i < 5; i++){
		printf("%d ", v1[i]);
	}
	    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        a = v1[i];
        v1[i] = v2[i];
        v2[i] = a;
    }

    printf("Depois da troca:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");
    
	return 0;
}
