#include <stdio.h>

int main() {

    printf("Movimentação da Torre para a direita:\n");
    for (int i = 1; i <= 5; i++) {
        printf("direita %d\n", i);
    }

    printf("\nMovimentação da Rainha para a esquerda:\n");
    for (int i = 1; i <= 8; i++) {
        printf("esquerda %d\n", i);
    }

    printf("\nMovimentação do Bispo para a diagonal superior direita:\n");
    for (int i = 1; i <= 5; i++) {
        printf("diagonal superior direita %d\n", i);
    }

    printf("\n");

    int x = 4, y = 4;

    printf("Posição inicial do Cavalo: (%d, %d)\n", x, y);
    printf("Possíveis movimentos do Cavalo:\n");

    int movX[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int movY[8] = {1, 2,  2,  1, -1, -2, -2, -1};

    for (int i = 0; i < 8; i++) {
        int novoX = x + movX[i];
        int novoY = y + movY[i];

        if (novoX >= 1 && novoX <= 8 && novoY >= 1 && novoY <= 8) {
            printf("(%d, %d)\n", novoX, novoY);
        }
    }

    return 0;
}