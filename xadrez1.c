#include <stdio.h>

int main ()
//Movendo o bispo na diagonal superior direita 5 vezes
{
    int j = 0;
    while (j < 5)
    {
        printf("cima\n direita\n");
        j++;
    }
    printf("\n");

    //Movendo a torre 5 casas para a direita

    for (int t = 0; t < 5; t++)
    {
        printf("Direita\n");
    }

    printf("\n");

    //Movendo a rainha 8 vezes para a esquerda 

    int i = 0;
    do
    {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
    
    printf("\n");

    
}