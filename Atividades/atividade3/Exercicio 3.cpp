#include <stdio.h>
#include <stdlib.h>

int main() {
    int base, expoente;
    long long resultado = 1;

    // Entrada dos valores
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    // Cálculo da potência usando um loop
    for(int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    // Exibição do resultado
    printf("%d elevado a %d: %lld\n", base, expoente, resultado);

    return 0;
}

