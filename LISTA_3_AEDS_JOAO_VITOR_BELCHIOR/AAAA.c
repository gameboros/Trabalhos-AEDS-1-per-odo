#include <stdio.h>

/* 
Autor: Joao Vitor Almeida Araujo Belchior
Data: 22/09/2021
Ultima att: 22/09/2021
Objetivo do programa:  Escreva um procedimento que recebe 3 valores reais X, Y e Z e que verifique se esses 
valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual é o 
tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a 
seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor 
do que a soma do comprimento dos outros dois lados. O procedimento deve identificar o 
tipo de triângulo formado observando as seguintes definições: 
- Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
- Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais. 
- Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
 Faça um programa que leia um número indeterminado de triângulos (valores dos 3 lados) e 
 para cada triângulo, acione o procedimento.
 */

int procedimento(int lado1, int lado2, int lado3)
{
    if ((lado1 < lado2 + lado3) || (lado2 < lado1 + lado3) || (lado3 < lado1 + lado2))
    {
        if ((lado1 == lado2) && (lado2 == 3))
        {
            printf("Triangulo equilatero \n");
        }
        else if ((lado1 == lado2) || (lado3 == lado2) || (lado1 == lado3))
        {
            printf("Triangulo isoceles \n");
        }
        else
        {
            printf ("Triangulo escaleno \n");
        }
    }
    else
    {
        printf("Nao forma um triangulo \n");
    }
}

int main(void)
{
    int lado1=0, lado2=0, lado3=0, opt=0;
    do 
    {
        printf ("Digite os tres lados de um triangulo separados por espaco: ");
        scanf ("%d %d %d", &lado1, &lado2, &lado3);
        procedimento (lado1, lado2, lado3);
        printf("\nPara continuar digite qualquer numero alem de 0 ");
        scanf("%d", &opt);
    } while (opt != 0);
    return 0;
}