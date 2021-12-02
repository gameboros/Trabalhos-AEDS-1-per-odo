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
Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 
valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda 
variável. Escreva o conteúdo das 2 variáveis na tela no programa principal.
 */

void procedimento(num1, num2)
{
    if (num2 > num1)
    {

        int troca1 = 0, troca2 = 0;
        int *pnum1;
        int *pnum2;
        pnum1 = &num1;
        pnum2 = &num2;
        troca1 = num1;
        troca2 = num2;
        *pnum1 = troca2;
        *pnum2 = troca1;
    }
}

int main()
{
    int num1 = 0, num2 = 0;

    printf("Insira dois inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("Variavel num1 antes do procedimento = %d\nVariavel num2 antes do procedimento = %d\n", num1, num2);
    procedimento(num1, num2);
    printf("Variavel num1 depois do procedimento %d\nVariavel num2 depois do procedimento %d\n", num1, num2);

    return 0;
}