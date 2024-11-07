//ex3
#include<stdio.h>

	int main(){
	
	
	int n[5] {1, 4, 5, 6, 7};
	int n1[5] {4 , 4, 56, 6, 7};
	int n2[5];
	
		printf("A soma e: ");
		printf("{");
	
	for(int i = 0; i < 5; i++){
	n2[i] = n[i] + n1[i];


	printf(" %d ", n2[i]);

	}
	
		printf("}");
	
	return 0;
}
