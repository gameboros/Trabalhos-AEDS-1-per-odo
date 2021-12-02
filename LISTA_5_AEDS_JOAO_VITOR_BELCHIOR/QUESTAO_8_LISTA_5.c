#include <stdio.h>
#include <stdlib.h>
/* 
Autor: Joao Vitor Almeida Araujo Belchior
Data: 22/09/2021
Ultima att: 22/09/2021
Objetivo do programa:  

/* 
Autor: Joao Vitor Almeida Araujo Belchior
Data: 22/10/2021
Ultima att: 22/10/2021
Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o 
segundo menor valor na variável do meio, e o maior valor na última variável. A função deve 
retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir 
os valores ordenados na tela no programa principal.

 */

int funcao(int num1, int num2, int num3)
{

    int *pnum1;
    int *pnum2;
    int *pnum3;
    int pnum = &num1;
    int pnum2 = &num2;
    int pnum3 = &num3;

    int troca1 = 0, troca2 = 0, troca3 = 0;

    if ((num1 == num2) && (num2 = num3))
    {
        return 1;
    }
    else if ((num1 > num2) && (num2 > num3))
    {
        return 0;
    }
    else if ((num1 > num2) && (num3 > num2))
    {
        troca2=num2;
        troca3=num3;
        
    }
    else if ((num2 > num1) && (num1 > num3))
    {
    }
    else if ((num2 > num1) && (num3 > num1))
    {
    }
    else if ((num3 > num1) && (num1 > num2))
    {
    }
    else if ((num3 > num1) && (num2 > num1))
    {
    }
    return 0;
}

int main()
{
    int num1, num2, num3;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    return 0;
}