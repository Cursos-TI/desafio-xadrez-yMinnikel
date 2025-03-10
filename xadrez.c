#include <stdio.h>


int main() {

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    int movTorre = 5, movBispo = 5, movRainha = 8;
    int movCavalo = 2;

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

    //movimento do cavalo
    printf("Movimento do cavalo: \n");
    for (int i = 1; i == 1; i++) 
    {
        while (movCavalo > 0) 
        {
            printf("Baixo\n");
            movCavalo--;
        }

        printf("Esquerda\n");
    }
}
