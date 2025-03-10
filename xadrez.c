#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    int movTorre = 5, movBispo = 5, movRainha = 8;
    int verticalCavalo = 2, horizontalCavalo = 1;

    //movimento da torre
    printf("Movimento da torre: \n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    //movimento do bispo
    printf("Movimento do bispo: \n");
    while(movBispo > 0) {
        printf("Cima, Direta\n");
        movBispo--;
    }

    //movimento da rainha
    printf("Movimento da rainha: \n");
    do {
        printf("Esquerda\n");
        movRainha--;
    } while (movRainha > 0);

    return 0;
}
