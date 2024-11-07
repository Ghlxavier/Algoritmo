#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
    int contador = 0;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero;
    }

    do {
        contador++;
        numero /= 10; 
    } while (numero != 0);

    printf("O n�mero possui %d d�gitos.\n", contador);

    return 0;
}
