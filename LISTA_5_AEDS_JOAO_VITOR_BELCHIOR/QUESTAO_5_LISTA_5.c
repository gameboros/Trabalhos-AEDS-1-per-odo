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
Escreva um programa em C que declare variáveis para armazenar um valor inteiro, um valor 
real e um caracter. Deve existir no programa ponteiros associados a cada um deles. O 
programa deve solicitar novos dados para as variáveis e elas devem ser modificadas usando 
os respectivos ponteiros. Exiba os endereços e os conteúdos de todas as variáveis e ponteiros
antes e após a alteração.
 */

void main ()
{
    int inteiro=0;
    int novoInteiro=0;
    double real=0;
    double novoReal=0;
    char caractere=0;
    char novoCaractere=0;

    int *pInteiro;
    double *pReal;
    char *pCaractere;

    printf ("Escreva um numero inteiro, um real e um caractere: ");
    scanf ("%d %lf %c", &inteiro, &real, &caractere);

    pInteiro= &inteiro;
    pReal = &real;
    pCaractere = &caractere;

    printf ("Valor do inteiro: %d, com endereco %x\n Valor do real: %.2lf, com endereco %x\n Valor do caractere: %c, com endereco %x\n", inteiro, &inteiro, real, &real, caractere, &caractere);

    printf ("Escreva um novo numero inteiro, um real e um caractere: \n");
    scanf ("%d %lf %c", &novoInteiro, &novoReal, &novoCaractere);
    *pInteiro=novoInteiro;
    *pReal=novoReal;
    *pCaractere=novoCaractere;

    printf ("Valor do inteiro: %d, com endereco %x\n Valor do real: %.2lf, com endereco %x\n Valor do caractere: %c, com endereco %x", inteiro, &inteiro, real, &real, caractere, &caractere);



    return 0;
}