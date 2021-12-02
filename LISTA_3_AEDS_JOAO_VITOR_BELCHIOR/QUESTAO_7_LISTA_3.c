#include <stdio.h>
#include <stdbool.h>
/* 
Autor: Joao Vitor Almeida Araujo Belchior
Data: 22/09/2021
Ultima att: 22/09/2021
Objetivo do programa:  
Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. 
A função deve retornar um valor lógico (true ou false). Faça um programa que lê N 
números e para cada um deles exibe uma mensagem informando se ele é positivo ou não, 
dependendo se foi retornado verdadeiro ou falso pela função.
 */

bool funcao(int valor)
{
    if (valor >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int opt=0;
    int valor=0;
    do
    {
        printf ("Insira um valor ");
        scanf ("%d", &valor);
        if (funcao(valor)==true)
        {
            printf ("O valor eh positivo. \n");
        }
        else
        {
            printf ("O valor eh negativo. \n");
        }
    
        printf ("Insira qualquer numero para continuar o programa ou 0 para finalizar. \n");
        scanf ("%d", &opt);
    } while (opt!=0);
    
return 0;
}