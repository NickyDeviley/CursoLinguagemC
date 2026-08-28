#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ponto {

    float x, y;

};

typedef struct ponto pnt;

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {

    pnt p = {1, 3};
    printf("\nP = %.2f, %.2f\n", p.x, p.y);

    return 0;   // Padrão C
}