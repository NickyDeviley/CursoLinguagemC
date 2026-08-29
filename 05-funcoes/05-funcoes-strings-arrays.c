#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int tratarString (char str[]) {

    int tamanho = 0;

    // Laço while para descobrir o tamanho da string
    while (str[tamanho] != '\0') {
        tamanho++;
    }

    return tamanho;

}

// Precisa receber o tamanho como parâmetro
int tratarArrayInteiro (int array[], int tamanho) {

    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }

    return soma;

}

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Arrays como parâmetros de função.

        O array é um tipo de dado mais delicado quando precisamos
        utilizar ele em funções. Pois é necessário saber o seu
        tamanho dentro da função para conseguir mexer com ele.

        Com tipos String, que, na linguagem C, são arrays do tipo
        char, nós podemos descobrir o tamanho através do caractere
        que finaliza a String "\0".

        Porém, para arrays de tipos numéricos, a história é
        diferente. Nós precisamos enviar o tamanho do array
        para conseguir tratá-lo como desejarmos.
    */

    char str[] = "Nicholas de Paulo Milanin";
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tamanhoStr = tratarString(str);
    int somaArray = tratarArrayInteiro(array, 10);

    printf("Tamanho do meu nome: %d\n", tamanhoStr);
    printf("Somatório de 1 -> 10: %d\n", somaArray);

    return 0;   // Padrão C
}