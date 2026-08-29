#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct ponto {

    float x, y;

} pnt;

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {

    pnt pon = {2.5, 4.0};
    pnt *p = &pon;

    printf("\n(%.1f, %.1f) \n", pon.x, pon.y);      // Acessando os atributos diretamente pela variável composta
    printf("\n(%.1f, %.1f) \n", (*p).x, (*p).y);    // Acessando os atributos indiretamente pelo ponteiro enquanto desreferencia
    printf("\n(%.1f, %.1f) \n", p->x, p->y);        // A seta, assim como o colchetes é a junção de dois operadores.
                                                    // O asterísco * e o parenteses ().
 
    return 0;   // Padrão C
}

