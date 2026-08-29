#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Agora conseguimos compreender o que foi ensinando anteriormente sobre
        os arrays.

        Um array é um ponteiro para o primeiro valor de um conjunto de variáveis
        sem nome. Variáveis do mesmo tipo, e armazenadas em sequência na memória.
    
        Dessa forma o colchetes [] é a junção de duas operações:
        1. A soma de um ponteiro com um inteiro;
        2. O desreferenciamento do resultado dessa soma;

        Ou seja, ao invés de termos que manualmente modificar através de soma
        o endereço armazenado no array, e depois desreferenciar utilizando o
        asterísco para conseguir acessar o valor. Nós podemos simplesmente
        utilizar o colchetes, que acessa o endereço da memória dentro do ponteiro
        e automáticamente desreferencia o endereço para acessar o valor armazenado
        nesse espaço de memória.
    */

    int a[3];
    printf("Endereço inicial: %x", a);
    a[0] = 10;
    a[1] = 20;  // É equivalente a: *p = 20;
    a[2] = 30;

    // Estamos acessando os índices do array através da desreferenciação
    // E modificando os valores em cada endereço da memória.
    *(a + 0) = 20;  
    *(a + 1) = 30;
    *(a + 2) = 40;




    return 0;   // Padrão C
}

