#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main () {
    /*
        O método sprintf funciona como um print e conversor,
        nós convertemos as variáveis primitivas para string
        e então nós imprimimos o resultado.
    */

    char string[100];
    int number = 25;
    float pi = 3.14123123;

    sprintf(string, "float: %f int: %i", pi, number);
    printf("%s", string);

}