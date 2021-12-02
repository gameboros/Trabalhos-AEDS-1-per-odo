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
Faça uma função que lê um número indeterminado de notas de alunos, calcula e retorna a 
média das notas dos alunos aprovados (nota maior ou igual a 6). Faça um programa que lê 
o número de alunos e imprime a média retornada pela função.
 */

double mediaAprovados(int alunos)
{
    int nota = 0;
    double notaTotal=0;
    double alunosTotais=alunos;

    for (int i = 0; i < alunos; i++)
    {
        printf("Escreva a nota do aluno: ");
        scanf("%d", &nota);
        if (nota >= 6)
        {
            notaTotal += nota;
        }
        else
        {
            alunosTotais --;
        }
    }
    notaTotal/=alunosTotais;
    return notaTotal;
}
/**/
int main(void)
{
    int alunos;

    printf("Digite o numero de alunos ");
    scanf ("%d", &alunos);

    printf ("A media das notas dos alunos aprovados eh: %.2lf", mediaAprovados(alunos));

    return 0;
}