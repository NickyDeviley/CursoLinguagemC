#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*

        Alocação dinâmica de memória.

        A memória RAM é dividida em quatro partes. São elas,
        instrução; Static/global; stack; e heap.

        - Instrução: A parte de instrução é o pedaço da memória
        reservado ao seu código, ou seja, o algoritmo que você
        escreve;
        
        - Static/Global: É a parte disponível para armazenar
        variáveis estáticas e globais, que são independentes
        das funções.
        
        - Stack: É a parte reservada para variáveis locais e chamadas
        de função, parâmetros, endereços de retorno, etc.
        
        - Heap: É a área reservada para alocação dinâmica de memória,
        nessa parte da memória nós podemos gerar espaços que aumentam
        e diminuem dinamicamente para satisfazer o tamanho das estruturas
        de dados e variáveis que nós alocamos.

        Para manipular a memória heap nós utilizamos as funções:

        malloc() - calloc() - realloc() - free()

    */

    // Funcionamento de Sizeof:

    int a = 5;
    int ta = sizeof a;              // Parenteses são opicionais
    int tdouble = sizeof(double);   // Esse comando retorna o tamanho (em bytes) que essa variável reserva na memória
    printf("\nTamanho da variável a (int) em bytes: %d", ta);       // 4
    printf("\nTamanho do tipo double em bytes: %d\n", tdouble);     // 8

    // Função Malloc permite reservar um espaço na memória heap
    // ela permite armazenar uma variável de qualquer tipo, mas
    // é necessário indicar o tamanho que será reservado em bytes.
    
    // malloc retorna um ponteiro do tipo void, que precisamos
    // converter para um ponteiro do tipo que vamos usar.
    // Nesse caso nós reservamos 4 bytes para uma variável inteira.
    int *x = (int *) malloc( sizeof(int) );

    *x = 5; // Acessando o endereço na heap e atribuindo um valor

    printf("\nValor de X: %d\n", *x);
    printf("endereço de X: %d\n", x);
    
    // O método 'free' serve para liberar o espaço armazenado
    // na heap, evitando memory leak.
    free(x);

    /*
        Podemos utilizar a função malloc para alocar um array dinamicamente:
    */

    int qtd;
    float media = 0;
    printf("Quantos números deseja digitar: ");
    scanf("%d", &qtd);

    // alocando memória dinamicamente:
    float *array = (float *) malloc(qtd * sizeof(float));

    // Iterando o array
    for (int i = 0; i < qtd; i++) {
        printf("Digite o %d número: ", i+1);
        scanf("%f", &array[i]);
        // scanf("%f", array + i);
        media += array[i];
    }

    // Calculando média
    media /= qtd;
    printf("media: %f", media);

    // Liberando a memória
    free(array);

    /*
        Quando nós reservamos um espaço na memória, nós liberamos
        um espaço contíguo, isso é, um grande bloco de memória
        formado por vários endereços. Dessa forma, nós precisamos
        iterar o endereço para acessar todos os espaços reservados.
        Porém, na hora de liberar, nós precisamos apenas informar
        o endereço inicial do bloco reservado
    */

    return 0;   // Padrão C
}
