#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int somaElementos (int v[], int tam) {

    int soma = 0;
    while (--tam >= 0) {
        soma += v[tam];
    }
    return soma;

}

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {

    int numeros[5] = {1, 2, 3, 4, 5};
    printf("\nSoma: %d", somaElementos(numeros, 5));

    return 0;   // Padrão C
}

