#include <stdio.h>
#include <stdlib.h>

#define Pi 3.14

int main() {
	
	double c;
	int r;

	
	printf("Digite o raio de um circulo: ");
	scanf("%d", &r);
	
	//caluclo
	
	c = 2*Pi*r;


	printf("A circunferencia do circulo e: %.2f\n", c);

	return 0;
	
}
