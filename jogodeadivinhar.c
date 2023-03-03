#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int aleatorio, palpite, tentativas = 0;

    srand(time(NULL));
    aleatorio = rand() % 100 + 1;

    printf("Tente adivinhar em qual numero de 1 a 100 eu estou pensando\n\n");

    do
    {
        printf("%d\n\n", aleatorio);
        printf("digite um numero: ");

        scanf("%d", &palpite);
        tentativas++;

    }
while(palpite != aleatorio);
printf("\nvoce acertou em %d tentativas, parabens!\n\n", tentativas);
return 0;
}

