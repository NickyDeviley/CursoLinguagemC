#include <stdio.h>

void main () {
    /*
        Operadores relacionais

        maior que               <
        menor que               >
        menor ou igual que      <=
        maior ou igula que      >=
        igual a                 ==
        diferente de            !=

        Os operadores relacionais retornam valores booleanos
    */

    printf("a < b: %d\n", 5 < 10);      // true
    printf("a > b: %d\n", 5 > 10);      // false
    printf("a <= b: %d\n", 5 <= 10);    // true
    printf("a >= b: %d\n", 5 >= 10);    // false
    printf("a == b: %d\n", 5 == 10);    // false
    printf("a != b: %d\n", 5 != 10);    // true

}