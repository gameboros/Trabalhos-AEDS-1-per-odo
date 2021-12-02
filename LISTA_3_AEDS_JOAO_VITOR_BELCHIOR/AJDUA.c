#include <math.h>
#include <stdlib.h>
#include <stdio.h>
// inclui as bibliotecas

double resultado(int numero, int contador); // Descreve o protótipo da função

int main (void) { // inicia a função main
   int contador, numero;  // declara as variáveis em numeros inteiros
   double result; // declara variáveis em números reais
    
    printf("Calcularemos o resultado da seguinte equação: S = 2/4 + 5/5 + 10/6 + 17/7 + 28/8 +...(n2+1)/(n+3). Para isso, nos dê o valor de N (inteiro):\n "); // imprime uma mensagem na tela
    scanf("%d", &numero); // recebe a resposta e a guarda na variável numero
     
    
    for (contador = 1; contador <= numero; contador++) // inicia um loop
    {
        resultado(numero, contador); // inicia a função resultado
    }
    result = resultado(numero,contador); // guarda o valor retornado pela função 
    
    printf("O valor de S é: %.2lf\n", result); // imprime a mensagem final

    return 0; // finaliza o programa
}
double resultado(int numero, int contador) // inicia a função
{

 double equacao, result; // declara as variáveis em numeros reais


    for (int i = 1; i <= contador; i++) // começa um loop
    {
        equacao += ((i * i) + 1) / (i + 3); // realiza a equação necessria 
    }
    
    result = equacao; // retorna o valor de equação na variavel result
   
    return result; // retorna o valor à função
}