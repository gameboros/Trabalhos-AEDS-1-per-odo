#include <stdio.h>


/*
Autor: Joao Vitor Almeida Araujo Belchior
Data: 14/09/2021
Ultima att: 14/09/2021
Objetivo do programa: Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor 
de E:
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + .... + 1 / N
*/

int main (void)
{
     int n;
    double E = 1, resultado;

    printf ("Escreva um valor inteiro e positivo: "); 
    scanf ("%d", &n); // scan do N

    for (int i=1; i<=n;i++) // calculo do E
    {
        double fatorial=1;
        for(int j = i; j >= 1; j--) // for do fatorial correndo inversamente ao for calculando o E
            {
            fatorial *= (double)j;
            }
        E += 1/fatorial;
        resultado=E;
    }

    printf ("O resultado eh %.4lf", resultado); // resultado
 











return (0); // fim do programa
}