#include <stdio.h>
#include <stdlib.h>

int main() {

    // usando FOR para o movimento da Torre
    // A Torre move em linha reta horizontalmente ou verticalmente.
    // Ela moverá 5 casas para a direita.
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int T = 1; T <= 5; T++) {
        printf("Casa: %d - Direita \n", T);
    }
    printf("\n");

    // Movimento do Bispo usando WHILE
    // O Bispo move na diagonal. Aqui, moverá 5 casas na diagonal para cima e à direita.
    printf("Movimento do Bispo (5 casas na diagonal - cima e direita):\n");
    int B = 1;
    while (B <= 5) {
        printf("Casa: %d - Cima Direita\n", B);
        B++;
    }
    printf("\n");

    // Movimento da Rainha usando DO-WHILE
    // A Rainha pode mover em todas as direções.
    // Moverá 8 casas para a esquerda.
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int R = 1;
    do {
        printf("Casa: %d - Esquerda\n", R);
        R++;
    } while (R <= 8);

    printf("\n");

    //Movimento do Cavalo
    //o Cavalo pode mover duas para baixo e uma para a esquerda
    printf("Movimento do Cavalo (Duas casas para Baixo e uma para Esquerda):\n");
    for (int C = 1; C <= 2; C++) {
        printf("Casa: %d - Baixo \n", C);

        while(C >= 2 && C <= 3)
        {
            printf("Casa: %d - Esquerda \n", C);

            C++;
        }


    }


    return 0;
}
