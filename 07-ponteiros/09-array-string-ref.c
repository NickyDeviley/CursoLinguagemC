#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int tamanho (char str[]) {

    int tam = 0;
    while (str[tam] != '\n') {
        tam++;
    }
    return tam;

}

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {

    char nm[50] = "Nicholas Milanin";
    printf("\n%s possui %d caracteres.\n", nm, tamanho(nm));

    return 0;   // Padrão C
}

