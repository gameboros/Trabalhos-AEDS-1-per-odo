#include <stdio.h>


/*
Autor: Joao Vitor Almeida Araujo Belchior
Data: 14/09/2021
Ultima att: 14/09/2021
Objetivo do programa: Faça um programa que receba dez números e verifique se eles são divisíveis por 3 e 9 (ao 
mesmo tempo), por 2 e por 5. Caso algum número não seja divisível por nenhum desses 
números mostre a mensagem “Número não é divisível pelos valores”. Apresente também 
ao final a quantidade de números divisíveis por 3 e 9, por 2 e por 5
*/

int main (void)
{
    int num, div39=0, div2=0, div5=0;

    
    for (int totalnum=1; totalnum<=10;totalnum++) // repeticao para recolher 10 numeros
    {
        printf ("Escreva um numero: ");

        scanf ("%d", &num);
       
        
        
        
        if ((num%9!=0)&&(num%2!=0)&&(num%5!=0))
        {
            printf ("Numero nao eh divisivel pelos valores.");
            
        }
        else if ((num%9==0)&&(num%2==0)&&(num%5==0))
        {
            printf("Numero eh divisivel por 3 e 9, por 2 e por 5."); // se for divisivel pelas 3 opcoes
            
            div39 ++;
            div2 ++;
            div5 ++;
        }
        else if ((num%9==0)&&(num%2==0))
        {
            printf ("Numero eh divisivel por 3 e 9, e por 2."); // se for divisivei por 3 9 e 2
            div39 ++;
            div2 ++;
        }
        else if ((num%9==0)&&(num%5==0)) // se for divisivel por 3 e 9 e 5.
        {
            printf ("Numero eh divisivel por 3 e 9 e 5.");
            div39 ++;
            div5 ++;
        }
        else if ((num%2==0)&&(num%5==0)) // se for divisivel por 2 e 5
        {
            printf ("Numero eh divisivel por 2 e por 5."); 

            div2 ++;
            div5 ++;
        }
        else if (num%9==0) // ver se eh divisivel por 3 e 9 ao mesmo tempo. deixei só o 9 pq se for, automaticamente eh divisivel por 3.
        {
            printf ("Numero eh divisivel por 3 e 9. "); 
            
            div39 ++; // registra 1 numero a mais na memoria
        }
        else if (num%2==0) // ver se eh divisivel por 2
        {
            printf ("Numero eh divisivel por 2. ");
            
            div2 ++; // registra 1 numero a mais na memoria
        }
        else if (num%5==0) // ver se eh divisivel por 5
        {
            printf ("Numero eh divisivel por 5. ");
            div5 ++; // registra 1 numero a mais na memoria
        }
      

        printf ("\nEscreva um numero: ");
    }

    printf ("\nA quantidade de numeros divisiveis por 3 e 9 sao: %d\n A quantidade de numeros divisiveis por 2 sao: %d\n A quantidade de numeros divisiveis por 5 sao: %d\n", div39, div2, div5);
 // printf do resultado acima
return (0); // fim do programa
}











