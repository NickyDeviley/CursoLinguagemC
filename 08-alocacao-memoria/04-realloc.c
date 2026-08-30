#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        A função realloc() é utilizada para realocar memória,
        dessa forma, caso seja criado um array na heap, e
        eventualmente precisarmos modificar o tamanho desse
        array. Utilizamos a função realloc().
    */

    float *array = (float *) calloc(5, sizeof(float));
    for (int i = 0; i < 5; i++) {
        array[i] = i + 1;
        printf("array[%d]: %i", i, array[i]);
    }

    /*
        Aqui nós usamos a função realloc para diminuir o tamanho
        do array. Ele foi criado alocando 5 espaços de 4 bytes, e
        nós utilizamos realloc para diminuir para apenas 3 espaços.

        É importante mencionar que, caso haja um espaço de memória
        já reservado onde o realloc iria aumentar o bloco contíguo,
        a função automáticamente procura um espaço livre na memória
        para que possa continuar a realocação.
    */
    array = realloc(array, 3 * sizeof(float));
    for (int i = 0; i < 3; i++) {
        printf("array[%d]: %i", i, array[i]);
    }



    return 0;   // Padrão C
}
