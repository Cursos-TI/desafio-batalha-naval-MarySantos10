#include <stdio.h>

#include <stdio.h>

int main() {
    // Dimensões do tabuleiro
    int linhas = 5, colunas = 5;
    
    // Declaração do tabuleiro
    int tabuleiro[5][5] = {0};

    // Posicionamento do navio vertical
    int navioVerticalX = 1, navioVerticalY = 2; // Coordenadas iniciais
    for (int i = 0; i < 3; i++) { // Navio ocupa 3 posições
        tabuleiro[navioVerticalX + i][navioVerticalY] = 1;
    }

    // Posicionamento do navio horizontal
    int navioHorizontalX = 3, navioHorizontalY = 1; // Coordenadas iniciais
    for (int i = 0; i < 3; i++) { // Navio ocupa 3 posições
        tabuleiro[navioHorizontalX][navioHorizontalY + i] = 1;
    }

    // Exibição das coordenadas dos navios
    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", navioVerticalX + i, navioVerticalY);
    }

    printf("\nCoordenadas do navio horizontal:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", navioHorizontalX, navioHorizontalY + i);
    }

    return 0;
}
