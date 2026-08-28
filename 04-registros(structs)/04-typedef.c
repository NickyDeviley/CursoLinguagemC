#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int inteiro;

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Na linguagem C também temos o Typedef, onde podemos
        criar apelidos para usarmos em código, como por exemplo
        nós criamos o apelido "inteiro" para variaveis "int",
        então nós podemos:
    */

    inteiro a, b;
    printf("Digite dois inteiros: \n");
    scanf("%d %i", a, b);
    inteiro s = a + b;
    printf("Soma: %d\n", s);


    return 0;   // Padrão C
}