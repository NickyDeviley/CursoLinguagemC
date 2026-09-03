#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Também é possível criar um arquivo temporário, para
        isso nós utilizamos o método tmpfile(); que gera um
        arquivo temporário na memória, com permissão de leitura
        e escrita.

        Esse arquivo é deletado quando usamoso fclose().
    */

    FILE *fp;
    char *text = "Hello, world! This is a tutorial using fseek";
    char ch;
    char stop_char = '!';

    // Criando um arquivo temporário
    fp = tmpfile();
    if (fp == NULL) {
        perror("Unable to create temporary file");
        return 1;
    }

    // escrevendo a string no arquivo temporário
    fputs(text, fp);

    // Voltando o ponteiro do arquivo para o início
    // Necessário para ler o conteúdo do arquivo a partir do início
    fseek(fp, 0, SEEK_SET);

    printf("Lendo até o caractere '%c':\n", stop_char);

    while ((ch = fgetc(fp)) != EOF) {

        if (ch == stop_char) {
            fgetc(fp);
            break;
        }

    }

    printf("\nCaracteres restantes após '%c':\n", stop_char);

    while ((ch = fgetc(fp)) != EOF) {
        //printf("%c", ch);
        putchar(ch);            // Funciona como o printf, mas imprime apenas 1 caractere por vez
    }

    fclose(fp);

    return 0;   // Padrão C
}
