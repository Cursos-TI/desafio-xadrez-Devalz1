#include <stdio.h>

// Constantes para os movimentos
const int CASAS_TORRE = 5;
const int CASAS_BISPO = 5;
const int CASAS_RAINHA = 8;
const int CAVALO_CIMA = 2;
const int CAVALO_DIREITA = 1;

// Função recursiva para movimento da Torre (direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimento do Bispo (diagonal superior direita)
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para movimento da Rainha (esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para movimento do Cavalo (em L: 2 cima, 1 direita)
void moverCavalo() {
    // Loop externo para controle do movimento vertical
    for (int i = 0; i < CAVALO_CIMA; i++) {
        // Loop interno para controle do movimento horizontal
        for (int j = 0; j < CAVALO_DIREITA; j++) {
            // Primeira parte do movimento (vertical)
            if (j == 0) {
                printf("Cima\n");
                continue; // Continua para próxima iteração do loop interno
            }
            // Segunda parte do movimento (horizontal)
            printf("Direita\n");
        }
        
        // Condição para sair após completar o movimento em L
        if (i == CAVALO_CIMA - 1) {
            break; // Sai do loop externo após completar o movimento
        }
    }
}

// Função para movimento do Bispo com loops aninhados
void moverBispoComLoops() {
    // Loop externo para controle do movimento vertical
    for (int i = 0; i < CASAS_BISPO; i++) {
        // Loop interno para controle do movimento horizontal
        for (int j = 0; j < 1; j++) { // Apenas 1 iteração para combinar com movimento diagonal
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    printf("=== SIMULADOR AVANÇADO DE MOVIMENTOS DE XADREZ ===\n\n");

    // 1. Movimento da Torre (recursivo)
    printf("Movimento da Torre (%d casas para a direita - recursivo):\n", CASAS_TORRE);
    moverTorre(CASAS_TORRE);
    printf("\n");

    // 2. Movimento do Bispo (recursivo)
    printf("Movimento do Bispo (%d casas na diagonal - recursivo):\n", CASAS_BISPO);
    moverBispo(CASAS_BISPO);
    printf("\n");

    // 3. Movimento da Rainha (recursivo)
    printf("Movimento da Rainha (%d casas para a esquerda - recursivo):\n", CASAS_RAINHA);
    moverRainha(CASAS_RAINHA);
    printf("\n");

    // 4. Movimento do Cavalo (loops aninhados complexos)
    printf("Movimento do Cavalo (%d casas para cima e %d para direita - loops aninhados):\n", 
           CAVALO_CIMA, CAVALO_DIREITA);
    moverCavalo();
    printf("\n");

    // 5. Movimento do Bispo com loops aninhados
    printf("Movimento do Bispo (%d casas na diagonal - loops aninhados):\n", CASAS_BISPO);
    moverBispoComLoops();

    return 0;
}