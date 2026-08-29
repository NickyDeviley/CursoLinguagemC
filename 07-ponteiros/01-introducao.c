#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Os ponteiros servem para acessar variáveis de forma indireta.
        Nós criamos uma variável, ela é armazenada em um endereço, e
        nós podemos criar um ponteiro para acessar essa variável
        através de "outra variável", também há o endereço.

        Nós podemos visualizar o endereço da variável através do
        operador &, como exemplificado abaixo:
    */
    
    int a = 10; // Criando uma variável com um valor qualquer.
    printf("Valor de a: %d\n", a);      // imprime 10
    printf("Endereço de a: %x\n", &a);  // imprime o endereço em hexadecimal (%x imprime valores hexa)

    // Criando um ponteiro e atribuindo o endereço de a.
    int *p = &a;

    printf("Valor de a de novo: %d\n", a);              // imprime 10
    printf("Valor de p: %d\n", p);                      // imprime 10
    printf("Endereço de p: %x\n", &p);                  // imprime o endereço de P
    printf("Conteúdo de p (endereço de a): %x\n", *p);  // imprime o endereço de a

    return 0;   // Padrão C
}

