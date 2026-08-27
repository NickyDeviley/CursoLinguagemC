#include <stdio.h>

void main () {
    // Calculando a média de 3 números sem o uso de Array:

    float n1, n2, n3;
    printf("Digite 3 números: \n");
    scanf(" %f %f %f", &n1, &n2, &n3);
    float media = (n1 + n2 + n3) / 3;
    printf("A media dos números eh: %.2f\n", media);    // Estamos formantando para apenas 2 casas decimais

    /*
        Um array é, essencialmente espaços reservados sequencialmente na memória. Em paralelo,
        quando declaramos variáveis, elas podem oculpar endereços aleatórios na memória. Já
        o Array é um conjunto de variáveis que são armazenados sequencialmente, ou seja,
        oculpam linhas retas de endereços. O array pode ser formado por uma quantidade colossal 
        de valores, mas todos precisam ser do mesmo tipo.

        Essa estrutura sequencial na memória também é uma forma de otimização, pois é muito
        mais fácil para o computador ler dados armazenados em sequência na memória, do que
        procurar eles armazenados em locais distintos.
    */

    // Aqui nós criamos um array de três posições, o seu tamanho armazenado na memória é:
    // tamanho do array 3 * tamanho do tipo de dado (float)
    float n[3];
    printf("Digite 3 números: \n");
    scanf(" %f %f %f", &n[0], &n[1], &n[2]);
    float media = (n[0] + n[1] + n[2]) / 3;
    printf("A media dos números eh: %.2f\n", media);

}