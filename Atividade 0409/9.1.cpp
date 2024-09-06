#include<stdio.h>

int main (){
	
	float nt, as, ef, media;
	
	printf("Digite sua nota do Trabalho de Laboratorio: ");
	scanf("%f", nt);
	
	printf("Digite sua nota da Avaliacao Semestral: ");
	scanf("%f", as);
	
	printf("Digite sua nota do Exame Final: ");
	scanf("%f", ef);
	
	media = (nt * 2 + as * 3 + ef * 5) / 10;
	
	printf("Media Ponderada: %.2f\n", media);
	
	if (media >= 8 && media <= 10) {
        printf("Conceito: A\n");
    } else if (media >= 7 && media < 8) {
        printf("Conceito: B\n");
    } else if (media >= 6 && media < 7) {
        printf("Conceito: C\n");
    } else if (media >= 5 && media < 6) {
        printf("Conceito: D\n");
    } else {
        printf("Conceito: E\n");
    }
		
	
	return 0;
}
