#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        A função calloc funciona de forma semelhante a função malloc,
        todavia ela recebe dois parâmetros. A quantidade de espaços
        que serão armazenados e o tipo da variável.

        Diferente do Malloc, que aloca um espaço contíguo de memória
        baseado diretamente no tamanho que o programador envia, por
        exemplo: (3 * sizeof(float)), aqui nós reservamos 12 bytes
        de memória em um bloco contíguo.

        A função Calloc, faz esse cálculo de forma automática, basta
        enviar a quantidade de espaços e o tamanho da variável. Além
        disso o calloc também limpa todos os bytes da memória na 
        hora da alocação, e deixa-os igual a 0.
    */

    int qtd;
    float media = 0;
    printf("Quantos números deseja digitar: ");
    scanf("%d", &qtd);

    // alocando memória dinamicamente:
    float *array = (float *) calloc(qtd, sizeof(float));

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


    return 0;   // Padrão C
}
