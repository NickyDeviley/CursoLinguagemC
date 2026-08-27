#include <stdio.h>

void main () {

    // Entrada de dados em Strings

    char str[50];
    printf("Digite uma String: ");

    // Se nós utilizarmos dessa forma o Scanf pega até o primeiro espaço
    // Pois ele separa as entradas por espaços
    // O operador de endereço &, não é obrigatório para tipo String
    scanf(" %s", &str);             
    printf("A string digitada foi: %s", str);

    /*
        Nós colocamos um espaço dentro do Scanf para limpar o buffer
        de entrada, dessa forma se houver algum lixo armazenado, o 
        próximo scanf não recebe ele, o que pode ocorrer com
        o "enter", a quebra de linha na hora que enviamos a entrada
        pode ser armazenada em um char por acidente.
    */

    // Para limpar o buffer existem agluns métodos

    // fflush(stdin);       // windows
    // __fpurge(stdin);     // linux
    // setbuf(stdin, NULL); // Ambos

    char str2[50];
    printf("Digite uma String: ");

    setbuf(stdin, NULL);    // Limpa o buffer antes
    //scanf("%s", &str2);
    
    // Outros métodos de entrada:

    // Esse método não capta APENAS quebra de linha (enter)
    // Esse método não é utilizado, pois pode ser perigoso.
//    gets(str2);             

    // Esse método funciona de forma semelhante ao gets,
    // porém ele é mais seguro, pois armazena apenas
    // um número definido de caracteres. Ele também armazena
    // o enter.
    fgets(str2, 50, stdin);
    
    
    setbuf(stdin, NULL);    // Limpa o buffer depois

    printf("A string digitada foi: %s\n", str2);
}