#include <stdio.h>

int main() {
    // Dimensões do tabuleiro
    int linhas = 10, colunas = 10;
    
    // Declaração do tabuleiro 10x10
    int tabuleiro[10][10] = {0}; // Inicializa todo o tabuleiro com 0 (água)

    // Definindo o tamanho dos navios
    int tamanhoNavio = 3;

    // Posicionamento do navio vertical
    int navioVerticalX, navioVerticalY;
    printf("Digite as coordenadas iniciais do navio vertical (linha coluna): ");
    scanf("%d %d", &navioVerticalX, &navioVerticalY);
    
    // Verifica se o navio vertical cabe no tabuleiro
    if (navioVerticalX + tamanhoNavio - 1 < linhas) {
        for (int i = 0; i < tamanhoNavio; i++) {
            // Verifica se há sobreposição
            if (tabuleiro[navioVerticalX + i][navioVerticalY] == 3) {
                printf("Erro: Navios não podem se sobrepor!\n");
                return 1;
            }
            tabuleiro[navioVerticalX + i][navioVerticalY] = 3;
        }
    } else {
        printf("Erro: O navio vertical não cabe no tabuleiro.\n");
        return 1;
    }

    // Posicionamento do navio horizontal
    int navioHorizontalX, navioHorizontalY;
    printf("Digite as coordenadas iniciais do navio horizontal (linha coluna): ");
    scanf("%d %d", &navioHorizontalX, &navioHorizontalY);
    
    // Verifica se o navio horizontal cabe no tabuleiro (não ultrapassa o limite)
    if (navioHorizontalY + tamanhoNavio - 1 < colunas) {
        for (int i = 0; i < tamanhoNavio; i++) {
            // Verifica se há sobreposição
            if (tabuleiro[navioHorizontalX][navioHorizontalY + i] == 3) {
                printf("Erro: Navios não podem se sobrepor!\n");
                return 1;
            }
            tabuleiro[navioHorizontalX][navioHorizontalY + i] = 3;
        }
    } else {
        printf("Erro: O navio horizontal não cabe no tabuleiro.\n");
        return 1;
    }

    // Exibição do tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            // Exibe o valor da célula, com um espaço para melhorar a legibilidade
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
