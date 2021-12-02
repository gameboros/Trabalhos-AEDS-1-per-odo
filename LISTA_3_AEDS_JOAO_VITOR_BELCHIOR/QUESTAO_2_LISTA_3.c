#include <stdio.h>

/* 
Autor: Joao Vitor Almeida Araujo Belchior
Data: 22/09/2021
Ultima att: 22/09/2021
Objetivo do programa:  A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados 
sobre o salário e número de filhos. Faça um procedimento que leia esses dados para um 
número não determinado de pessoas, calcule e exiba a média de salário da população (a
condição de parada pode ser um flag ou a quantidade N). Faça um programa que acione o 
procedimento.

*/

void procedimento()
{
    int salarioTotal = 0, salario, entrevistados = 0, filhos, filhosTotal = 0;
    double resultado = 0;

    printf("Insira quanto voce recebe de salario: ");
    scanf("%d", &salario); // scan salario do entrevistado
    printf("Insira quantos filhos voce tem: ");
    scanf("%d", &filhos); // filhos eh inutil ao program mas pediu fazer o que
    do
    {
        salarioTotal += salario;
        filhosTotal += filhos;
        entrevistados++;

        printf("Insira quanto voce recebe de salario, ou insira 0 para terminar: ");
        scanf("%d", &salario); // scanf salario proximo entrevistado ou 0 termina o programa
        printf("Insira quantos filhos voce tem: ");
        scanf("%d", &filhos); // scan filhos
    } while (salario != 0);   // flag para terminar o loop

    resultado = salarioTotal / entrevistados; // calculo resultado

    printf("A media de salario eh %.2lf ", resultado); // printf resultado
}

int main()
{
    procedimento(); // chamada do procedimento
    return 0; // fim do programa
}