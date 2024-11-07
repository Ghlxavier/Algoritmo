#include<stdio.h>

int main(){
	
	int anoAtual, ano, i;
	double salario = 1000.0, aumento = 1.5, acumulado = 1000.0;
	
	printf("Informe o ano atual: ");
	scanf("%d", &anoAtual);
	
	for(ano = 2019; i = 1; ano<= anoAtual; ano++, i++){
		acumulado += salario * aumento / 100;
		aumento *=2;
	}
	
	printf("Percentual acumulado de aumento doi igual a %.2f%%")
	
	return 0;
}
