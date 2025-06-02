#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

 /*   int i = 0;
    // Mover a torre cinco casas para a direita
    do
    {
        printf("Direita\n");
        i++;
    } while (i < 5 );

    // Mover o Bispo cinco casas para Cima,Direita
    for ( i = 0; i < 5; i++)
    {
        printf("Cima,Direita\n");
    }
    i = 0;
    //Mover a Rainha oito casas para a Esquerda
    while (i < 8)
    {
        printf("Esquerda\n");
        i++;
    }

    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    //Movimento do Cavalo loop aninhado for
    int j;
    for ( i = 0; i <= 0; i++)
    {
    for ( j = 0; j <= 1; j++)
    {
        printf("Baixo,");
    }
        printf("Esquerda");
    }
    printf("\n");

    //Movimento do Cavalo loop aninhado while
    i =0;
    j =0;
    while (i<=0)
    {
        while (j<=1)
        {
            printf("Baixo,");
            j++;
        }
        printf("Esquerda");
        i++;
    }

*/
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
// Função recursiva para mover a Torre para a direita
    void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
    }

// Função recursiva para mover o Bispo para cima e direita
    void moverBispoCimaDireita(int i, int j) {
    if (i >= j) return;

    // Movimento vertical: Cima
    for (int col = 0; col < 1; col++) {  // Interno: movimento horizontal (Direita)
        printf("Cima,Direita\n");
    }

    moverBispoCimaDireita(i + 1, j);
}

// Função recursiva para mover a Rainha para a esquerda
    void moverRainhaEsquerda(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaEsquerda(casas - 1);
    }


    int main () {

    int i = 0, j = 0;
    // Mover a Torre cinco casas para a direita
    moverTorreDireita(5);

    // Mover o Bispo cinco casas para cima e à direita
    moverBispoCimaDireita(0,5);

    // Mover a Rainha oito casas para a esquerda
    moverRainhaEsquerda(8);

    printf("\n");

    //Movimento do Cavalo

  for ( i = 0, j = 1; i <= j; i++)
  {
    printf("Cima,");
    i == j ? printf("Direita") : 0 ;
  }
    
    return 0;
}
