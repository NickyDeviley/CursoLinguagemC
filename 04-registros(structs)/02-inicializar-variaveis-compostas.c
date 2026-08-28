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
 
    // Primeira maneira de atribuir valores
    struct pessoa j, m;
    strcpy(j.nome, "JOAO");     // Precisamos usar o strcpy() pois só podemos atribuir uma string em um vetor de char quando instanciamos ele 
    j.idade = 25;
    j.altura = 1.80;

    strcpy(m.nome, "MARIA");
    m.idade = 22;
    m.altura = 1.55;

    // Segunda maneira
    struct pessoa p = {"PEDRO", 20, 1.75};

    return 0;   // Padrão C
}