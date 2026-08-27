#include <stdio.h>

void main () {
    // A biblioteca string.h tras alguns métodos printos para utilizarmos em strings,
    // vamos ver alguns destes métodos:
    // strlen() - verifica a quantidade de caracteres que temos na nossa String
    // strcpy() - copia uma string
    // strcat() - concatena, adiciona ao final de uma string o conteudo de outra
    // strcmp() - avalia se duas strings são iguais
    // strchr() - encontra a primeira decorrencia de um dado caractere
    // strrchr() - encontra a última ocorrencia de um dado caractere
    // strstr() - verifica se uma dada substring pode ser encontrada dentro de outra string

    char str[200] = "Neque porro quisquam est qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit";
    char str2[200] = "Neque porro quisquam est qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit";
    char str3[200];

    // Quantidade de caracteres
    printf("Nossa String 1 tem %d caracteres!", strlen(str));

    // Copiando conteudo
    strcpy(str3, str);
    printf("conteudo da string 3 eh: %s\n", str3);

    // Concatenando conteúdos
    strcat(str3, "CONCATENEI");
    printf("conteudo da string 3 após concatenar eh: \n%s\n", str3);

    // Comparando string
    int resposta_comp_str_str2 = strcmp(str, str2);
    printf("Comparando str com str2 %d\n", resposta_comp_str_str2);

    // Valor for negativo resposta < 0
    // O primeiro caractere diferente encontrado, é menor na str
    // valor for positivo resposta > 0
    // O primeiro caractere diferente encontrado, é menor na str2

    int resposta_comp_str_str3 = strcmp(str, str3);
    printf("Comparando str com str3 %d\n", resposta_comp_str_str3);


    // verificar ocorrencia de um caractere
    char *p = strchr(str, 'p');
    printf("O caractere 'p' foi encontrado e temos a partir dele %s\n", p);
    p = strrchr(str, 'p');
    printf("O caractere 'p' foi encontrado e temos a partir dele %\n", p);

    // Verificando a ocorrencia de uma sub-string
    p = strstr(str, "sit");
    // se a palavra existir vai retornar um ponteiro para a ocorrencia dela
    // se não existir vai retornar nulo
    printf("O caractere 'p' foi encontrado e temos a partir dele: \n%s\n", p);
}