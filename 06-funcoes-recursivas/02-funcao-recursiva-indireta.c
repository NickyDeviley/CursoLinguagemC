#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void functionA(int);
void functionB(int);    // prototipagem da função

void functionA(int n) {

    if (n > 0) {
        printf("A: %d\n", n);
        functionB(n - 1);
    }

}

void functionB(int n) {

    if (n > 0) {
        printf("B: %d\n", n);
        functionA(n - 1);
    }

}

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Recursão direta e recursão indireta

        A recursão direta ocorre quando uma função
        chama a si mesma diretamente, dentro do seu
        corpo.

        A recursão indireta ocorre quando uma função
        chama outro método que chama a primeira função
        novamente.
    */

    functionA(20);

    return 0;   // Padrão C
}

