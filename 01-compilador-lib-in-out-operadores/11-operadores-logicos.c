#include <stdio.h>

void main () {
    /*
        Operadores lógicos

        Negaçáo     !
        E           &&
        Ou          ||   

        Os operadores lógicos comparam valores booleanos, e retornam valores booleanos.

        O operador de negação inverte a lógica da expressão, ou seja, se a expressão retorna verdadeiro,
        o operador de negação retorna false, e vice-versa.

        O operador E retorna verdadeiro se todas as expressões comparadas forem verdadeiras, mas caso
        alguma retorne falso, o operador retorna falso.

        O operador OU retorna verdadeiro se pelo menos uma das expressões comparadas for verdadeira, mas caso
        todas sejam falsas, o operador retorna falso.
    */

    int relacional = 1 == 1;
    int a = !relacional;

    printf("!a ou !verdadeiro = %d\n", a);
    printf("!a ou !verdadeiro = %i\n", !(1 == 2));

    // Operador E
    int relacional2 = (5 > 3);
    int relacional3 = (5 > 4);

    printf("5 > 3? %i\n", relacional2);
    printf("5 > 4? %i\n", relacional3);

    int comparacao_e = relacional2 && relacional3;
    printf("%i E %i = %i\n",relacional2, relacional3, comparacao_e);
    printf("1 E 0 = %i\n", (5 > 3) && (5 > 7));


    // Operador OU
    int comparacao_ou = (5 > 8) || (5 > 7);
    printf("5 > 8 OU 5 > 7 = %i\n", comparacao_ou);
    printf("5 > 8 OU 5 > 4 = %i\n", (5 > 8) || (5 > 4));   

    /*
        Na linguagem C, não existe o tipo boolean. A representação dos valores booleanos
        se dá através de inteiros, onde:

        0 = falso
        !0 = verdadeiro

        Isso é. o zero representa o valor false. E QUALQUER número diferente de zero
        representa um valor true.
    */

}