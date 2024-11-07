#include <stdio.h>

int main(){

	int n, valor, i, j;
	
	printf("Digite quantos valores inteiros positivos deseja inserir: ");
	scanf("%d", &n);
	
	for(int i = 1; i<=n; i++){
		printf("Digite um valor inteiro positivo: ");
		scanf("%d", &valor);
		int fatorial = 1;
		
		for(j=1;j<=valor;j++){
				fatorial *=j;
			}
			
			printf("Valor: %d | Fatorial: %d\n", valor, fatorial);
		
	}
	

	
		
	return 0;
}

