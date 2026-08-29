#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Passagem por valor
void funcaoDobra (int a) {

    a = a * 2;
    printf("funcao dobra a: %d\n", a);

}

// Passagem por referência
void funcaoDobraP (int *a) {

    *a *= 2;    // Multiplicando o valor da variável através do ponteiro

}

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Existem dois casos representados aqui, o primeiro
        nós chamamos um método que recebe uma variável
        como parâmetro. Esse método cria uma nova instáncia
        de variável na memória e armazena nela o valor
        que foi enviado. Então qualquer modificação que
        seja feita nessa variável fica no método e pode
        ser apagada ou precisa ser retornada.

        No segundo caso nós criamos uma função que recebe
        um ponteiro, nesse caso qualquer variável que for
        enviada para esse método será diretamente modificada
        através do ponteiro. Então as modificações vão
        persistir, não haverá gasto extra de memória, pois
        continua sendo apenas 1 variável e não há necessidade
        de retornar o resultado.
    */

    int a = 1000;
    funcaoDobra(a);
    printf("main a: %d\n", a);

    // Ao invés de enviar a variável, enviamos o endereço
    funcaoDobraP(&a);
    printf("main a modificado através de ponteiro: %d", a);

    return 0;   // Padrão C
}

