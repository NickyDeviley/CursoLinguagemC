#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct pessoa {

    char nome[50];
    int idade;
    float altura;

};

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Agora um dos tópicos mais importantes para o desempenho em jogos
        As STRUCTS.

        Assim como na orientação a objetos do C++, Java ou C#, onde nós
        podemos criar uma classe que armazena características e comportamentos,
        as STRUCTS são uma forma mais primitiva de armazenar características.
        
        Na Linguagem C, nós não temos classes, então não é possível criar
        objetos de maneira tradicional, porém podemos simular a orientação
        a objetos através dos métodos e das Structs.

        Também podemos pensar nos Structs como variáveis compostas, e para
        criar uma Struct escrevemos assim:

        struct nome_do_novo_tipo {
            tipo1 atributo1;
            ...
            tipoN atributoN;
        }
    */

    // Para declarar uma variável do tipo que nós criamos (pessoa), nós
    // usamos essa sintaxe:

    struct pessoa p;

    printf("Digite o nome: \n");
    fgets(p.nome, 50, stdin);       // Sempre utilizar o "stdin" para indicar que é uma entrada

    printf("Digite a idade: \n");
    scanf(" %d", &p.idade);

    printf("Digite a altura: \n");
    scanf(" %f", &p.altura);

    printf("\nNome: %s Idade: %i\nAltura: %f\n", p.nome, p.idade, p.altura);


    return 0;   // Padrão C
}