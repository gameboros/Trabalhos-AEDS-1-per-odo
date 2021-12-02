#include <stdio.h>

/* 
Autor: Joao Vitor Almeida Araujo Belchior
Data: 22/09/2021
Ultima att: 22/09/2021
Objetivo do programa:  Faça um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a 
letra for ‘A’, o procedimento calcula e escreve a média aritmética das notas do aluno, se for 
‘P’, calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). Faça um programa que leia 3 
notas de N alunos e acione o procedimento para cada aluno. (N deve ser lido do teclado)
*/

double notas(int a, int b, int c,  char d) // procedimento que calcula as notas baseada na opcao
{
    int nota;
    switch (d)
    {
        case 'A' : //opcao aritmetica
            nota = (a + b + c)/3;
            break;
        case 'P' : //opcao ponderada
            nota  = ((a * 5) + (b * 3) + (c * 2))/3;
            break;
        default :
            nota = 69; // opcao diferente das possiveis
            break;
    }

return nota;
}

int main (void)
{
    int nota1, nota2, nota3, opcao, N;
    printf ("De quantos alunos voce gostaria de fazer a media das notas? ");
    scanf ("%d", &N); // numero de alunos a serem lidas as notas

    for (int i=1; i<=N; i++) // for para rodar ate chegar ao numero N de alunos
    {
        printf ("Digite as tres notas do aluno, separadas por espaco: ");
        scanf ("%d %d %d", &nota1, &nota2, &nota3); // scan das notas
        
        printf ("Digite A para media aritmetica ou P para media ponderada : pesos 5, 3 e 2 ");
        scanf (" %c", &opcao); // scan da opcao

        printf ("A nota do aluno %d eh %.2lf", i, notas(nota1, nota2, nota3, opcao)); // resultado das notas do respectivo aluno baseada na opcao de media escolhida

    }

return 0; // fim do programa
}