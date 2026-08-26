#include <stdio.h>

void main () {
    /*
        O operador Ternário é uma forma de simplificar o if/else, porém
        com a desvantagem de que ele possuí o retorno mais simples.

        sua sintaxe é:

        condição ? valor_se_verdadeiro : valor_se_falso
    */

    int x, y, maior;
    printf("Digite dois números inteiros: ");
    scanf(" %d %d", &x, &y);
    maior = (x > y) ? x : y;    // Se X for maior que Y, o maior é X, caso contrário, o maior é Y
    printf("O maior número é: %d\n", maior);
}