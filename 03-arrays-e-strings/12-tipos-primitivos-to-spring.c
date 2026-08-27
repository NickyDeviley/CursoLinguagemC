#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main () {
    // Converter tipo primitivo para string

    // itoa - int to array
    // ftoa - float to array    - Não é da biblioteca base
    // ltoa - long to array
    // sprintf - geral

    // itoa - int para array (string)
    int i = 12345;
    char string[10];
    //variavel inteira, string, base (2,8,10,16);
    itoa(i, string, 10);
    printf("%s\n", string);

    // ftoa
//    char res[20];
//    float n = 233.007;
    // Variavel float, string, qtos números depois da vírgula
//    ftoa(n, res, 3);
//    printf("The floating point number is: %s\n", res);

    // ltoa
    long num = 1234567890L;
    char buffer[20];
    // variavel long int, string, 10
    ltoa(num, buffer, 10);
    printf("The long integer as a string is: %s\n", buffer);

}