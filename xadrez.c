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
    
     // -------------------------------
    // Movimento do Bispo com recursividade
    // -------------------------------
    int movimentoBispo = 5;
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita - recursivo):\n");
    moverBispoRecursivo(movimentoBispo);
    printf("\n");

     // -------------------------------
    // Movimento do Bispo com loops aninhados
    // Loop externo: movimento vertical
    // Loop interno: movimento horizontal
    // -------------------------------
    printf("Movimento do Bispo (5 casas com loops aninhados - diagonal cima e direita):\n");
    return 0;
}
