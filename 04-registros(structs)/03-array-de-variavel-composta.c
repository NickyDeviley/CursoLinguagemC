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
        O principal motivo para a STRUCT ser ótima para otimização de memória,
        é que, dentro do computador, ela se comporta como uma cadeia de dados
        contínua, então, quando reservamos um array de uma variável composta,
        a memória armazena assim:

        {p.nome(10 Bytes), p.idade(4 Bytes), p.altura(4 Bytes)}, {p.nome(10 Bytes), p.idade(4 Bytes), p.altura(4 Bytes)};

        Então o computador não se esforça para "caçar" o próximo objeto ou variável
        que pode estar em qualquer lugar da memória, pois o array e o struct organiza
        os dados enfileirados, dessa forma otimizando colossalmente o uso de memória.

        Somando ao fato de que a linguagem C, permite manipulação de memória,
        e não possuí Garbage Collector, e muito menos POO, esse são os motivos
        da linguagem C ser a linguagem com maior desempenho entre todas as 
        linguagens de programação, entrega ao programador um poder colossal,
        pouca sintaxe para aprender/memorizar e poucas funções prontas, em
        troca de oferecer o melhor desempenho para as aplicações.
    */


    // Criando um array do nosso novo tipo
    const int qt = 2;
    struct pessoa parray[5];

    for (int i = 0; i < 5; i++) {

        printf("Digite o nome: ");          // Pedindo o nome
        setbuf(stdin, NULL);                // Limpando Buffer de entrada
        fgets(parray[i].nome, 50, stdin);   // Recebendo o nome e armazenando
        setbuf(stdin, NULL);                // Limpando buffer de entrada

        printf("\nDigite a idade: ");       // Pedindo idade
        setbuf(stdin, NULL);                // Limpando Buffer de entrada
        scanf(" %d", &parray[i].idade);      // Recebendo idade e armazenando
        setbuf(stdin, NULL);                // Limpando buffer de entrada

        printf("\nDigite a altura: ");      // Pedindo Altura
        setbuf(stdin, NULL);                // Limpando Buffer de entrada
        scanf(" %f", &parray[i].altura);     // Recebendo altura e armazenando
        setbuf(stdin, NULL);                // Limpando Buffer de entrada

    }

    for (int i = 0; i < qt; i++) {
        printf("Pessoa %i\nNome: %s\nIdade: %i\nAltura: %f\n",
               i, parray[i].nome, parray[i].idade, parray[i].altura);
    }

    return 0;   // Padrão C
}