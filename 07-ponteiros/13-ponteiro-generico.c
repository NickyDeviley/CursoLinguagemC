#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Ponteiros Genéricos

        Quando nós declaramos um ponteiro, essencialmente nós armazenamos
        um espaço na memória que irá armazenar um endereço de uma uma variável.
        
        Todas as variáveis possuem um tipo e tamanho específico, porém os
        ponteiros sempre oculpam 4 bytes de memória, independente do tipo. Então...
        Por que nós declaramos um tipo para os ponteiros? Para que possamos
        usar a desreferenciação e acessar o valor dentro daquele endereço
        que está armazenado no ponteiro. Isso ocorre pois o compilador
        precisa saber quantos bytes da memória estão reservados para poder
        ler eles. Se não há um tipo específicado, o compilador não sabe quantos
        bytes ele precisa ler.

        O ponteiro genérico pode armazenar diferentes tipos de dados,
        basta que nós declaremos ele com o tipo 'void'.

        Porém para usar esses ponteiros, na hora de desreferenciar é necessário
        converter (casting) ele para o tipo que ele deveria ter.
    */

    int a = 5, b = 10, c;
    void *p1 = &a;          // Ponteiro Genérico que recebe valor inteiro
    void *p2 = &b;          // Ponteiro Genérico que recebe valor inteiro
    
    // Gera um erro.
    //c = *p1 + *p2;

    /*
        Aqui nós fazemos o casting (int *) depois nós 
        desreferenciamos o ponteiro com asterísco: *(^)p1
    */
    c = *(int *)p1 + *(int *)p2;
    printf("c = %d\n", c);

    return 0;   // Padrão C
}
