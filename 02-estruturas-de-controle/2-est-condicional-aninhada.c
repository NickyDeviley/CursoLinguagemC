#include <stdio.h>

void main () {
    /*
        Estruturas de controle, existem dois tipos de estruturas de controle.
        As condicionais servem para verificar se uma condição específica é 
        satisfeita. Enquanto as iterativas servem para repetir a execução
        de um pedaço de código diversas vezes.

        Estruturas condicionais são:

        if      - SE
        else    - SE NÁO
        else if - SE NÃO SE
        switch  - ---

        Também é possível aninhar as estruturas condicionais:
    */

    int x;
    printf("Digite um inteiro: ");
    scanf(" %d\n", &x);
    
    if (x > 0) {
        if (x == 1) {
            prinf("%i é igual a 1.\n", x);
        }
        else {
            prinf("%i não é igual a 1.\n", x);
        }
    }
    else {
        if (x == -1) {
            prinf("%d é igual a -1.\n", x);
        }
        else {
            prinf("%d não é igual a 1.\n", x);
        }
    }

}