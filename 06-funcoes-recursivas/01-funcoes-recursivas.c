#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fatorialRecursivo (int numero) {

    if (numero < 1) {
        return 1;
    }
    return numero * fatorialRecursivo(numero - 1);

}

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        As funções recursivas são funções que chamam a si mesmas.

        A função recursiva age como uma pilha de documentos, quando
        nós chamamos uma função, ela armazena um espaço na memória
        para poder trabalhar; no caso de uma função recursiva, ela
        armazena esse espaço e chama a si mesma, dessa forma então
        ela armazena novamente mais espaço, até que algo à faça 
        parar.

        E, quando a função recursiva encontrar algo que a faça parar,
        ela começa a retornar os valores. Voltando ao exemplo da pilha,
        imagine uma pilha de documentos, você precisa assinar o que
        está mais embaixo na pilha, porém, para que você possa
        assinar ele, é necessário assinar todos os documentos que
        estão em cima dele. Um exemplo mais prático:

        int retornaCinco (int i = 0) {
        
            if (i == 5) {
                return i;
            }
            return returnaCinco(i + 1);
        
        }

        Esse exemplo, nós recebemos uma variável então verificamos se ela vale 5, 
        se não vale, nós chamamos a função e incrementamos. E isso vai 
        acontecer até que essa variável seja 5.
    */

    int a, b = 10;

    a = fatorialRecursivo(b);

    printf("O fatorial de %d é: %i", b, a);

    return 0;   // Padrão C
}

/*
    Esse texto explica como o exemplo funciona na prática:

    Eu chamo a função que retorna 5, ela recebe 0 como parâmetro.
    Então ela verifica, "o parâmetro vale 5?", não? Então a função
    retorna a si mesma, porém agora ela soma 1 ao parâmetro, ou seja,
    agora ele vale 1. E novamente, o método repete.

    Primeira recursão - i (1) é igual a cinco? Não, então retorne a função e some 1 ao parâmetro, agora vale 2.

    Segunda recursão - i (2) é igual a cinco? Não, então retorne a função e some 1 ao parâmetro, agora vale 3.

    Terceira recursão - i (3) é igual a cinco? Não, então retorne a função e some 1 ao parâmetro, agora vale 4.

    Quarta recursão - i (4) é igual a cinco? Não, então retorne a função e some 1 ao parâmetro, agora vale 5.

    Quinta recursão - i (5) é igual a cinco? SIM! então retorne i (5).

    Agora que a função encontrou a condição de parada, ela começa a retornar o valor 1, então
    ocorre o processo inverso:

    Quinta recursão retorna i que vale 5.
    a quarta recursão retorna a quinta recursão, que retorna 5.
    a terceira recursão retorna a quarta, que retorna a quinta, que retorna 5.

    ...

    a primeira recursão recebe o resultado que foi encontrado lá na última (quinta) recursão,
    e só então voltamos a função que foi originalmente chamada, e retornamos o valor 5.

*/