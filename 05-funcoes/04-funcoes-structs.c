#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Struct
typedef struct ponto {

    int x, y;

} pnt;

// Função
pnt somaPontos (pnt a, pnt b) {
    pnt S;
    S.x = a.x + b.x;
    S.y = a.y + b.y;
    return S;

}


// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Funções e Structs. Para utilizar variáveis compostas e funções,
        a sintaxe mantém-se exatamente a mesma, como exemplificado
        nesse arquivo.
    */

    pnt a = {10, 20}; 
    pnt b = {40, 30};

    pnt ponto = somaPontos(a, b);
    
    printf("%i, %d", ponto.x, ponto.y);

    return 0;   // Padrão C
}