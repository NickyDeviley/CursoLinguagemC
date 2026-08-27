#include <stdio.h>

void main () {
    /*
        Identifica se o número é ímpar ou par, e se for -1 ele finaliza o programa.
    */

    int entrada, verifica = 1;
    do {
        printf("Digite um número inteiro: \n");
        scanf(" %d", &entrada);

        if (entrada % 2 == 0)
            printf("O número eh par\n");
        else
            printf("O número eh ímpar\n");

        printf("Gostaria de digitar um novo número?\n"
               "1 = inserir novo número\n"
               "-1 = encerrar programa\n");
        
        scanf(" %d", &verifica);

    } while (verifica != -1);


}