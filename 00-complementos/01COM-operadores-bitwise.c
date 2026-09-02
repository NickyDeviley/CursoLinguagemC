#include <stdio.h>

int main(int argc, char *argv[]) {

    printf("%d\n", 15 & 17);        // AND                      
    printf("%d\n", 15 | 17);        // OR
    printf("%d\n", 15 ^ 17);        // XOR (só 1 é verdadeiro)
    printf("%d\n", ~31);            // COMPLEMENTO DE 1
    printf("%d\n", 15 >> 17);       // DESLOCAMENTO A DIREITA
    printf("%d\n", 15 << 17);       // DESLOCAMENTO A ESQUERDA


    /*
        15 AND 17: 
            01111 & 10001 = 00000001 = 1    (Compara se ambos são verdadeiros)

            01111
            10001
            -----
            00001

        15 OR 17:
            01111 | 10001 = 00011111 = 31   (Compara se pelo menos 1 é verdadeiro)

            01111
            10001
            -----
            11111

        15 XOR 17:
            00001111 ^ 00010001 = 00011110 = 30   (Compara se apenas 1 é verdadeiro)

            01111
            10001
            -----
            11110

        ~31 (Negação):
            00011111 = 11100000 = -32          (Inverte cada bit)

            00011111
            --------
            11100000

        15 >> 17 (deslocamento para direita):
            00010001 = 00000000 = 0                 (Move todos os bits 15 casas para a direita)

        15 << 17 (deslocamento para direita):
            00010001 = 00000000 00001000 10000000 00000000 = 1966080  (Move todos os bits 15 casas para a esquerda)
                       \_________________________________|
                        Isso aqui é um inteiro representado na memória
                        4 bytes reservados em sequência
    */


    return 0;
}