#include <stdio.h>

void main () {
    /*
        Identifica se o número é ímpar ou par, e se for -1 ele finaliza o programa.
    */

    int entrada, verifica = 1;
    do {
        printf("Gostaria de digitar um novo número?\n"
        "1 = inserir novo número\n"
        "-1 = encerrar programa\n");
        
        scanf(" %d", &verifica);
        
        if (verifica == -1) {
            break;
        }
        
        printf("Digite um número inteiro: \n");
        scanf(" %d", &entrada);

        if (entrada % 2 == 0)
            printf("O número eh par\n");
        else
            printf("O número eh ímpar\n");


    } while (verifica != -1);


    // Verifica se o número é ímpar ou par enquanto ele for positivo,
    // e interrompe a execução caso o número digitado seja negativo.

    int entrada2;
    do {
        printf("\nDigite um número inteiro positivo para ver se eh par ou ímpar: \n"
               "ou um número negativo para sair do programa: ");
        scanf(" %d", &entrada2);
        
        if (entrada == -1)
            break;
        if (entrada < 0)
            continue;
        if (entrada % 2 == 0)
            prinf("\n%d eh ímpar\n", entrada2);

    } while (1);

    /*
        O comando Break funciona em apenas 4 mecanismos:

        SWITCH;
        while;
        do-while;
        for.

        O break interrompe as estruturas a cima, existe
        uma segunda instrução. O CONTINUE pula a execução
        das estruturas iterativas e pula para a próxima
        iteração.
    */

}