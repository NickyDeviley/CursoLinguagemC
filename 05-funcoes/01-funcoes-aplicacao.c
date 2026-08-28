#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void imprimeCabecalho () {

    system("clear");// Permite usar comandos do terminal
    printf("==============================\n");
    printf("      %s\n", "Soma ou Fatorial");
    printf("==============================\n");

}

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {
    /*
        Sintaxe de criação de uma função é:

        tipoDeRetorno nomeDaFunção ( Parâmetros ) { corpoDaFunção }
    */


    imprimeCabecalho ();
    printf("0 - Exit\n");
    printf("1 - Sum\n");
    printf("2 - Factorial\n");
    printf("Choose an option: ");

    int option;
    scanf("%d",&option);

    switch (option) {
        case 0:
            imprimeCabecalho ();
            printf("Exiting...\n");
            break;
        case 1:
            imprimeCabecalho ();
            printf("Soma:\n");
            int a, b;
            scanf("%d %i", &a, &b);
            printf("A soma de ambos os números é: %d\n", a + b);
            break;
        case 2:
            imprimeCabecalho ();
            printf("Factorial:\n");
            int n;
            scanf("%d", &n);
            int factorial = 1;
            for (int i = 1; i <= n; i++) {
                factorial *= i;
            }
            printf("Factorial: %d\n", factorial);
            break;
        default:
            imprimeCabecalho ();
            printf("Invalid Argument!\n");
            break;

    }

    return 0;   // Padrão C
}