#include <stdio.h>


/*
Autor: Joao Vitor Almeida Araujo Belchior
Data: 14/09/2021
Ultima att: 14/09/2021
Objetivo do programa: Escreva um algoritmo que lê um valor n inteiro e positivo e que calcula a seguinte soma: 
S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
O algoritmo deve escrever cada termo gerado e o valor final de S.

*/


int main (void)
{
    double S=0, total=0;
    int n=0;

    printf ("Insira um valor inteiro e positivo: "); 
    scanf ("%d", &n); // scan do numero de termos gerados

    for (int i=1;i<=n;i++) // loop for
    {
        S=1/(double)i; // termo gerado
        printf ("%.2lf\n", S); // print do termo especifico gerado em cada loop

        total +=S; // cada termo gerado guardado na soma total

    }


    printf ("O total eh %.2lf", total); // resultado total





return (0); // fim do programa
}
