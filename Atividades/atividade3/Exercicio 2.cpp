#include <stdio.h>
#include <stdlib.h>

main(){
	
	double a, b;
	float resultado_soma, resultado_sub, resultado_mult, resultado_div;
	
	printf("Digite o valor de a:\n", a);
	scanf("%lf", &a);
	printf("Digite o valor de b:\n", b);
	scanf("%lf", &b);
	
	//calculos
	
	resultado_soma = a + b;
	resultado_sub = a - b;
	resultado_mult = a * b;
	resultado_div = a / b;
	
	printf("O resultado da soma: %.2f\n", resultado_soma);
	printf("O resultado da subtracao: %.2f\n", resultado_sub);
	printf("O resultado da multiplicacao: %.2f\n", resultado_mult);
	printf("O resultado da divisao: %.2f\n", resultado_div);	
	
	
	return 0;
}
