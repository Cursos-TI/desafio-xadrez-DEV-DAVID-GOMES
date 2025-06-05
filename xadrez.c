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

    
    for (int i = 0; i < movimentoBispo; i++) {
        for (int j = 0; j < 1; j++) { // movimento horizontal (direita)
            printf("Direita ");
        }
        printf("Cima\n"); // movimento vertical (cima)
    }

    printf("\n");


    
    // -------------------------------
    // Movimento da Rainha com recursividade
    // -------------------------------
    int movimentoRainha = 8;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(movimentoRainha);
    printf("\n");

      // -------------------------------
    // Movimento do Cavalo com loops complexos
    // Movimento em L: duas casas para cima e uma para a direita
    // Usando FOR + WHILE e controle com break/continue
    // -------------------------------
    printf("Movimento do Cavalo (movimento em L: 2 casas para cima e 1 casa para a direita):\n");

    int movimentosCavalo = 1; // número de vezes que o cavalo se moverá

    for (int i = 0; i < movimentosCavalo; i++) {
        int passosVerticais = 0;

        while (passosVerticais < 2) {
            if (passosVerticais == 1) {
                // Demonstração do uso do continue: ignora uma instrução fictícia
                passosVerticais++;
                continue;
            }
            printf("Cima\n");
            passosVerticais++;
        }

        for (int j = 0; j < 2; j++) {
            if (j == 0) {
                printf("Direita\n");
                break; // após um passo à direita, sai do loop
            }
        }
    }
    return 0;
}
