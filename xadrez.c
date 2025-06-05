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
    return 0;
}
