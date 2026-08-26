#include <stdio.h>

void main () {
    /*
        Ao contrário do arredondamento, quando convertemos
        valores flutuantes para inteiro todas as casas decimais
        são descartadas.
    */

    // casting explícito - Truncamento
    float b = 3.9;
    int i = (int) b;
    printf("valor convertido para int: %i", i);

    // casting explícito - Dentro do printf
    printf("valor convertido para int: %f", (float) i);

    // Casting implícito
    int a = b;

}