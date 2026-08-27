#include <stdio.h>

void main () {
    /*
        O switch é utilizado para casos específicos e sua estrutura é assim:

        switch (objeto) {
            caso x:
                break;
            caso y:
                break;
            default:
                break;
        
        }

        O switch funciona verifica valores específicos e, para isso, ele
        utiliza constantes literais, que é essencialmente, números que
        nós adicionamos ao código.

        É importante ressaltar que nós podemos criar constantes utilizando
        essa linha de código:

        const int NUMERO_UM = 1;

        Mas essa constante foi aderida na linguagem C através da linguagem C++,
        onde ela foi realmente criada. Ela funciona exatamente como uma variavel.
        Armazena um espaço na memória, a diferença é que esse valor não pode ser
        modificado. Essa constante não pode ser utilizada no switch.

        Porém a outro jeito de criamos uma "constante" no estilo C, porém não é
        um jeito seguro. utilizando o define.

        #define CONST 1

        Esse método é uma forma de substituir o valor por uma palavra, ele não
        funciona como uma variável, na verdade é quase como uma reutilização
        de código, onde nós atribuímos a uma palavra um valor e toda vez
        que o compilador encontrar essa palavra no código, ele substitui pelo
        valor.

        Também é possível utilizar o tipo char no switch.
    */

    int x;
    printf("Digite um inteiro: ");
    scanf(" %d\n", &x);
    
    // utilizando switch para ver se o x é 1, 2 ou 3:

    switch (x) {
        case 1:
            printf("%d é igual a 1!", x);
            break;
        case 2:
            printf("%i é igual a 2!", x);
            break;
        case 3:
            printf("%d é igual a 3!", x);
            break;
        default:
            printf("%i não é 1, 2 ou 3!", x);
            break;
    }

}