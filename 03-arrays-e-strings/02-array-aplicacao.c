#include <stdio.h>

void main () {
    // Para mexer com arrays podemos utilizar as estruturas iterativas, para
    // facilitar acessar os dados e/ou recuperá-los:

    const int qt = 3;
    float array[qt];
    float media = 0;
    
    for (int i = 0; i < qt; i++) {
        printf("\nDigite um número que será armazenado na posição %d: \n", i);
        scanf(" %f",&array[qt]);
        media += array[qt];
    }
    media /= qt;
    printf("\nMedia: %f\n", media);
}