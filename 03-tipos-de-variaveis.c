#include <stdio.h>

void main () {
    /* 
    
        Tipos de variáveis
    
        Esses tipos de variáveis tem valores diferentes baseado
        no sistema operacional, então não necessáriamente o "long int"
        têm o mesmo tamanho da variável int.
    
    */
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