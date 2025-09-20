#include <stdio.h>

int main(){

    printf(" ***Jogo de Xadrez*** \n"); // Título do Jogo.

    printf("Movimentação da Torre\n"); // Qual peça irá de mover, torre: 5 casas à direita.
    for(int t = 0; t <= 5; t++) // inicialização, condição e incremento.
    {
        printf("Casa %d: à direita\n", t); // Saída.
    }
    
    printf("Movimentação do Bispo\n");
    int b = 0; // variável inteira "b", representando o "Bispo".
    while (b <= 5) //Condição da Estrura.
    {
        printf("Casa %d: cima à direita\n", b); // Saída.
        b++; // Incremento.
    }

    printf("Movimentação da Rainha\n");
    int r = 0; // Variável inteira "r", representando a "Rainha".
    do
    {
        printf("Casa %d: Oito casas à esquerda\n", r);// Saída.
        r++; // Incremento.
    } while (r <= 8);// Condição.
    
    printf("Movimentação do Cavalo\n");
    for(int linha = 2; linha <=2; linha++){
        int coluna = 1;
        while (coluna <= 1)
        {
            printf("Movimentação: %d para baixo e %d para esquerda", linha, coluna);
            coluna++;
        }
        printf("\n");
    }
    

    



    return 0;
}
