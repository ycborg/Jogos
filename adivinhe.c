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

        system("cls || clear");

        if (i != 1) {
			fflush(stdin);
            printf("So funciona com numeros.\n\n");
            continue;
        } else if (palpite < 1 || palpite > 100) {
            printf("Pensei em um numero entre 1 e 100.\n\n");
            continue;
        }
        tentativas++;

        if (palpite < aleatorio)
            printf("Estou pensando em um numero maior.\n\n");
        else if (palpite > aleatorio)
            printf("O numero que estou pensando e menor que esse.\n\n");
        else
            printf("\t%d Isso mesmo!! Voce acertou em %d tentativas, parabens!\n\n", aleatorio, tentativas);
    }
    while(palpite != aleatorio);
    return 0;
}

