#include <stdio.h>

void main () {
    /*
        Operadores artiméticos:

        Positivo        +
        Negativo        -
        Adição          +
        Subtração       -
        Multiplicação   *
        Divisão         /
        Módulo          %
        
        pré/pos-incremento  ++
        pré/pos-decremento  --
        
        Atribuição por adição           +=
        Atribuição por subtração        -=
        Atribuição por multiplicação    *=
        Atribuição por divisão          /=
        Atribuição por módulo           %=

    */

    int a = 1, b = -2, c = 3;

    // Positivo
    printf("%i", +a);
    printf("%i", +b);

    // Negativo
    printf("%i", -a);
    printf("%i", -b);
    
    // Adição
    printf("%i", a + b);

    // Subtração
    printf("%i", a - b);

    // Divisão
    printf("%i", b / a);

    // Multiplicação
    printf("%i", 2 * 5);

    // Módulo
    printf("%i", c % 2);


    /*
        Para imprimir um caractére especial usando printf, utilize
        a porcentagem:
    */
   printf("%%");    // Imprime: "%"

}