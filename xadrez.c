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

    void recursiveBispo(int B) {
        if (B > 0) {
            recursiveBispo(B - 1);  // chamada recursiva

            for (int v = B; v <= B; v++) {          // vertical
                for (int h = B; h <= B; h++) {      // horizontal
                    if (v == h) {
                        printf("Casa: Cima %d, Direita %d\n", v, h);
                    }
                }
            }
        }
    }

    void recursiveCavalo(int C) {

          for (int C = 1; C <= 2; C++)
        {
        printf("Casa: %d - Cima \n", C);

        int j = 1;
        while (C == 2 && j <= 1) {
            printf("Casa: %d - Direita\n", C + j); // apenas para visualização
            j++;
        }
    }
    }

    void recursiveRainha(int R)
    {
        if (R > 0)
        {
            recursiveRainha(R - 1);

            printf("Casa: %d - Esquerda\n", R);
        }
    };

int main() {

    int Torre = 5;
    int Rainha = 8;
    int Bispo = 5;
    int Cavalo = 0;

    printf("Movimento da Torre (5 casas para a direita):\n");
    recursiveTorre(Torre);
    printf("\n");


    printf("Movimento do Bispo (5 casas na diagonal - Cima e Direita):\n");
    recursiveBispo(Bispo);
    printf("\n");


    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    recursiveRainha(Rainha);
    printf("\n");


    printf("Movimento do Cavalo (Duas casas para cima e uma para a direita):\n");
    recursiveCavalo(Cavalo);
    printf("\n");



    return 0;
}
