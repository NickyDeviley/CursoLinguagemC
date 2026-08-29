#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Crie uma função que recebe um inteiro N e um caractere e imprime esse caractere N vezes.
// Função recursiva direta e em cauda
void imprime_caractere (int n, char c) {

    if (n == 0) {
        return;
    }
    printf("%c", c);
    return imprime_caractere(n - 1, c);
}

// Faça um programa que calcule a média de n númerosinformados pelo usuário até ele informar o número 0
int soma = 0;
int contador_numeros_info = 0;

// Função recursiva direta em cauda
void calculaMedia () {

    printf("Digite um número ou 0 para finalizar a execução: \n");
    int entrada;
    scanf("%d", entrada);
    if (entrada == 0) {
        return;
    }
    soma += entrada;
    contador_numeros_info++;
    return calcula_media();

}

// Crie um prograam que solicita do usuário a posição de um termo (int) e calcule qual é este termo.
// 0 1 1 2 3 5 8 13 21 ... n
// funcao recursiva direta não em cauda
int fibonacci (int posicao) {

    if (posicao == 0) {
        return 0;
    }
    if (posicao == 1) {
        return 1;
    }
    return fibonacci(posicao - 1) + fibonacci(posicao - 2);

}

// O programa deve verificar se o caractere fornecido pelo usuário está presente na string
int verificaCaractere(char *string, char c) {

    if (string[0] == c) { return 1; }
    if (string[0] == '\0') { return 0; }
    return verificaCaractere(string + 1, c);

}

// Padrão C, recebendo argumentos de inicialização e
// método main retornando um inteiro.
int main (int argc, char *argv[]) {

    imprime_caractere(10, 'c');
    printf("\n");

    calculaMedia();
    printf("Média: %f", (float)soma / contador_numeros_info);

    printf("Valor fibonnaci na posição 4: %d\n", fibonacci(4));

    char string[] = "Meu nome não é Jhony!";
    char c = 'j';
    printf("j esta na string? %d", verificaCaractere(string, c));

    return 0;   // Padrão C
}

