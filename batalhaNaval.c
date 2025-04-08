#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Declaração de um tabuleiro 5x5
    int tabuleiro[5][5] = {0}; // Inicializando todas as posições com 0 (vazio)

    // Definindo a posição dos navios:
    // Navio horizontal na linha 2, colunas 1, 2, 3
    tabuleiro[1][0] = 1;
    tabuleiro[1][1] = 1;
    tabuleiro[1][2] = 1;

    // Navio vertical na coluna 4, linhas 1, 2, 3
    tabuleiro[0][3] = 2;
    tabuleiro[1][3] = 2;
    tabuleiro[2][3] = 2;

    // Imprimindo o tabuleiro
    printf("Tabuleiro:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (tabuleiro[i][j] == 0)
            {
                printf(". ");
            }
            else if (tabuleiro[i][j] == 1)
            {
                printf("3 ");
            }
            else if (tabuleiro[i][j] == 2)
            {
                printf("3 ");
            }
        }
        printf("\n");
    }

    // Imprimindo as coordenadas dos navios
    printf("\nCoordenadas dos navios:\n");

    // Coordenadas do navio horizontal
    printf("Navio horizontal: ");
    printf("Linha 2, Colunas 1, 2, 3\n");

    // Coordenadas do navio vertical
    printf("Navio vertical: ");
    printf("Coluna 4, Linhas 1, 2, 3\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    int tabuleiroGrande[10][10] = {0}; // Inicializando todas as posições com 0 (vazio)

    // Definindo a posição dos navios:
    // Navio horizontal na linha 1, colunas 0, 1, 2
    tabuleiroGrande[1][0] = 1;
    tabuleiroGrande[1][1] = 1;
    tabuleiroGrande[1][2] = 1;

    // Navio vertical na coluna 4, linhas 0, 1, 2
    tabuleiroGrande[0][4] = 2;
    tabuleiroGrande[1][4] = 2;
    tabuleiroGrande[2][4] = 2;

    // Navio diagonal
    tabuleiroGrande[4][0] = 3;
    tabuleiroGrande[5][1] = 3;
    tabuleiroGrande[6][2] = 3;

    // Navio diagonal na diagonal secundária
    tabuleiroGrande[0][9] = 4;
    tabuleiroGrande[1][8] = 4;
    tabuleiroGrande[2][7] = 4;

    // Imprimindo o tabuleiro
    printf("\nDESAFIO AVENTUREIRO\n");
    printf("\nTabuleiro (10x10):\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (tabuleiroGrande[i][j] == 0)
            {
                printf(". ");
            }
            else if (tabuleiroGrande[i][j] == 1)
            {
                printf("3 ");
            }
            else if (tabuleiroGrande[i][j] == 2)
            {
                printf("3 ");
            }
            else if (tabuleiroGrande[i][j] == 3)
            {
                printf("3 ");
            }
            else if (tabuleiroGrande[i][j] == 4)
            {
                printf("3 ");
            }
        }
        printf("\n");
    }
    // Imprimindo as coordenadas dos navios
    printf("\nCoordenadas dos navios:\n");
    // Coordenadas do navio horizontal
    printf("Navio horizontal: ");
    printf("Linha 2, Colunas 1, 2, 3\n");
    // Coordenadas do navio vertical
    printf("Navio vertical: ");
    printf("Coluna 4, Linhas 1, 2, 3\n");
    // Coordenadas do navio diagonal principal
    printf("Navio diagonal principal: ");
    printf("Linhas 5, 6, 7, Colunas 1, 2, 3\n");
    // Coordenadas do navio diagonal secundária
    printf("Navio diagonal secundária: ");
    printf("Linhas 1, 2, 3, Colunas 8, 9, 10\n");

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    // HABILIDADE EM CONE
    int tabuleiroCone[3][5] = {0}; // Inicializando todas as posições com 0 (vazio)

    // Definindo a posição da habilidade em cone:

    tabuleiroCone[2][0] = 1;
    tabuleiroCone[2][1] = 1;
    tabuleiroCone[2][2] = 1;
    tabuleiroCone[2][3] = 1;
    tabuleiroCone[2][4] = 1;
    tabuleiroCone[1][1] = 1;
    tabuleiroCone[1][2] = 1;
    tabuleiroCone[1][3] = 1;
    tabuleiroCone[0][2] = 1;

    // Imprimindo o tabuleiro com a habilidade em cone

    printf("\nDESAFIO MESTRE\n");
    printf("\nHABILIDADE EM CONE\n");
    printf("\nTabuleiro (3x5):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (tabuleiroCone[i][j] == 0)
            {
                printf(". "); // Posição vazia
            }
            else
            {
                printf("1 "); // Área atingida pela habilidade
            }
        }
        printf("\n");
    }

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // HABILIDADE EM OCTAEDRO
    int tabuleiroOctaedro[3][5] = {0}; // Inicializando todas as posições com 0 (vazio)

    // Definindo a posição da habilidade em octaedro:

    tabuleiroOctaedro[1][1] = 1;
    tabuleiroOctaedro[1][2] = 1;
    tabuleiroOctaedro[1][3] = 1;
    tabuleiroOctaedro[0][2] = 1;
    tabuleiroOctaedro[2][2] = 1;

    // Imprimindo o tabuleiro com a habilidade em octaedro
    printf("\nHABILIDADE EM OCTAEDRO\n");
    printf("\nTabuleiro (3x5):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (tabuleiroOctaedro[i][j] == 0)
            {
                printf(". "); // Posição vazia
            }
            else
            {
                printf("1 "); // Área atingida pela habilidade
            }
        }
        printf("\n");
    }

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    // HABILIDADE EM CRUZ
    int tabuleiroCruz[3][5] = {0}; // Inicializando todas as posições com 0 (vazio)
    // Definindo a posição da habilidade em cruz:
    // Habilidade em cruz

    tabuleiroCruz[1][1] = 1;
    tabuleiroCone[1][2] = 1;
    tabuleiroCruz[1][3] = 1;
    tabuleiroCruz[0][2] = 1;
    tabuleiroCruz[2][2] = 1;
    tabuleiroCruz[1][0] = 1;
    tabuleiroCruz[1][4] = 1;
    tabuleiroCruz[1][2] = 1;

    // Imprimindo o tabuleiro com a habilidade em cruz
    printf("\nHABILIDADE EM CRUZ\n");
    printf("\nTabuleiro (3x5):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (tabuleiroCruz[i][j] == 0)
            {
                printf(". "); // Posição vazia
            }
            else
            {
                printf("1 "); // Área atingida pela habilidade
            }
        }
        printf("\n");
    }

    return 0;
}
