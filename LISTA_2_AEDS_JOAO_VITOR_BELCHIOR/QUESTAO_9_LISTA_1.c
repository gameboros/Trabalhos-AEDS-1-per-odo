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
Objetivo do programa: Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele
comercializa. Para isto, mandou digitar uma linha para cada mercadoria com o preço de 
compra e de venda de cada uma. A última linha contém preço de compra igual a 0. Escreva 
um programa que:
a) Determine e escreva quantas mercadorias proporcionaram:
i) Lucro < 10%
ii) 10% <= lucro <= 20%
iii) Lucro > 20%
b) Determine e escreva o valor total de compra e de venda de todas as mercadorias,
assim como o lucro total.
*/


int main (void)
{
    int compra=0, compraTotal=0, venda=0, vendaTotal=0, lucro=0;
    int i=0, ii=0, iii=0;
    do
    {
        printf ("Escreva o valor de compra das mercadorias ");
        scanf ("%d", &compra);
        printf ("Escreva o valor de venda das mercadorias ");
        scanf ("%d", &venda);
        compraTotal+=compra;
        vendaTotal+=venda;
        lucro=venda - compra;
        if (lucro<(compra*0.1))
        {
            i++;
        }
        if ((lucro>=(compra*0.1))&&(lucro<=(compra*0.2)))
        {
            ii++;
        }
        if (lucro>(compra*0.2))
        {
            iii ++;
        }
    
    } while (compra!=0);
    
printf ("Vendas com lucro abaixo de 10 porcento: %d\n", i);
printf ("Vendas com lucro maior ou igual a 10 porcento e menor ou igual a 20 porcento %d\n", ii);
printf ("Vendas com lucro maior que 20 porcento %d\n", iii);
printf ("Valor total de compra eh %d e o valor total de venda eh %d, e o lucro total eh de %d", compraTotal, vendaTotal, (vendaTotal-compraTotal));


return (0); // fim do programa
}
