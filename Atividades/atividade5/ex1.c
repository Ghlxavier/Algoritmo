#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() 
{
	setlocale(LC_ALL, "Portuguese");
    int numero, i = 1;
	int fatorial = 1;

    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, insira um n�mero inteiro positivo.\n");
    } else {
        while (i <= numero) {
            fatorial *= i;
            i++; 
        }
        printf("O fatorial de %d � %d.\n", numero, fatorial);
    }

    return 0;
}
