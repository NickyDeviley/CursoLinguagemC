#include <stdio.h>

void main() {
        /*
        Operadores de maior e menor precedência

        Regra básica da metemática, algumas contas são resolvidas primeiro,
        então é necessário organizar a conta matemática para que ela siga
        as regras básicas da matemática:

        1. Parênteses               - ()
        2. Exponenciação            - Náo existe na linguagem C
        3. Multiplicação e Divisão  - * /
        4. Adição e Subtração       - + -

        Alguns operadores extras da matemática não existem na linguagem C, 
        como a exponenciação, o colchetes/chaves, a raiz quadrada, etc.

        É necessário também entender que os operadores de atribuição (=),
        funcionam da direita para a esquerda, ou seja, se nós criamos uma
        variável e atribuímos uma conta a ela, a linguagem entende que:
        Primeiro deve resolver a conta e atribuir o resultado a variável.

        Os outros operadores funcionam da esquerda para a direita, assim
        como na matemática tradicional.

    */

    int a, b, c, d;
    d = 5;

    a = b = c = d;  

    a = 2 + 3 - 4;
}