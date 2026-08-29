#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Quando nós criamos um ponteiro, utilizamos o asterísco.
        O desreferenciamento trata-se de acessar o endereço que
        está dentro do ponteiro, então nós utilizamos o asterísco
        para falar ao compilador: "Acesse o endereço armazenado nesse ponteiro".

        Se quisermos acessar ou modificar o endereço que está dentro
        do ponteiro, não utilizamos o asterísco, apenas chamamos
        o ponteiro diretamente:

        int *p = &a;
        p = &b;
    */

    // int a;
    // int *p = &a;
    int a, *p = &a;

    printf("%x + 1 = %x\n", p, p + 1);
    printf("%x + 1 = %x\n", p, p - 1);

    return 0;   // Padrão C
}

