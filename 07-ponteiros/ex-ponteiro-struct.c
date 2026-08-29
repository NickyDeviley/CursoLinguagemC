#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct arrayTam {

    int *ar;
    int tam;

} aTam;

aTam obterArray () {

    aTam ar;
    static int array[10];
    ar.ar = array;
    ar.tam = 10;
    return ar;

}

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Ponteiros para ponteiros


    */

    aTam ar = obterArray();
    aTam ar2 = obterArray();

    for (int i = 0; i < ar.tam; i++) {

        printf("ar.ar[%d]: %d\n", i, ar.ar[i]);
        printf("ar.ar[%d]: %d\n", i, *(ar.ar + i));

    }

    return 0;   // Padrão C
}
