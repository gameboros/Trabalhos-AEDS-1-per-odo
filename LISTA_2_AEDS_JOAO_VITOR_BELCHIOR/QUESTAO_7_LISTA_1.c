#include <stdio.h>

/*
Autor: Joao Vitor Almeida Araujo Belchior
Data: 14/09/2021
Ultima att: 14/09/2021
Objetivo do programa: Faça um programa que imprima os L primeiros elementos da série de Fibonacci. Por 
exemplo, se o usuário digitou o número 40, deverão ser apresentados os 40 números da 
sequência na tela

*/

int main(void)
{
    int n1 = 0, n2 = 1, n3, i, num;
    printf("Insira o numero de termos");
    scanf("%d", &num); // scan do numero de termos
    printf("\n%d %d", n1, n2); // inicio da serie de fibonacci
    for (i = 2; i < num; ++i)  //loop iniciando do 2
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0; // fim do programa
}