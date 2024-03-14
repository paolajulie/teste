#include <stdio.h>

//Dado a sequ�ncia de Fibonacci, onde se inicia por 0 e 1 e o pr�ximo valor sempre ser� a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...),
//escreva um programa na linguagem que desejar onde, informado um n�mero, ele calcule a sequ�ncia de Fibonacci e retorne uma mensagem avisando se o n�mero informado pertence ou n�o a sequ�ncia.

int verificaFibonacci(int num) {
    int anterior = 0, atual = 1, proximo;


    while (atual <= num) {
        if (atual == num)
            return 1;


        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }


    return 0;
}

int main() {
    int numero;


    printf("Digite um numero para verificar se pertence a sequencia de Fibonacci: ");
    scanf("%d", &numero);


    if (verificaFibonacci(numero))
        printf("%d pertence a sequencia de Fibonacci.\n", numero);
    else
        printf("%d nao pertence a sequencia de Fibonacci.\n", numero);

    return 0;
}
