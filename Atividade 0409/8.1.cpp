#include<stdio.h>

main(){
	
	float salario, imposto;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	if(salario <= 2000){
		imposto = 0;
		printf("Isento de imposto.");
	} else if(salario < 4000){
		imposto = salario * 0.10;
		printf("O imposto a ser pago e: R$ %.2f\n", imposto);
	} else {
		imposto = salario * 0.20;
		printf("O imposto a ser pago e: R$ %.2f", imposto);
	}
	
	
	return 0;
}
