#include <stdio.h>
//#include <stdbool.h>    // C99 - C17

void main () {
    /* 
    
        Tipos de variáveis
    
        Esses tipos de variáveis tem valores diferentes baseado
        no sistema operacional, então não necessáriamente o "long int"
        têm o mesmo tamanho da variável int.

        Os tipos booleanos não existiam nas primeiras versões do C, porém
        a partir do C99 foi criada a biblioteca <stdbool.h>, que precisava
        ser importada para o código para conseguir criar uma variável bool.
        A partir do C23 o tipo bool voi adicionado nativamente na linguagem
        como uma variá®el primitiva.
    
    */

// Booleanas - C23
    bool booleano = true;       // 1 bit
    bool booleano2 = false;

    printf("%i", booleano);

// Caracteres
    char nome_da_variavel;          // 1 byte

    unsigned char variavel1;


// Números Inteiros
    short int nome_da_variavel2;    // 2 bytes
    int nome_da_variavel3;          // 4 bytes
    long int nome_da_variavel4;     // 4 bytes

    unsigned short int variavel2;
    unsigned int variavel3;
    unsigned long int variavel4;

// Números Reais
    float nome_da_variavel5;        // 4 bytes
    double nome_da_variavel6;       // 8 bytes
    long double nome_da_variavel7;  // 16 bytes

    // Para tipos flutuantes não é possível usar o Unsigned

// Constante nomeada
    const int MAX;
}