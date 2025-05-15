#include <stdio.h>
#include <stdlib.h>

    void recursiveTorre(int T)
    {
        if(T > 0)
        {
            recursiveTorre(T - 1);

            printf("Casa: %d - Direita \n", T);//Printf após recursiveTorre(T - 1) para ele exibir do menor para maior se adicionado antes ele exibe do maior para menor
        }
    };

    void recursiveBispo(int B)
    {
        if(B > 0)
        {
            recursiveBispo(B - 1);

            printf("Casa: %d - Cima Direita\n", B);
        }

    };

    void recursiveRainha(int R)
    {
        if (R > 0)
        {
            recursiveRainha(R - 1);

            printf("Casa: %d - Esquerda\n", R);
        }
    };

int main() {

    // A Torre move em linha reta horizontalmente ou verticalmente.
    // Ela moverá 5 casas para a direita.
    printf("Movimento da Torre (5 casas para a direita):\n");

    int Torre = 5;
    recursiveTorre(Torre);

    printf("\n");

    // O Bispo move na diagonal. Aqui, moverá 5 casas na diagonal para cima e à direita.
    printf("Movimento do Bispo (5 casas na diagonal - cima e direita):\n");

    int Bispo = 5;
    recursiveBispo(Bispo);


    printf("\n");

    // A Rainha pode mover em todas as direções.
    // Moverá 8 casas para a esquerda.
    printf("Movimento da Rainha (8 casas para a esquerda):\n");

    int Rainha = 8;
    recursiveRainha(Rainha);

    printf("\n");

    //Movimento do Cavalo
    //o Cavalo pode mover duas para baixo e uma para a esquerda
    printf("Movimento do Cavalo (Duas casas para Baixo e uma para Esquerda):\n");
    for (int C = 1; C <= 2; C++)
        {
        printf("Casa: %d - Baixo \n", C);

        int j = 1;
        while (C == 2 && j <= 1) {
            printf("Casa: %d - Esquerda\n", C + j); // apenas para visualização
            j++;
        }
    }


    return 0;
}
