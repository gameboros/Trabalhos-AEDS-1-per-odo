#include <stdio.h>


/*
Autor: Joao Vitor Almeida Araujo Belchior
Data: 14/09/2021
Ultima att: 14/09/2021
Objetivo do programa: A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o 
salário e número de filhos de cada habitante. A prefeitura deseja saber: 
a) média do salário da população; 
b) média do número de filhos; 
c) maior salário; 
d) percentual de pessoas com salário até R$100,00.
*/

int main (void)
{

    double  salario=0, valorsalario=0, numpessoa=0, maiorSalario=0, filhos=0, valorfilhos=0, pobre=0,  opcao;
    
    do 
    {
        printf ("Qual seu salario? ");
        scanf ("%lf", &salario); // scan do salario do entrevistado
        if (salario<0)
        {
            printf ("O salario inserido eh negativo. fim do programa");
            return (0);
        }
        printf ("Quantos filhos voce tem? ");
        scanf ("%lf", &filhos); // scan do n de filhos do entrevistado
        if (salario>maiorSalario)
        {
            maiorSalario=salario; // definir como maior salario se for
        }
        if (salario<100)
        {
            pobre ++; // n de pessoas com salario menor q 100
        }
        valorsalario+=salario; // soma do total do valor dos salarios para fazer a media depois
        numpessoa ++; // numero de salarios recebidos
        valorfilhos+=filhos; // soma do total do numero total de filhos para fazer a media depois
        


        printf ("Digite 1 para refazer a pesquisa");
        scanf ("%lf", &opcao); // opcao para continuar entrevistando ou terminar o programa
    }
    while (opcao==1);

    printf ("A media de salario da populacao eh %.2lf\n",valorsalario/numpessoa); // resultado media salario
    printf ("A media do numero de filhos eh %.2lf\n", valorfilhos/numpessoa); // resultado media num filhos
    printf ("O maior salario eh %.2lf\n", maiorSalario); // resultado maior salario
    printf ("A porcentagem de pessoas com salario inferior a 100 reais eh de %.2lf porcento\n", (pobre/numpessoa*100)); // num pessoas com salario menor que 100

return (0); // fim do programa
}