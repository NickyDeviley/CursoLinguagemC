#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main () {
    // Converter tipo string para valores numéricos utilizamos alguns métodos

    // atoi - array para inteiro
    // atof - array para inteiro
    // atol - array para long int

    // Convertendo String para inteiro
    char a[4] = "100";
    int value = atoi(a);
    printf("Value = %d\n", value);

    // Convertendo String para float
    char b[4] = "3.17";
    float value_float = atof(b);
    printf("Value = %d\n", value_float);

    // Convertendo string para long int
    char c[15] = "1234525";
    long int value_li = atol(c);
    printf("Value = %li\n", value_li);


}