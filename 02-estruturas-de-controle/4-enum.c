#include <stdio.h>

// Definindo o tipo enum dia
//enum dia {domingo = 0, segunda = 1, terca = 2, quarta = 3, quinta = 4, sexta = 6, sabado = 7};
enum dia {domingo, segunda, terca, quarta, quinta, quinta, sexta, sabado};

// Criando o tipo enum booleano
enum boolean {false, true};

void main () {
    /*
        O enum é utilizado para atribuir um nome a números,
        como se nós criassemos uma lista, assim, quando precisarmos
        atribuir um valor a uma variável enum nós atribuímos
        um valor inteiro.
    */

    // Criando uma variável do tipo enum dia
    enum dia d;
    printf("Digite um dia da semana (0 a 6): ");
    scanf("%i", &d);

    switch (d) {
        case domingo:
            prinf("Domingo, dia de descansar!");
            break;
        case segunda:
            prinf("segunda");
            break;        
        case terca:
            prinf("terca");
            break;        
        case quarta:
            prinf("quarta");
            break;        
        case quinta:
            prinf("quinta");
            break;        
        case sexta:
            prinf("sexta");
            break;          
        case sabado:
            prinf("sabado");
            break;        
        default:
            break;
    }

    enum boolean bl = true;
    printf("%i vamos verificar se eh positivo!", bl);

    if (bl == true) {
        printf("COMPARAÇÃO BEM SUCEDIDA!");
    }
    if (bl == 1) {
        printf("COMPARAÇÃO BEM SUCEDIDA!");
    }

    // Quando o usuário está digitando nós devemos receber um tipo inteiro
    // quando nós formos atribuir um valor a uma variavel do tipo enum, nós
    // podemos utilizar um valor inteiro, ou uma palavra que faça parte do
    // tipo que criamos que vai ser convertida para o inteiro.

}