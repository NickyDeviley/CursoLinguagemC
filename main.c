#include <stdio.h>

void main () {
    /*
        A estrutura de iteração for funciona de forma semelhante
        aos laços while e do-while, porém ele foca em limitar a 
        quantidade de iterações de forma explícita, apesar de
        ser algo opcional.

        Sua sintaxe é a seguinte:

        for (Declaração; Condição; Incremento) { código para iteração}

        Quando declaramos a variável para a iteração dentro do laço
        ela só existe na memória durante a execução do laço.
    */

    // iteração de 0 a 9 no laço for
    for (int i = 0; i < 10; i++) {

        printf("O valor de 1 eh %d\n", i);

    }

    // Mesma iteração em while
    int j = 0;
    while (j < 10) {

        printf("O valor de j eh %d\n", j);
        j++;

    }

    // Nós podemos omitir parte do laço for, por exemplo:
    
    // Declaração fora do laço, nesse caso a variá®el a
    // é instanciada em memória e só finalizará quando
    // o método main chegar ao fim.
    int a = 0;
    for (;a < 3; a++) {
        prinf("iteração %i\n", a);
    }

    // Nesse caso o código funciona de maneira parecida
    // com um laço while, ele roda infinitamente, pois
    // não tem uma condição, então nós precisamos limitar
    // ele utilizando Break.
    for (int b = 0;;b++) {
        printf("\n\nvalor de B: %d", b);
        if (b == 4)
            break;
    }   

    // Nessa caso não há incremento, a ideia csontinua a
    // mesma do último caso, o laço vai executar para
    // sempre, pois a variavel que é verificada na condição
    // não é incrementada.
    for (int i = 0; i < 5;) {
        printf("\n\nIteração: %i", i);
        i++;
    }

}