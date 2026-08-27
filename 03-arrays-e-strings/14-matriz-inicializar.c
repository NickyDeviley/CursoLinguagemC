#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main () {
    /*
        As matrizes e os arrays funcionam da mesma exata forma na memória,
        porém, para nós programadores, é uma estrutura que facilita o entendimento
        por ser algo mais visual, um array bidimensional.

        A matriz é apenas uma conveniência técnica para os desenvolvedores,
        para o computador é indiferente, sua vantagem é apenas para o entendimento
        da estrutura de dados, como exemplificado abaixo
    */

    // Uma matriz e um Array
    int array[12];              // -> [0] [1] [2] [3] [4] [5] [6] [7] [8] [9] [10] [11]
    
    int matriz[3][4];           // -> [0][0] [0][1] [0][2] [0][3]
                                // -> [1][0] [1][1] [1][2] [1][3]
                                // -> [2][0] [2][1] [2][2] [2][3]

    // Assim como um array, existe diferentes métodos para
    // inicializar uma matriz:

    // maneira 1 (Manual):
    int matrizTeste[2][2];
    matrizTeste[0][0] = 1; matrizTeste[0][1] = 2;
    matrizTeste[1][0] = 3; matrizTeste[1][1] = 4;
    // Inicializando dessa forma para ficar mais visualmente
    // entendível

    // Maneira 2 (Inicializar ao instanciar):
    int matrizTeste2[2][2] = {{1, 2}, 
                              {3, 4}};


    // Maneira 3 (Utilizando Laços):
    
    // Diferente de um array normal, a matriz
    // exige que utilizemos 2 laços para mexer
    // na sua estrutura:

    int matrizTeste3[2][2]; // Instanciando a matriz (Rezervando a memória)
    int numero = 1;

    for (int linha = 0; linha < 2; linha++) {
        for (int coluna = 0; coluna < 2; coluna++) {
            
            printf("A posição [%d][%i] da matriz recebeu: %d\n", linha, coluna, numero);

            matrizTeste3[linha][coluna] = numero;
            numero++;

        }
    }



}