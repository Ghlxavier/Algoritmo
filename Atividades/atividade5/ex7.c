#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
    int soma = 0;

    printf("Digite n�meros inteiros (0 para sair):\n");

    while (1) {
        printf("N�mero: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; 
        }

        soma += numero; 
    }

    printf("A soma dos n�meros digitados �: %d\n", soma);

    return 0;
}
