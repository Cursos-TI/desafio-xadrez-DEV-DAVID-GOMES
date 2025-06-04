#include <stdio.h>


int main() {

      // -------------------------------
    // Movimento da Torre (5 casas para a direita)
    // Usando estrutura de repetição: FOR
    // -------------------------------
    int movimentoTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");

    for (int i = 1; i <= movimentoTorre; i++) {
        // A torre se move apenas em linha reta (horizontal ou vertical)
        // Neste caso, estamos simulando movimento horizontal para a direita
        printf("Direita\n");
    }

    printf("\n");





    return 0;
}
