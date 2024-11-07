#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int numeroGerado, palpite;
    
    srand(time(0));
    
    numeroGerado = rand() % 10 + 1;

    printf("Bem-vindo ao jogo de adivinha��o!\n");
    printf("Tente adivinhar o n�mero entre 1 e 10:\n");

   
    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite < numeroGerado) {
            printf("O n�mero � maior. Tente novamente.\n");
        } else if (palpite > numeroGerado) {
            printf("O n�mero � menor. Tente novamente.\n");
        } else {
            printf("Parab�ns! Voc� adivinhou o n�mero!\n");
        }
    } while (palpite != numeroGerado);

    return 0;
}
