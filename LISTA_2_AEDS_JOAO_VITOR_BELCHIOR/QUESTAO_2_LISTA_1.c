#include <stdio.h>


/*
Autor: Joao Vitor Almeida Araujo Belchior
Data: 14/09/2021
Ultima att: 14/09/2021
Objetivo do programa: Adaptar o programa acima para que ele calcule o percentual dos valores positivos, 
negativos e zeros em relação ao total de valores fornecidos.

*/

int main (void)
{

  double num, positivo = 0, negativo = 0, zero = 0;

  printf("Digite um numero (99 finaliza o programa): ");
  scanf("%lf",&num); // scanf do numero 

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
    scanf("%lf",&num); // scaneia o numero novamente para continuar o programa ou finaliza-lo

  } 

    printf("Dentro dos numeros fornecidos, %.2lf porcento sao positivos, ", (positivo/(positivo+negativo+zero)*100)); // resultado do programa adaptado
    printf("%.2lf sao negativos ", (negativo/(positivo+negativo+zero)*100)); // printf separado para melhor clareza do programa(nao estender muito a linha )
    printf("e %.2lf sao zeros.\n",((zero/(positivo+negativo+zero)*100))); // printf separado para melhor clareza do programa(nao estender muito a linha )



  printf("Fim do programa\n"); // fim do programa
  return 0;
}

