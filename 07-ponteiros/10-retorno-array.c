#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *obterArray () {

    static int v[5];
    for (int i = 0; i < 5; i++) {
        v[i] = i;
    }
    return v;

}

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {

    int *array = obterArray();

    for (int i = 0; i < 5; i++) {
        printf("%d", array[i]);
    }

    return 0;   // Padrão C
}

