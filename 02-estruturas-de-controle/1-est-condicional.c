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

        A estrutura delas é a seguinte:

        SE (condição) {
        
            Código executado se a condição for verdadeira
        
        }
        SE NÃO SE (condição) {
        
            Caso a primeira condição seja false, pode-se
            verificar outra condição específica através
            do else if.

        }
        SE NÁO {
        
            O se não só é executado se todas as condições
            já verificadas forem falsas, ele não verifica
            nenhuma condição por si só.
        
        }

    */

// VERIFICANDO IMPAR OU PAR
    int x;
    printf("Digite um inteiro: ");
    scanf(" %d", &x);
    
    // Verifica usando est. condicional simples:
    if (x % 2 == 0) {
        printf("%d eh par.\n", x);
    }
    if (x % 2 != 0) {
        printf("%d eh ímpar\n", x);
    }

    // Verifica usando caminho duplo 
    if (x % 2 == 0) {
        // Verifica se x é divisível por 2, portando é par.
        printf("%d eh par.\n", x);
    }
    else {
        // Caso não seja par, só pode ser ímpar.
        printf("%d eh ímpar\n", x);
    }
// VERIFICANDO IMPAR OU PAR

}