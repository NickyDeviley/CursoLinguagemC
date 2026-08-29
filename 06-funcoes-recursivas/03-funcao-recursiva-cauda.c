#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Função recursiva NÃO EM CAUDA
int fatorialRecursivo (int n) {

    if (n < 1) { return 1; }
    return n * fatorial(n - 1);
    // A conta de multiplicação fica pendente, o que
    // impede o compilador de apagar essa função da
    // memória na hora em que a próxima recursão é chamada.
}

// Utilizamos uma função recursiva auxiliar para transformar
// a função recursiva em uma CAUDA
int fatAux (int n, int acumulador) {
    if (n < 1) {
        return acumulador;
    }
    return fatAux(n - 1, n * acumulador);
}

int fatorialRecursivoCauda (int n) {

    return fatorialAux(n - 1, 1);

}

// Função recursiva EM CAUDA

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Função recursiva em cauda é aquela que a chamada recursiva
        é a última instrução. As recursÕes em cauda permitem que o
        compilador otimize o código, pois não deixa nenhuma conta
        pendente por causa de um retorno. Isso torna a recursão
        muito mais otimizada para a memória, pois a última recursão
        retorna diretamente para a primeira chamada.

        int func (int n) {
            if (n == 0) {
                return 1;
            }
            return func(n - 1);
        }
    */

    int fatorialRecursivoCauda(10);

    return 0;   // Padrão C
}

