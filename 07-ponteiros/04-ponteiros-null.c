#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {

    float *x, *y = NULL;
    printf("\n X = %x, Y = %x\n, x, y");
    printf("%d", *x);   // Causa erro, pois ele não tem um endereço salvo.

    return 0;   // Padrão C
}

