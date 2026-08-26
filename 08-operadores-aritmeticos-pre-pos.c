#include <stdio.h>

void main() {
    /*
        A diferença entre pos/pre é quando ocorre a operação.
        Se utilizarmos o pre, a soma ocorre antes da sentença,
        isso é, antes do comando. Se utilizarmos pos, a soma ocorre
        após a sentença.
    */

    int a = 5, b = 5, c = 5, d = 5;

    // Pre incremento
    printf("pre incremento: %d", ++a);  // Antes de imprimir ele soma 1 

    // pos incremento
    printf("pos incremento: %d", a++);  // Depois de imprimir ele soma 1


    // Pre decremento
    printf("pre incremento: %d", --a);

    // pos decremento
    printf("pos incremento: %d", a--);

}
