#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
   


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

#include <stdio.h>

// Nível Mestre - Movimentação das Peças/Quantidade de casas (definidas no código)

// ===================
// TORRE (Recursivo)
// Movimento: Direita
// ===================

// Definição de procedimento para imprimir

void moverTorre(int casas) {
    if (casas <= 0) return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

// ====================
// RAINHA (Recursivo)
// Movimento: Esquerda
// ====================

void moverRainha(int casas) {
    if (casas <= 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ====================================
// BISPO (Recursivo + Loops Aninhados)
// Movimento: Diagonal (Cima + Direita)
// ====================================

void moverBispo(int casas) {
    if (casas <= 0) return;

    int i, j;

    // Loop externo (vertical)

    for (i = 0; i < 1; i++) {
        // Loop interno (horizontal)
        for (j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// =============================
// CAVALO (Loops Aninhados)
// Movimento: 2 cima + 1 direita
// =============================

void moverCavalo(int movimentos) {
    int i, j;

    for (i = 0; i < movimentos; i++) {

        // duas casas para cima
        j = 0;
        while (j < 2) {
            printf("Cima\n");
            j++;
        }

        // uma casa para direita
        int k = 0;
        do {
            printf("Direita\n");
            k++;
        } while (k < 1);
    }
}

// =====
// MAIN
// =====

// Chamada do procedimento

int main() {

    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int movimentos_cavalo = 2;

    // TORRE
    printf("Movimento da Torre:\n");
    moverTorre(casas_torre); //recursiveLoop(peça/numero);

    printf("\n");

    // BISPO
    printf("Movimento do Bispo:\n");
    moverBispo(casas_bispo);

    printf("\n");

    // RAINHA
    printf("Movimento da Rainha:\n");
    moverRainha(casas_rainha);

    printf("\n");

    // CAVALO
    printf("Movimento do Cavalo:\n");
    moverCavalo(movimentos_cavalo);

    return 0;
}
