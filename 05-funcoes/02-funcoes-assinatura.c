#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int calcularFatorial (int);   // Assinatura da função

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        A linguagem C possuí uma peculiaridade, o código assim como
        qualquer outra linguagem, é lido de cima para baixo, da
        esquerda para a direita.

        Isso faz com que nós não possamos declarar uma função
        depois de ter chamado ela no código, pois isso causa
        um erro. Para solucionar esse erro, existe a opção de
        prototipar/assinatura a função, isso é, nós criamos 
        a função depois da main e nós criamos uma assinatura
        no começo do arquivo.
    */

    int resultado;
    resultado = calculadoraFatorial(5);
    printf("Resultado de !%i = %i\n", 5, resultado);

    return 0;   // Padrão C
}

int calcularFatorial (int n) {

    int fat = 1;
    for (int i = n; i > 1; i--) {
        fat = fat * i;
    }
    
    return fat;
}
