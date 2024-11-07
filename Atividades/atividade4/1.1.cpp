#include <stdio.h>

int main(){
	
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	if (n>0){
		printf("Seu numero e positivo.\n");
	} else if (n<0){
		printf("Seu numero e negativo.\n");
	} else {
		printf("Seu numero e zero\n");
	}
	
	
	
	return 0;
}
