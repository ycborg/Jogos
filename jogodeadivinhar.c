#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int aleatorio, palpite, tentativas = 0;

    srand(time(NULL));
    aleatorio = rand() % 100 + 1;

    printf("Tente adivinhar em qual numero de 1 a 100 eu estou pensando\n\n");

    do {
        printf("digite um numero: ");

        scanf("%d", &palpite);
        tentativas++;
        system("clear");

        if(palpite < aleatorio) {
            printf("\nestou pensando em um numero maior\n\n");
        } else if(palpite > aleatorio) {
            printf("\no numero que estou pensando e menor que esse\n\n");
        } else {
            printf("\n%d!! isso mesmo, voce acertou em %d tentativas, parabens!\n\n", aleatorio, tentativas);
        }
    }
    while(palpite != aleatorio);
    return 0;
}

