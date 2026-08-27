#include <stdio.h>

void main () {
    // saída de strings

    char nome[] = "JOÃO CASTRO";
    // que podemos imprimir uma string a partir de um determinado caractere
    // fazendo uso do indice nesse caso precisamos do operar & no printf
    // veremos o porque disso, mais para frente.
    printf("%s", &nome[5]);


}