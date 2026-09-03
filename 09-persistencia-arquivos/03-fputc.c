#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        r  - read           = Apenas para ler o conteúdo do arquivo
        rb - read binary    = Apenas para ler o conteúdo de arquivos binários
        
        w  - write          = Para escrever no arquivo (Se houver algum contéúdo no arquivo, ele será totalmente reescrito)
        wb - write binary   = Para escrever em arquivos binários
        
        a  - write          = Outro modo para escrever arquivos, mas ele adiciona os dados no final do arquivo, sem apagar o conteúdo já salvo
        ab - write binary   = Outro modo para escrever em arquivos binários

        r+ - read + write   = Leitura e escrita (Arquivo deve existir e pode ser modificado)
        r+b - read + write  = Leitura e escrita de binários

        w+  - read + write  = leitura e escrita (cria um arquivo novo se não o solicitado não existir)
        w+b - read + write  = leitura e escrita de binários

        a+  - read + write  = leitura e escrita (novos dados são adicionados no final do arquivo)
        a+b - read + write  = leitura e escrita de binários
    */
    
    // Caminho relativo começa no diretório do executável
    // Caminho absoluto que começa desde a pasta base do sistema
    FILE *archive = fopen("arquivos/arquivo.txt", "w");
    if (archive == NULL) {
        printf("ERROR! O arquivo não abriu!\n");
        exit(1);
    }

    char string[100];
    printf("Digite uma String: ");
    gets(string);

    for (int i = 0; string[i] != '\0'; i++) {
        /*
            
        */
        fputc(string[i], archive);              // Escreve um caractere por vez

    }

    fclose(archive);    // Liberar a memória que o arquivo ocupou

    return 0;   // Padrão C
}
