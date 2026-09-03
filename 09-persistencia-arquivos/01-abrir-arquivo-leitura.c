#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Persistência de dados é salvar os dados em um disco rígido (HD ou SSD)

        Existem 3 operações para fazer com arquivos, ler, manipular e fechar,
        nós preciamos utilizar o tipo FILE e algumas funções. O método para
        abrir arquivos é:

        FILE *fopen(char *caminho_arquivo, char *modo_de_interpretação);

        A função retorna um ponteiro do tipo FILE ou NULL se não achar
        o arquivo. Os parâmetros são, respectivamente, um char que 
        armazena o caminho para acessar o arquivo, e o modo que o 
        compilador deve interpretá-lo na memória.

        Os modos de leitura que existem são:

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
    FILE *archive = fopen("arquivos/arquivo.txt", "r");
    if (archive == NULL) {
        printf("ERROR! O arquivo não abriu!\n");
        exit(1);
    }

    // fgetc() - método que lê o primeiro caractere do arquivo
    //char c = fgetc(archive);
    //printf("Caractere lido: %c\n", c);

    char c;

    // Para ler vários arquivos:
    while ((c = fgetc(archive)) != EOF) {   // O método de leitura itera sozinho sobre os caracteres do arquivo
                                            // EOF = END OF FILE
        printf("%c", c);

    }
    printf("\n");


    fclose(archive);    // Liberar a memória que o arquivo ocupou

    return 0;   // Padrão C
}
