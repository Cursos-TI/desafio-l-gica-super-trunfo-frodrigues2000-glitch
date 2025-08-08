#include <stdio.h>

int main() {
    // --------------------------------------------------
    // Movimento da Torre
    // A Torre se move em linha reta (horizontal ou vertical).
    // Usamos um loop 'for' para simular o movimento de 5 casas para a direita.
    // --------------------------------------------------
    
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // --------------------------------------------------
    // Movimento do Bispo
    // O Bispo se move na diagonal.
    // Usamos um loop 'while' para simular o movimento de 5 casas na diagonal superior e à direita.
    // A cada casa, imprimimos as duas direções combinadas.
    // --------------------------------------------------
    
    printf("\n--- Movimento do Bispo (5 casas na diagonal para cima e à direita) ---\n");
    int contador_bispo = 0;
    while (contador_bispo < 5) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    // --------------------------------------------------
    // Movimento da Rainha
    // A Rainha se move em todas as direções.
    // Usamos um loop 'do-while' para simular o movimento de 8 casas para a esquerda.
    // --------------------------------------------------
    
    printf("\n--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < 8);

    return 0;
}