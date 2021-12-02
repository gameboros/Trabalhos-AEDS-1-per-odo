#include <stdio.h>
/* 
Autor: Joao Vitor Almeida Araujo Belchior
Data: 22/09/2021
Ultima att: 22/09/2021
Objetivo do programa:  

/* 
Autor: Joao Vitor Almeida Araujo Belchior
Data: 22/09/2021
Ultima att: 22/09/2021
Objetivo do programa:  
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o 
valor de S, calculado segundo a fórmula abaixo. 
S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n2+1)/(n+3)
Faça um programa que leia N e imprima o valor retornado pela função
 */


double S(int N)
{
    double s = 0;
    for (int i=0;i<N;i++)
    {
        s += ((((double)i*2)+1)/(i+3));
        //printf ("chegou %.2lf", s);
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
