#include <stdio.h>
#include <stdlib.h>
#define PRECO_KWh 0.50


int main() {
	
	float KWh, valor;
	
	printf("Digite a quantidade de KWh consumidos: ");
	scanf("%f", &KWh);
	
	valor = KWh * PRECO_KWh;
	
	
	printf("O valor da conta de energia e: R$ %.3f", valor);
	
	
	


	return 0;
	
}
