#include <stdio.h>

// Função recursiva para movimentação da Torre
void moverTorre(int casa, int limite)
{
    if (casa > limite)
        return;
    printf("Casa %d: Direita\n", casa);
    moverTorre(casa + 1, limite);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casa, int limite)
{
    if (casa > limite)
        return;
    printf("Casa %d: Esquerda\n", casa);
    moverRainha(casa + 1, limite);
}

// Função recursiva com loops aninhados para o Bispo
void moverBispo(int linha, int maxLinha, int maxColuna)
{
    if (linha > maxLinha)
        return;
    for (int coluna = 1; coluna <= maxColuna; coluna++)
    {
        printf("Casa [%d,%d]: Cima à Direita\n", linha, coluna);
    }
    moverBispo(linha + 1, maxLinha, maxColuna);
}

// Função com loops complexos para o Cavalo
void moverCavalo(int maxLinha, int maxColuna)
{
    for (int linha = 2; linha <= maxLinha; linha++)
    {
        for (int coluna = 1; coluna <= maxColuna; coluna++)
        {
            if (linha % 2 == 0 && coluna % 2 != 0)
            {
                printf("Movimentação: %d para cima e %d para direita\n", linha, coluna);
                continue;
            }
            if (linha + coluna > maxLinha + maxColuna)
                break;
        }
    }
}

int main()
{
    printf(" ***Jogo de Xadrez - Nível Mestre*** \n\n");

    printf("Movimentação da Torre\n");
    moverTorre(1, 5);
    printf("\n");

    printf("Movimentação do Bispo\n");
    moverBispo(1, 5, 5);
    printf("\n");

    printf("Movimentação da Rainha\n");
    moverRainha(1, 8);
    printf("\n");

    printf("Movimentação do Cavalo\n");
    moverCavalo(4, 4);
    printf("\n");

    return 0;
}
