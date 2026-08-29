#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {

    int array0[10];
    int array1[10];
    int array2[10];
    int array3[10];

    int *ar_ponteiro[4];

    ar_ponteiro[0] = array0;    // Atribuindo o primeiro endereço do array0
    ar_ponteiro[1] = array1;    // Atribuindo o primeiro endereço do array1
    ar_ponteiro[2] = array2;    // Atribuindo o primeiro endereço do array2
    ar_ponteiro[3] = array3;    // Atribuindo o primeiro endereço do array3

    ar_ponteiro[0][0];          // Acessando o array0 no índice 0
    ar_ponteiro[0][1];          // Acessando o array0 no índice 1
    ar_ponteiro[0][2];          // Acessando o array0 no índice 2
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 10; j++) {
            printf("ar_ponteiro[$d][$d]: %d\n", i, j, ar_ponteiro[i][j]);

            // Também poderiamos escrever dessa forma:
            // printf("ar_ponteiro[$d][$d]: %d\n", i, j, *(ar_ponteiro[i] + j));
        }
    }

    return 0;   // Padrão C
}
