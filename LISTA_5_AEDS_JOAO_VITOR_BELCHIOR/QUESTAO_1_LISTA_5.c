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
Objetivo do programa:  
Escreva um programa em C que leia dois inteiros, armazenando-os em variáveis. O programa 
deve comparar os endereços das variáveis e exibir o maior deles
 */

void main ()
{
    int num1, num2;
    
    printf ("Escreva dois inteiros: ");
    scanf ("%d %d", &num1, &num2);

    if (&num1>&num2)
    {
        printf ("O endereco de maior valor eh da variavel num1, de %x\n", &num1);
    }
    else if (&num2>&num1)
    {
        printf ("O endereco de maior valor eh da variavel num2, de %x\n", &num2);
    }






return 0;
}