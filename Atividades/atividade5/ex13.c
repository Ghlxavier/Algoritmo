#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	const int senhaCorreta = 5060;
    int senhaInserida;
    int tentativas = 0;
    const int maxTentativas = 5;

    printf("Digite a senha num�rica (4 d�gitos):\n");

    while (tentativas < maxTentativas) {
        printf("Tentativa %d: ", tentativas + 1);
        scanf("%d", &senhaInserida);

        if (senhaInserida == senhaCorreta) {
            printf("Senha correta! Acesso permitido.\n");
            return 0; 
        } else {
            printf("Senha incorreta. Tente novamente.\n");
            tentativas++;
        }
    }

    printf("N�mero m�ximo de tentativas atingido. Programa encerrado.\n");
    return 0; 
}
