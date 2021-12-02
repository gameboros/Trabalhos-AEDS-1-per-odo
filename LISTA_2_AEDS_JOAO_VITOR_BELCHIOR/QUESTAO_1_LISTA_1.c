#include <stdio.h>


/*
Autor: Joao Vitor Almeida Araujo Belchior
Data: 14/09/2021
Ultima att: 14/09/2021
Objetivo do programa: Fazer um programa leia uma seqüência de valores inteiros fornecida pelo usuário em uma 
linha de entrada e conte o número de valores positivos, negativos e zeros.
*/




int main (void)
{

  int num, positivo = 0, negativo = 0, zero = 0;

  printf("Digite um numero (99 finaliza o programa): ");
  scanf("%d",&num); // scanf do numero 

  while(num != 99 ) // realiza o programa se diferente de 99
  {
    if(num>0)
    {
      positivo ++; // adiciona um positivo no programa
    }
    else if (num==0)
    {
      zero ++; // adiciona um zero no programa
    }
    else 
      negativo ++; // adiciona um negativo no programa

    printf("Digite mais um numero (99 finaliza o programa): "); 
    scanf("%d",&num); // scaneia o numero novamente para continuar o programa ou finaliza-lo

  } 

  printf("Dentro dos numeros fornecidos tem %d positivos, %d negativos e %d zeros\n", positivo, negativo, zero); // resultado do programa





  printf("Fim do programa\n"); // fim do programa
  return 0;
}
























