#include <stdio.h>

void main () {
    /*
        Estruturas Iterativas, são estruturas de código que permitem iterar uma
        parte do código, isso é repetir uma quantidade infinita ou limitada de vezes.

        Existem algumas estruturas iterativas na linguagem C:

        while (condição) {código}

        do {código} while (condição)

        FOR (declaraçáo; condição; incremento) {código}

        Todas as estruturas iterativas funcionam baseadas em condições,
        o código delas itera até que a condição seja falsa.
    */

// Se o laço while executa o código infinitamente, até que a condição seja satisfeita,
// então se não declararmos uma condição o laço while continua rodando até que o código
// seja finalizado.
    int i = 0;
    while (i < 10) {
        printf("O valor de i é: %i\n", i);
        i++;
    }

// O laço do-while é uma estrutura semelhante ao while, porém ele executa o código pelo
// menos uma vez antes de verificar a condição.

    do {
        printf("O valor de i é: %d\n", i);
        i--;
    } while (i > 0);

}