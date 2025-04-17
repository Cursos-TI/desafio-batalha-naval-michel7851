#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int tamanho_navio = 3;

    int linha_horizontal = 2;
    int coluna_inicial_horizontal = 4;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_horizontal][coluna_inicial_horizontal + i] = 3;
    }

    int coluna_vertical = 1;
    int linha_inicial_vertical = 6;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_inicial_vertical + i][coluna_vertical] = 3;
    }

    printf("Tabuleiro Batalha Naval:\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}