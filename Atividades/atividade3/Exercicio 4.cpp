#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main() {
    char origem[100], destino[100];
    
    printf("Digite uma string: ");
    fgets(origem, sizeof(origem), stdin);  // Lê a string com espaçamentos
    
    strcpy(destino, origem);  // Copia a string
    
    printf("String copiada: %s", destino);
    
    
    return 0;
}

