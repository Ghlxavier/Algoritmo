//ex2

#include<stdio.h>

	int main(){
	
	
	int notas[5] {1, 4, 5, 6, 7};
	float media;
	
	for(int i = 0; i < 5; i++){
		media += notas[i];


	}
	
	printf("A media das notas e: %.1f\n", media/5);
	
	return 0;
}
