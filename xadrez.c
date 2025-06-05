#include <stdio.h>

int main()
{

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
    return 0;
}
