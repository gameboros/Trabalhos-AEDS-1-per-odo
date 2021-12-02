#include <stdio.h>

/* 
Autor: Joao Vitor Almeida Araujo Belchior
Data: 22/09/2021
Ultima att: 22/09/2021
Objetivo do programa:  
Faça um procedimento que recebe a média final de um aluno, identifica e exibe o seu 
conceito, conforme a tabela abaixo. Faça um programa que leia a média de N alunos, 
acionando o procedimento para cada um deles. (N deve ser lido do teclado)
Nota Conceito
Até 39 F
40 a 59 E
60 a 69 D
70 a 79 C
80 a 89 B
A partir de 90 A
 */

char avaliacao(int media)
{
    char resultado;

    if (media >= 90)
    {
        return 'A';
    }
    else if ((media >= 80) && (media <= 80))
    {
        return 'B';
    }
    else if ((media >= 70) && (media <= 79))
    {
        return 'C';
    }
    else if ((media >= 60) && (media <= 79))
    {
        return 'D';
    }
    else if ((media >= 40) && (media <= 59))
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}

int main(void)
{
    int N = 0;
    int media = 0;

    do
    {
        printf("Qual a media do aluno? ");
        scanf("%d", &media);

        printf("a nota conceito obtida foi %c \n", avaliacao(media));
    } while (media >= 0);

    return 0;
}

