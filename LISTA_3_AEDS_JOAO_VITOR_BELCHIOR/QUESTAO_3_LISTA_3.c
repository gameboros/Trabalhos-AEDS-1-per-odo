#include <stdio.h>

/* 
Autor: Joao Vitor Almeida Araujo Belchior
Data: 22/09/2021
Ultima att: 22/09/2021
Objetivo do programa:  Faça um procedimento que recebe 3 valores inteiros por parâmetro e os exiba em ordem 
crescente. Faça um programa que leia N conjuntos de 3 valores e acione o procedimento
para cada conjunto. (N deve ser lido do teclado)
*/

void procedimento(int a, int b, int c)
{
    if ((a < b) && (a < c))
    {
        if (b < c)
        {
            printf("Os numeros em ordem sao: %d %d %d \n", a, b, c);
        }
        else if (c < b)
        {
            printf("Os numeros em ordem sao: %d %d %d \n", a, c, b);
        }
    }
    else if ((b < a) && (b < c))
    {
        if (a < c)
        {
            printf("Os numeros em ordem sao: %d %d %d \n", b, a, c);
        }
        else if (c < a)
        {
            printf("Os numeros em ordem sao: %d %d %d \n", b, c, a);
        }
    }
    else if ((c < a) && (c < b))
    {
        if (a < b)
        {
            printf("Os numeros em ordem sao: %d %d %d \n", c, a, b);
        }
        else if (b < a)
        {
            printf("Os numeros em ordem sao: %d %d %d \n", c, b, a);
        }
    }
    else
    {
        printf("deu erro no programa joao sua mula");
    }
}

int main()
{
    int N;
    printf("Digite o numero de conjunto de tres valores que voce quer usar ");
    scanf("%d", &N);
    int a, b, c;
    for (int i = 0; i < N; i++)
    {
        printf("Digite tres valores separado por espaco ");
        scanf("%d %d %d", &a, &b, &c);
        procedimento(a, b, c);
    }
    return 0;
}