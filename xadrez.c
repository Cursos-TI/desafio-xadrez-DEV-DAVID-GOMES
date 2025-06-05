#include <stdio.h>

     // ------------------------------------------
    // Função recursiva para movimentar a Torre
    // Movimento: direita
    // ------------------------------------------
    void moverTorre(int casas)
    {
        if (casas == 0)
            return;
        printf("Direita\n");
        moverTorre(casas - 1); // chamada recursiva
    }

    // ------------------------------------------
    // Função recursiva para movimentar o Bispo
    // Movimento: diagonal cima e direita
    // ------------------------------------------
    void moverBispoRecursivo(int casas)
    {
        if (casas == 0)
            return;
        printf("Cima Direita\n");
        moverBispoRecursivo(casas - 1); // chamada recursiva
    }

    // ------------------------------------------
    // Função recursiva para movimentar a Rainha
    // Movimento: esquerda
    // ------------------------------------------
    void moverRainha(int casas)
    {
        if (casas == 0)
            return;
        printf("Esquerda\n");
        moverRainha(casas - 1); // chamada recursiva
    }

int main()
{
     // -------------------------------
    // Movimento da Torre com recursividade
    // -------------------------------
    int movimentoTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(movimentoTorre);
    printf("\n");
   
    return 0;
}
