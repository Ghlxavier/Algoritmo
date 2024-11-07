#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	int i = 0;
	printf("Números pares de 0 a 1000:\n");

    while (i <= 1000) {
        printf("%d\n", i);
        i += 2; 
    }

    return 0;
}
