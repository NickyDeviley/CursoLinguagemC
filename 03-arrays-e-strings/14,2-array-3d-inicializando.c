#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main () {
    /*  
        Array de três dimensões, a lógica continua a mesma
        de uma matriz de duas dimensões, para o computador é
        indiferente, apenas uma conveniência para o programador.
    */

    int matriz3D[3][3][3];  // nesse caso estou reservando 3 * 3 * 3  = 27 espaços na memória em uma linha reta

    // Podemos acessar cada um manualmente, mas a medida que o array cresce
    // torna-se melhor utilizar o laço for para facilitar a iteração:

    int numero = 1;

    for (int linhaX = 0; linhaX < 3; linhaX++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            for (int linhaY = 0; linhaY < 3; linhaY++) {

                printf("O espaço [%d][%d][%i] recebeu: %i\n", linhaX, coluna, linhaY, numero);

                matriz3D[linhaX][coluna][linhaY] = numero;
                numero++;

            }
        }
    }

    /*
        Representação visual para facilitar, pense em um cubo
        formado por cubos menores, igual a um cubo mágico:

        // Frente           meio             trás
        [1] [2] [3] -> [10] [11] [12] -> [19] [20] [21] 
        [4] [5] [6] -> [13] [14] [15] -> [22] [23] [24]
        [7] [8] [9] -> [16] [17] [18] -> [25] [26] [27]

    
    */

}