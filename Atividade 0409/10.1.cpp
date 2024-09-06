#include<stdio.h>

int main (){
	
	float n1, n2, n3, media, ne;
	
	printf("Digite sua primeira nota: ");
	scanf("%f", n1);
	
	printf("Digite sua segunda nota: ");
	scanf("%f", n2);
	
	printf("Digite sua terceira nota: ");
	scanf("%f", n3);
	
	media = (n1 + n2 + n3) / 3;
	
	printf("Media Aritmetica: %.2f\n", media);
	
	if (media >= 7) {
        printf("Aprovado!\n");
    } else if (media >= 5 && media < 7) {
        printf("Exame!\n");

        ne = (6 * 2) - media;
        printf("Voce precisa tirar %.2f no exame para ser aprovado.\n", ne);
    } else {
        printf("Reprovado!\n");
    }

	
	
	return 0;
}
