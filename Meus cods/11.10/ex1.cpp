#include<stdio.h>

int main(){
	
	// notas = vetor | [5] = tamanho do vetor | {Valores dos vetores}
	
	int notas[5] = {5, 4, 3};
	
	//notas[0] = 5;
	//notas[1] = 4;
	//notas[2] = 3;
	
	
	
	//printf("v1: %.1f", notas[2]);
	
	
	for(int i=0;i<3;i++){
		printf("Valor: %d\n", i+1 , notas [i]);
	}
	
	
	return 0;
}
