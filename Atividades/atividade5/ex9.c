#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;

    while (1) {
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        
        printf("Digite o segundo número: ");
        scanf("%d", &num2);

        if (num1 == num2) {
            printf("Os números são iguais. Programa encerrado.\n");
            break; 
        }

        if (num1 > num2) {
            printf("O maior número é: %d\n", num1);
        } else {
            printf("O maior número é: %d\n", num2);
        }
    }

    return 0;
}
