#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    system("cls || clear");

    int aleatorio, palpite, tentativas = 0;

    srand(time(NULL));
    aleatorio = rand() % 100 + 1;

    printf("Tente adivinhar em qual numero de 1 a 100 eu estou pensando\n\n");

    do {
        printf("Digite um numero: ");

        int i = scanf("%d", &palpite);

        if (i != 1) {
			fflush(stdin);
            system("cls || clear");
            printf("So funciona com numeros.\n\n");
            continue;
        }

        tentativas++;
        system("cls || clear");

        if (palpite < aleatorio)
            printf("Estou pensando em um numero maior.\n\n");
        else if (palpite > aleatorio)
            printf("O numero que estou pensando e menor que esse.\n\n");
        else
            printf("\t%d!! Isso mesmo, voce acertou em %d tentativas, parabens!\n\n", aleatorio, tentativas);
    }
    while(palpite != aleatorio);
    return 0;
}

