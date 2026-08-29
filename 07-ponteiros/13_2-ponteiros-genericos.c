#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {

    int a = 2;
    float f = 2.0f;
    char c = 'c';

    void *pa = &a;
    printf("a = %d\n", *(int *)pa);

    pa = &f;
    printf("f = %.1f\n", *(float *)pa);

    pa = &c;
    printf("c = %c\n", *(char *)pa);

    return 0;   // Padrão C
}
