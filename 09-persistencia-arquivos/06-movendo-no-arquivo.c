#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Para se movimentar dentro de um arquivo podemos utilizar a função:

        fseek();

        No total o método fseek recebe 3 parâmetros, o ponteiro do arquivo,
        a quantidade de bytes que queremos mover e a partir de onde queremos
        mover. Essa função move o ponteiro se baseando em três 
        parâmetros distintos:
        
        SEEK_SET - Início do arquivo
        SEEK_CUR - Posição atual do arquivo
        SEEK_END - Final do arquivo

        
    */
    
    FILE *archive = fopen("arquivos/arquivo.txt", "w+");
    if (archive == NULL) {
        printf("ERROR! O arquivo não abriu!\n");
        exit(1);
    }

    int a = 2, b = 5;
    fprintf(archive, "A: %d\nB: %d", a, b);

    fseek(archive, 0, SEEK_SET);    // Quero voltar ao início do arquivo e não mover o ponteiro.

    int x, y;
    char t1[5], t2[5];

    // fscanf trata espaços, tabulações e quebras de linha simplesmente como separadores
    fscanf(archive, "%s %d %s %d", t1, &x, t2, &y);
    printf("\n%s %d %s %d\n\n", t1, x, t2, y);

    fclose(archive);

    return 0;   // Padrão C
}
