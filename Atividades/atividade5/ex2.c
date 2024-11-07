#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
    int numero, i = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Tabuada de %d:\n", numero);
    while (i <= 10) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++; 
    }
    return 0;
}
