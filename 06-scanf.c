#include <stdio.h>

void main () {

    int idade;
    float altura;
    char letraFavorita;

    printf("Qual a sua idade?\n");
    scanf("%i", &idade);
    printf("Qual é a sua altura?\n");
    scanf("%f", &altura);
    printf("E qual é sua letra favorita?\n");
    scanf(" %c", &letraFavorita);
    /*
        Quando recebemos Strings, ocorre o mesmo problema que em C++,
        nós precisamos limpar o buffer para que a entrada não receba a quebra
        de linha da última variável "enter", aqui, para resolver nós adicionamos
        um espaço antes do "%c"
    */

    // A barra inversa permite organizar o printf em várias linhas, mas
    // a quebra de linha é o "\n"
    printf("A sua idade é: %i\n"\
    "A sua altura é: %f\n"\
    "A sua letra favorita é: %c\n"\
    , idade, altura, letraFavorita);
}