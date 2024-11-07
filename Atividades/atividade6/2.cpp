#include<stdio.h>

int main(){
	
	int n, p=4, s=1;
	
	printf("Digite o numero de termos da serie: ");
	scanf("%d", &n);
	
	for(int i = 1; i<=n;i++){
		printf("%d ", (i % 3 == 1) * s + (i % 3 != 1) * p);
	p += (i % 3 == 0);
	s += ( i % 3 ==0);	
	}

	
	return 0;
}
