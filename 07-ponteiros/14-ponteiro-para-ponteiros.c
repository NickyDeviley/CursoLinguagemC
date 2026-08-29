#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Ponteiros para ponteiros é quando nós criamos um ponteiro
        que armazena outro ponteiro. Dessa forma podemos
        desreferenciar duas vezes e trabalhar com o valor inicial.

    */

    int x = 10;             // Variável primitiva
    int *ponteiro1 = &x;    // Ponteiro 
    int **pp = &ponteiro1;  // Ponteiro para ponteiros

    printf("pp: %x\n", pp);         // Endereço do ponteiro1
    printf("*pp: %x\n", *pp);       // Endereço de x
    printf("**pp: %d\n", **pp);     // Valor armazenado em x

    return 0;   // Padrão C
}
