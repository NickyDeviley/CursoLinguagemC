#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *obterArray () {

    // Nós podemos criar uma variável dentro de um método que não será apagada.
    // para isso precisamos utilizar a palavra chave Static, que cria esse
    // objeto de forma independente do método, então, mesmo quando o método for
    // finalizado, esse objeto se mantém na memória.
    static int v[5];
    for (int i = 0; i < 5; i++) {
        v[i] = i;
    }
    return v;   // Retornando o array

}

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Quando nós precisármos criar uma função que retorna um array,
        precisamos utilizar ponteiros, os ponteiros funcionam como
        indicadores de endereço. Tudo está armazenado em caixas
        na memória RAM, cada caixa possuí um endereço; O ponteiro
        ele reserva um espaço na memória que guarda um desses endereços,
        então nós podemos acessar variáveis indiretamente.

        Nesse caso, nós utilizamos isso para que a função retorne o
        ponteiro desse array e nós armazenamos o ponteiro, assim
        conseguimos retornar um array.
    */

    // Esse comando abaixo é impossível, pois o compilador só pode criar o array
    // caso ele saiba o tamanho dele, nesse caso ele não sabe. Aqui nós reservamos
    // o espaço na memória e depois tentamos preencher com um array completo, o que
    // como foi ensinado anteriormente, é impossível, pois depois que o array está
    // reservado na memória, só podemos adicionar valores acessando cada índice por vez.
    // int array[] = obterArray();

    // Jeito certo de retornar um array, nós retornamos o ponteiro dele,
    // dessa forma nós não criamos um novo array, nós mantemos apenas o que
    // foi criado dentro da função.
    int *array = obterArray();

    printf("\nPrimeiro Array: ");
    for (int i = 0; i < 5; i++) {
        printf(" %d", array[i]);
    }
    printf("\n\n");

    /*
        O único "problema" de se utilizar esse método acima, é que
        se nós utilizarmos essa função novamente, ela retornará
        o mesmo array, então ficariamos com dois ponteiros para
        o mesmo espaço de memória.
    */

    int *array2 = obterArray();

    printf("Segundo Array: ");
    for (int i = 0; i < 5; i++) {
        printf(" %d", array2[i]);
    }
    printf("\n\n");

    // Modificando apenas o Array2, nós também modificamos o array1
    array2[2] = 200;

    printf("Modifiquei apenas o índice '2' do array2, mas ambos foram modificados: ");

    printf("\nPrimeiro Array: ");
    for (int i = 0; i < 5; i++) {
        printf(" %d", array[i]);
    }
    printf("\n\n");


    printf("Segundo Array: ");
    for (int i = 0; i < 5; i++) {
        printf(" %d", array2[i]);
    }
    printf("\n\n");


    return 0;   // Padrão C
}