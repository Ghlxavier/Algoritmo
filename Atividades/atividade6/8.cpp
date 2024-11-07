#include<stdio.h>

int main(){
	
	int n, soma, termos;
	
	printf("Digite o numero de termos: ");
	scanf("%d", termos);
	
	for (int i = 1; i<=n; i++){
		n = n *10 +1;
		soma += n;
		printf("%d", n);
	}
	
	printf("\nSoma da seeriee: %d\n", soma);

	
	return 0;
}
