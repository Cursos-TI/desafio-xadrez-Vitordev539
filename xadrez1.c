#include <stdio.h>

void moverBispo(int casas){
    if(casas > 0) 
        
        //Chamada recursiva
        moverBispo(casas - 1);
    
}
//movendo a torre para a direita
void moverTorre(int casas){
    if(casas > 0){
        printf("direita\n");
        //Chamada recursiva
        moverTorre(casas - 1);
    }
}
void moverRainha(int casas){
    if(casas > 0){
        printf("esquerda\n");
        //Chamada recursiva
        moverRainha(casas - 1);
    }
}
void moverCavalo(int casas){
    if(casas > 0)
        //Chamada recursiva
        moverCavalo(casas - 1);
    
}


int main()

{
    moverBispo (5);
    printf("Movimento do bispo\n");
   
    // Movendo o bispo 5 casas para a diagonal superior direita
    for (int i = 0; i < 5; i++)
      for (int j = 0; j < 5; j++)
    {
        if(i == j){
        printf("Cima\n");
        printf("Direita\n");
        }
        
    }
    

    printf("\n");

    // Movendo a torre 5 casas para a direita
    printf("Movimento da torre\n");
    moverTorre(5);
    printf("\n");

    // Movendo a rainha 8 vezes para a esquerda
    printf("Movimento da rainha\n");
    moverRainha(8);
    printf("\n");

    //Movendo o cavalo duas vezes para cima e uma vez para a esquerda formando um L

    moverCavalo(2);
    printf("Movimento do cavalo\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 1; j++)
        {
            if(i == j){
                printf("Cima\n");
                printf("Cima\n");
                printf("Esquerda\n");
            }
        }
    
    printf("\n");

}