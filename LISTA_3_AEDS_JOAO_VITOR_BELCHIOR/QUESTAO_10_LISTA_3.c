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
Faça uma função que recebe a idade de um nadador por parâmetro e retorna a categoria 
desse nadador de acordo com a tabela abaixo.
Idade (anos) Categoria
5 a 7 F
8 a 10 E
11 a 13 D
14 a 15 C
16 a 17 B
Acima de 18 A
 Faça um programa que lê a idade de um nadador e imprime a categoria retornada pela 
 função
 */

char categoria (int idade)
{
    if (idade>=18)
    {
        return 'A';
    }
    else if((idade>=16)&&(idade<=17))
    {
        return 'B';
    }
    else if((idade>=14)&&(idade<=15))
    {
        return 'C';
    }
    else if((idade>=11)&&(idade<=13))
    {
        return 'D';  
    }
    else if((idade>=8)&&(idade<=10))
    {
        return 'E';
    }
    else if((idade>=5)&&(idade<=7))
    {
        return 'F';
    }
    else
    {
        return '?';
    }
}


int main (void)
{
    int idade=0;
    printf ("Escreva a idade do nadador: ");
    scanf ("%d", &idade);

    printf ("A categoria do nadador baseada em sua idade eh: %c", categoria(idade));




    return 0;
}