#include <stdio.h>

// Array, sequencia de variáveis
// String, sequencia de variaveis do tipo char
// vetor, sequencia de variaveis sem tamanho definido
void main () {

    //char nome[] = {'N', 'i', 'c', 'h', 'o', 'l', 'a', 's'};

    // Possiveis maneiras de inciializar uma string:

    // maneira 1:
    char str[10];
    str[0] = 'O';
    str[1] = 'i';
    str[2] = '!';
    str[3] = '\0';  // Caracter que indica o final da string


    // maneira 2:
    char str2[] = {'O', 'i', '!', '\0'};

    // maneira 3:
    char str3[] = "Oi!";

    /*
        Tudo entre aspas duplas é String, aqui na linguagem C não existe o
        tipo String, nós precisamos simular Strings utilizando vetores do
        tipo char, entre as maneiras apresentadas de inicializar uma string,
        a terceira maneira mostra que, se utilizar-mos aspas duplas, não
        precisamos atribuir um caractere que marque o final da String,
        nem separar cada caractere.
    */

}