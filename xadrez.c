#include <stdio.h>

// Função recursiva para o movimento da torre
void movimentoTorre(int mov) {
    if (mov == 0) return;
    printf("Direita\n");
    movimentoTorre(mov - 1);
}

// Função recursiva para o movimento do bispo
void movimentoBispo(int mov) {
    if (mov == 0) return;
    printf("Cima, Direta\n");
    movimentoBispo(mov - 1);
}

// Função recursiva para o movimento da rainha
void movimentoRainha(int mov) {
    if (mov == 0) return;
    printf("Esquerda\n");
    movimentoRainha(mov - 1);
}

int main() {
    int movTorre = 5, movBispo = 5, movRainha = 8;
    int movCavalo = 2; // quantidade de casas do primeiro movimento

    // Movimento da torre
    printf("Movimento da torre: \n");
    movimentoTorre(movTorre);

    // Movimento do bispo
    printf("Movimento do bispo: \n");
    movimentoBispo(movBispo);

    // Movimento da rainha
    printf("Movimento da rainha: \n");
    movimentoRainha(movRainha);

    // Movimento do cavalo (mantido com loops)
    printf("Movimento do cavalo: \n");
    for (int i = 1; i == 1; i++) {
        while (movCavalo > 0) {
            printf("Cima\n");
            movCavalo--;
        }
        printf("Direita\n");
    }

    return 0;
}
