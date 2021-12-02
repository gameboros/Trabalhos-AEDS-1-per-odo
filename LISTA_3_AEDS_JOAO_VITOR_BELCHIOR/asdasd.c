#include <stdio.h>
#include <stdbool.h>



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

bool funcao (int lado1, int lado2, int lado3)
{
    if ((lado1 < lado2 + lado3) || (lado2 < lado1 + lado3) || (lado3 < lado1 + lado2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int lado1=0, lado2=0, lado3=0;

    for (int i=0; i<5;i++)
    {
        printf ("Digite os tres lados de um triangulo separados por espaco: ");
        scanf ("%d %d %d", &lado1, &lado2, &lado3);
        if (funcao(lado1, lado2, lado3) == true)
        {
            printf ("Triangulo = true\n");
        }
        else 
        {
            printf ("Triangulo = false");
        }
        procedimento (lado1, lado2, lado3);
    }
    return 0;
}