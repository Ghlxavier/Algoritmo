#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float v1, v2, v3;
    float p1, p2, p3;
    float m;
    
    printf("Digite um valor X: \n");
    scanf("%f", &v1);
    printf("Agora digite o peso de X: \n");
    scanf("%f", &p1);
    printf("Digite um valor Y: \n");
    scanf("%f", &v2);
    printf("Agora digite o peso de Y: \n");
    scanf("%f", &p2);
    printf("Digite um valor Z: \n");
    scanf("%f", &v3);
    printf("Agora digite o peso de Z: \n");
    scanf("%f", &p3);
    
    m = (v1*p1 + v2*p2 + v3*p3) / p1 * p2 * p3;
    
    printf("A media ponderada entre X, Y e Z seria: %.2f", m);


	return 0;
	
}
