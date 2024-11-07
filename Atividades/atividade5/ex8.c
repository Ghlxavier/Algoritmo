#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
    int somaPares = 0;
    int somaImpares = 0;

    printf("Digite números inteiros positivos (número negativo para sair):\n");

    while (1) {
        printf("Número: ");
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

    printf("Soma dos números pares: %d\n", somaPares);
    printf("Soma dos números ímpares: %d\n", somaImpares);

    return 0;
}
