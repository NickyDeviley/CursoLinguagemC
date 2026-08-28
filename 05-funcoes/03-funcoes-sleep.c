#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>     // Linux - Função Sleep entrada em segundos | s minúsculo
//#include <windows.h>    // Windows - função sleep entrada em milissegundos | S maiusculo

void imprimeCabecalho();
void imprimeSoma();
void imprimeFatorial();

void imprimeCabecalho () {

    system("clear");// Permite usar comandos do terminal
    printf("==============================\n");
    printf("      %s\n", "Soma ou Fatorial");
    printf("==============================\n");

}

void imprimeSoma () {

    printf("Soma:\n");
    int a, b;
    scanf("%d %i", &a, &b);
    printf("A soma de ambos os números é: %d\n", a + b);

}

void imprimeFatorial () {

    printf("Factorial:\n");
    int n;
    scanf("%d", &n);
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Factorial: %d\n", factorial);

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

    do {
        switch (option) {
            case 0:
                imprimeCabecalho();
                printf("Exiting...\n");
                sleep(2);
                break;
            case 1:
                imprimeCabecalho();
                imprimeSoma();
                sleep(2);
                break;
            case 2:
                imprimeCabecalho();
                imprimeFatorial();
                sleep(2);
                break;
            default:
                imprimeCabecalho();
                printf("Invalid Argument!\n");
                sleep(2);
                break;

        }
    } while (option != 0);

    return 0;   // Padrão C
}