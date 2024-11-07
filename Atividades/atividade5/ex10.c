#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
    int contMaior18 = 0;
    int contMenor18 = 0;

    printf("Digite a idade das pessoas (0 para sair):\n");

    while (1) {
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade == 0) {
            break; 
        }

        if (idade >= 18) {
            contMaior18++; 
        } else {
            contMenor18++;
        }
    }

    printf("Pessoas com 18 anos ou mais: %d\n", contMaior18);
    printf("Pessoas com menos de 18 anos: %d\n", contMenor18);

    return 0;
}
