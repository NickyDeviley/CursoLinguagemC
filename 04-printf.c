#include <stdio.h>

void main () {
    /* 
    
        Para imprimir as variáveis na saída formatada, é utilizado:

        %c - character

        %i ou %d - short e int
        $li - long int

        %f - float e double
        %e - long double
    
    */

    /* 
    
        Para imprimir as variáveis na saída formatada, é utilizado:

        %c - character

        %i ou %d - short e int
        $li - long int

        %f - float e double
        %e - long double
    
    */
// Caracteres
    char nome_da_variavel = 'a';          // 1 byte

    unsigned char variavel1;

    printf("imprimindo a variavel do tipo char: %c\n", nome_da_variavel); // Saída formatada

// Números Inteiros
    short int nome_da_variavel2 = 1;    // 2 bytes
    int nome_da_variavel3 = 1;          // 4 bytes
    long int nome_da_variavel4 = 1;     // 4 bytes

    unsigned short int variavel2 = 1;
    unsigned int variavel3 = 1;
    unsigned long int variavel4 = 0;

//    printf("%i ou %d");   - Variáveis inteiras
//    printf("%li");        - Variáveis long int
//    printf("%lu");        - Variávies Unsigned long int

// Números Reais
    float nome_da_variavel5 = 3.9f;             // 4 bytes
    double nome_da_variavel6 = 3.4;             // 8 bytes
    long double nome_da_variavel7 = 3.9e-23L;   // 16 bytes

    // Para tipos flutuantes não é possível usar o Unsigned

//    printf("%f"); - float
//    printf("%f"); - double
//    printf("%e"); - long double

    /*
        A variável Long Double, apenas no windows, não pode ser imprimida.
        pois a função printf do compilador do windows não consegue lidar
        com esse tipo.

        Estamos no Linux Fedora, mas para resolver esse problema que ocorre
        no windows, nós odemos transformar a variável long double para String ou
        para double;
    */

    // Demonstração de uso de String:
    char nome[] = "Nicholas";
    printf("impressao de String: %s\n", nome);


// Constante nomeada
    const int MAX = 100;


// Para imprimir endereços de memória, utilizamos o %x
    int a;
    printf("%x", &a);

}