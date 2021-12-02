#include <stdio.h>

/*
Autor: Joao Vitor Almeida Araujo Belchior
Data: 14/09/2021
Ultima att: 14/09/2021
#include <stdio.h>

/*
Autor: Joao Vitor Almeida Araujo Belchior
Data: 14/09/2021
Ultima att: 14/09/2021
Objetivo do programa: Em uma eleição presidencial existem quatro candidatos. Os votos são informados através 
de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte 
codificação: 
1,2,3,4 = voto para os respectivos candidatos;
5 = voto nulo; 
6 = voto em branco;
Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva:
- total de votos para cada candidato; 
- total de votos nulos; 
- total de votos em branco.
 
Como finalizador do conjunto de votos, tem-se o valor 0
*/



int main (void)
{
    int opcao, cand1=0, cand2=0, cand3=0, cand4=0, nulo=0, branco=0;

    do
    {
        printf ("Escreva de 1 a 4 para votar nos respectivos candidatos, 5 para voto nulo e 6 para voto em branco ");
        scanf ("%d", &opcao); // scan da opcao

        switch (opcao)
        {
            case 1:
            cand1 ++; // voto para o candidato 1
            break;
            case 2:
            cand2 ++; // voto para o candidato 2
            break;
            case 3:
            cand3 ++; // voto para o candidato 3
            break;
            case 4:
            cand4 ++; // voto para o candidato 4
            break;
            case 5:
            nulo ++; // voto para nulo
            break;
            case 6:
            branco ++; // voto para branco
            break;
            default:
            printf ("Opcao invalida"); // opcao diferente de 1 a 6
            break;


        }
    }
    while (opcao!=0);

    printf ("O total de votos para o candidato um eh de: %d\n Para o candidato dois eh de: %d\n Para o candidato tres eh de: %d\n E para o candidato quatro eh de: %d\n", cand1, cand2, cand3, cand4);
    printf ("O total de votos nulos eh de %d\n", nulo);
    printf ("O total de votos em branco eh de %d\n", branco);
    //printfs acima com resultados

return (0); // fim do programa
}