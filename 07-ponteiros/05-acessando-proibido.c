#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Apontando para quem não devia

        Ao acessar conteudo do endereço NULL o programa interrompe
        Ao acessar conteudo que não deveriamos
            1. O programa pode acessar (endereço de memória válido, sorte ou azar?)
            2. O programa pode interromper, informando erro ou não
    */

    int a;
    int *pa = &a;

    for (int i = 0; i < 5; i++) {
        printf("INDICE I: %d\n", i);
        printf("Endereço salvo em pa: %x\n", pa);
        printf("Conteudo do endereço salvo em pa: %d\n", *pa);
        pa = pa - 100;
    }

    return 0;   // Padrão C
}

