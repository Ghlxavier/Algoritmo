#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int numeroGerado, palpite;
    
    srand(time(0));
    
    numeroGerado = rand() % 10 + 1;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número entre 1 e 10:\n");

   
    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite < numeroGerado) {
            printf("O número é maior. Tente novamente.\n");
        } else if (palpite > numeroGerado) {
            printf("O número é menor. Tente novamente.\n");
        } else {
            printf("Parabéns! Você adivinhou o número!\n");
        }
    } while (palpite != numeroGerado);

    return 0;
}
