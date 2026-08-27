#include <stdio.h>

void main () {

    // Maneiras de incializar um array, lembrando que inicializar é
    // atribuir um valor a um espaço que nós já temos na memória.

    // maneira 1 (Manual):
    int a[4];
    a[0] = 1;
    a[1] = 4;
    a[2] = 9;
    a[3] = 16;

    // maneira 2 (inicializar ao instanciar):
    int b[] = {1, 4, 9, 16};

    // maneira 3 (utilizando laço)
    int c[4];
    for (int i = 1; i <= 4; i++) {
        c[i - 1] = i * i;
    }

    // Imprimir
    for (int i = 0; i < 4; i++) {
        printf("Array posicao %d valor: %d", i, a[i]);
    }



}