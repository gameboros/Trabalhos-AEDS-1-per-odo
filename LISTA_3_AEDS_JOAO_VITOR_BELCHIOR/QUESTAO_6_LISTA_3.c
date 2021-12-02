#include <stdio.h>

/* 
Autor: Joao Vitor Almeida Araujo Belchior
Data: 22/09/2021
Ultima att: 22/09/2021
Objetivo do programa:  
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o 
valor de S, calculado segundo a fórmula abaixo. 
S = 1 + 1/1! + 1/2! + 1/3! + ...+1 /N!
Faça um programa que leia N e imprima o valor retornado pela função
 */


double S(int N)
{
    double denominador=1;
    double s=1;
    for (int i=1;i<=N;i++)
    {
        for (int j = i; j >= 1; j--)
        {
            denominador *= j;
        }
        s+=(1/denominador);
    }
    return s;
}

int main (void)
{
    int N;

    printf ("Insira quantos termos vc quer calcular ");
    scanf ("%d", &N);
    
    printf ("O resultado eh %.2lf", S(N));
    return 0;
}
