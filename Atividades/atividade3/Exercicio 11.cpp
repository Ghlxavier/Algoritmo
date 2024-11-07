#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float v1, v2, v3, alpha, ewma1, ewma2, ewma3;
	
	printf("Digite o primeiro valor: \n");
	scanf("%f", &v1);
	printf("Digite o segundo valor: \n");
	scanf("%f", &v2);
	printf("Digite o terceiro valor: \n");
	scanf("%f", &v3);
	printf("Digite o valor do coeficiente de suavizavao: \n");
	scanf("%f", &alpha);
	
	
	ewma1 = v1;
	ewma2 = alpha * v2 + (1 - alpha) * ewma1;
	ewma3 = alpha * v3 + (1 - alpha) * ewma2;
	 
	 
	printf("A media ponderada exponencial e: %.1f\n", ewma3);
	 
	 
	 
	return 0;
	
}
