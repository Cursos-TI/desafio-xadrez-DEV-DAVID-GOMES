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

     // -------------------------------
    // Movimento do Bispo (5 casas na diagonal: cima e direita)
    // Usando estrutura de repetição: WHILE
    // -------------------------------
    int movimentoBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");

    while (contadorBispo <= movimentoBispo) {
        // O bispo se move na diagonal
        // Neste caso, estamos simulando a diagonal "Cima Direita"
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

     // -------------------------------
    // Movimento da Rainha (8 casas para a esquerda)
    // Usando estrutura de repetição: DO-WHILE
    // -------------------------------
    int movimentoRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha (8 casas para a esquerda):\n");

    do {
        // A rainha pode se mover em todas as direções
        // Aqui simulamos o movimento apenas na direção "Esquerda"
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    return 0;
}
