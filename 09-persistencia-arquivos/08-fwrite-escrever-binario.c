#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Para o computador, não há diferença entre arquivos de texto ou binário,
        nós, desenvolvedores, fazemos essa diferenciação pois nós conseguimos
        ler os arquivos de texto, mas não os binários.

        Nós não devemos ler um arquivo binário como arquivo de texto, apesar
        de ser possível, não é recomendado pois a ordem dos dados é aleatória.
    */

    // Para escrever em um arquivo binário:

    FILE *archive = fopen("arquivos/arquivo.txt", "wb");
    if (archive == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    int a = 2;
    double b = 11.656;
    char str[6] = "hello";


    // A função Fwrite recebe 4 parâmetros:
    // 1 - O endereço/ponteiro da variável
    // 2 - O tamanho do dado
    // 3 - A quantidade de dados
    // 4 - O ponteiro para o arquivo
    fwrite(&a, sizeof(int), 1, archive);
    fwrite(&b, sizeof(double), 1, archive);
    fwrite(str, sizeof(char), 6, archive);
    
    fclose(archive);

    return 0;   // Padrão C
}
