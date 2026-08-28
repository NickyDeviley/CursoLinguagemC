#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ponto {

    float x, y;

};

typedef struct ponto pnt;

// Podemos criar a struct e um apelido ao mesmo tempo
typedef struct ponto2 {

    float x, y;

} pnt2;

// nós também podemos criar o struct dessa forma sem declarar um nome
// porém é bom nomear a struct, é uma boa prática
typedef struct {

    float x, y;

} pnt3;


// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {

    pnt p = {1, 3};
    printf("\nP = %.2f, %.2f\n", p.x, p.y);

    return 0;   // Padrão C
}