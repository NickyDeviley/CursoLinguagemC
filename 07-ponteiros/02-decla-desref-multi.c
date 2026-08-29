#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// O asterísco pode significar 3 coisas:
// 1. declaração de um ponteiro, por exemplo: float *p;
// 2. desreferenciamento de um ponteiro, por exemplo: *p = 10;
// 3. Multiplicação, por exemplo: x * y;

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {

    float a = 5.0f, b = 2.0;

    // 1. declaração de ponteiro
    float *pa = &a, *pb = &b;

    // 2. desreferenciamento e multiplicação
    float r1 = *pa * *pb;

    // 3. multiplicação
    float r2 = a * b;

    printf("\nr1: %f \nr2: %f \n", r1, r2);


    return 0;   // Padrão C
}

