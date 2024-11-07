#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
    int somaPares = 0;
    int somaImpares = 0;

    printf("Digite n�meros inteiros positivos (n�mero negativo para sair):\n");

    while (1) {
        printf("N�mero: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break; 
        }

        if (numero % 2 == 0) {
            somaPares += numero; 
        } else {
            somaImpares += numero; 
        }
    }

    printf("Soma dos n�meros pares: %d\n", somaPares);
    printf("Soma dos n�meros �mpares: %d\n", somaImpares);

    return 0;
}
