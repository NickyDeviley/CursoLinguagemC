#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {

    // Criando uma variável e um array
    int x = 10;
    int y[2] = {20, 30};

    // Criando um array de ponteiros
    int *p[2];
    p[0] = &x;  // Armazenando o endereço de X
    p[1] = y;   // Armazenando o primeiro endereço do array y

    /*
        Como já foi explicado, o array são variáveis sem nome armazenadas
        em sequência na memória, e o nome que nós damos a ele é um ponteiro
        que, através do colchetes, pode apontar para qualquer posição do
        array.

        Nesse caso então, quando nós fizemos "p[1] = y", nós armazenamos
        o endereço da posição atual que o array está apontando.
    */

    // Imprimindo o valor e o endereço de X:
    printf("Acessando os dados de X diretamente: \n");
    printf("O valor de X é: %d\n", x);
    printf("O endereço de X é: %x\n", &x);

    printf("\n\n"); // Pulando linha

    printf("Acessando os dados de X pelo ponteiro: \n");
    printf("O valor de X é: %d\n",*p[0]);
    printf("O endereço de X é: %x\n", p[0]);

    printf("\n\n"); // Pulando linha

    printf("Acessando os dados de Y diretamente: \n");
    printf("O valor do primeiro índice de Y: %d\n", y[0]);
    printf("O valor do segundo índice de Y: %d\n", y[1]);

    printf("O endereço do primeiro valor de Y: %x", y);
    printf("O endereço do segundo valor de Y: %x", (y + 1));

    printf("\n\n"); // Pulando linha

    printf("Acessando os dados de Y pelo ponteiro: \n");
    //printf("O valor do primeiro índice de Y: %d\n", (*(*p[1] - 1) ));
    //printf("O valor do segundo índice de Y: %d\n", (*(*p[1] + 1)));

    //printf("O endereço do primeiro valor de Y: %x", ((*p[1]) - 1));
    //printf("O endereço do segundo valor de Y: %x", ((*p[1]) + 1));

    printf("*p[1] + 0: %i\n", *(p[1] + 0)); // 20   - Sintaxe: (Desrefereciação)* (ponteiro [posição_primeiro-array] + quantas-posições-mover-endereço)
    printf("*p[1] + 1: %i\n", *(p[1] + 1)); // 30   - Sintaxe: (Desrefereciação)* (ponteiro [posição_primeiro-array] + quantas-posições-mover-endereço)
    
    printf("p[1][0]: %i\n", p[1][0]);       // 20   - Sintaxe: ponteiro [posicao-primeiro-array] [posicao-segundo-array]
    printf("*p[1][1]: %i\n", p[1][1]);      // 30   - Sintaxe: ponteiro [posicao-primeiro-array] [posicao-segundo-array]
    

    return 0;   // Padrão C
}

