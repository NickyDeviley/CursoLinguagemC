#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*

        Alocação dinâmica de memória.

        A memória RAM é dividida em quatro partes. São elas,
        instrução; Static/global; stack; e heap.

        - Instrução: A parte de instrução é o pedaço da memória
        reservado ao seu código, ou seja, o algoritmo que você
        escreve;
        
        - Static/Global: É a parte disponível para armazenar
        variáveis estáticas e globais, que são independentes
        das funções.
        
        - Stack: É a parte reservada para variáveis locais e chamadas
        de função, parâmetros, endereços de retorno, etc.
        
        - Heap: É a área reservada para alocação dinâmica de memória,
        nessa parte da memória nós podemos gerar espaços que aumentam
        e diminuem dinamicamente para satisfazer o tamanho das estruturas
        de dados e variáveis que nós alocamos.

        Para manipular a memória heap nós utilizamos as funções:

        malloc() - calloc() - realloc() - free()

    */

    // Funcionamento de Sizeof:

    int a = 5;
    int ta = sizeof a;              // Parenteses são opicionais
    int tdouble = sizeof(double);   // Esse comando retorna o tamanho (em bytes) que essa variável reserva na memória
    printf("\nTamanho da variável a (int) em bytes: %d", ta);       // 4
    printf("\nTamanho do tipo double em bytes: %d\n", tdouble);     // 8


    printf("\nTamanho do tipo char em bytes: %d\n", sizeof(char));                  // 1  byte - 8 bits     - 0, 8x     - 255 digítos (-128 ~ 127, um bit reservado para o sinal)
    printf("\nTamanho do tipo short em bytes: %d\n", sizeof(short int));            // 2  byte - 16 bits    - 0, 16x    - 65535 digítos (-32768 ~ 32767)
    printf("\nTamanho do tipo int em bytes: %d\n", sizeof(int));                    // 4  byte - 32 bits    - 0, 32x    - 4294967295 (-2147483648 ~ 2147483647)
    printf("\nTamanho do tipo long em bytes: %d\n", sizeof(long int));              // 8  byte - 64 bits    - 0, 64x    - 18 quintlhões
    printf("\nTamanho do tipo float em bytes: %d\n", sizeof(float));                // 4  byte - 32 bits    - 0, 32x    - ~1.2E -38 | ~3.4E +38
    printf("\nTamanho do tipo double em bytes: %d\n", sizeof(double));              // 8  byte - 64 bits    - 0, 64x    - ~2.3E-308 | ~1.7E +308
    printf("\nTamanho do tipo long double em bytes: %d\n", sizeof(long double));    // 16 byte - 128 bits   - 0, 128x   - ~3.4E -4932 | ~1.1E + 4932

    /*
        Quando uma variável atinge seu limite máximo seu valor
        se torna o mais baixo que a variável consegue armazenar,
        ou seja:

        Nesse exemplo abaixo nós criar uma variável inteiro que armazena
        um número próximo ao limite mais alto (100 a menos que o limite),
        então nós iteramos uma soma de 1 digíto até que a variável se
        torne negativa.

        Quando a variável X atinge o limite máximo permitido (2147483647),
        ela "reseta" e começa a contar do valor mais baixo que a variável
        pode armazenar, que é: -2147483648
    */
    int x = 2147483547; // 100 a menos que o limite máximo
    while (x > 0) {
        printf("Valor de X: %d", x);
        x++;
    }
    printf("Valor de X: %d", x);

    return 0;   // Padrão C
}
