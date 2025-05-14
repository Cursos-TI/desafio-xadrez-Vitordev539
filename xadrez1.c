#include <stdio.h>

int main()
// Movendo o bispo na diagonal superior direita 5 vezes
{
    int j = 0;
    while (j < 5)
    {
        printf("cima\n direita\n");
        j++;
    }
    printf("\n");

    // Movendo a torre 5 casas para a direita

    for (int t = 0; t < 5; t++)
    {
        printf("Direita\n");
    }

    printf("\n");

    // Movendo a rainha 8 vezes para a esquerda

    int i = 0;
    do
    {
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    printf("\n");

    //Movendo o cavalo duas vezes para cima e uma vez para a esquerda fromando um L

    int c = 1;

    while (c--)
    {
        for (int n = 0; n < 2; n++)
        {
            printf("Cima,"); //imprimindo cima duas vezes)
        }
        printf("Esquerda"); // imprimindo esquerda uma vez formando o movimento em L
    }

    printf("\n");


}