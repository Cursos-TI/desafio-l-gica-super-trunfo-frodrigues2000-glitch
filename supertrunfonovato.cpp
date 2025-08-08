#include <stdio.h>
#include <string.h>

// Define a estrutura para uma carta do Super Trunfo
// Contém os atributos Estado, Código, Nome, População, Área, PIB e Pontos Turísticos.
// Também inclui campos para os atributos calculados.
// Aluno: Fernnado Rodrigues MAT- 202506180701
typedef struct {
    char estado[3];
    char codigo[5];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

int main() {
    // --- 1. RECEBER OS DADOS DE DUAS CARTAS (PRÉ-DEFINIDAS) ---
    // Cria e inicializa duas cartas com dados fixos, conforme o requisito.
    Carta carta1 = {
        "SP",
        "C001",
        "Sao Paulo",
        12396372,   // População: Apenas o valor numérico
        1521.1,     // Área em km²
        763.84e9,   // PIB em reais (R$ 763.84 bilhões)
        50
    };

    Carta carta2 = {
        "RJ",
        "C002",
        "Rio de Janeiro",
        6716189,    // População: Apenas o valor numérico
        1200.3,     // Área em km²
        341.10e9,   // PIB em reais (R$ 341.10 bilhões)
        40
    };

    // --- 2. CALCULAR DENSIDADE POPULACIONAL E PIB PER CAPITA ---
    // Calcula a densidade populacional e o PIB per capita para a Carta 1
    carta1.densidade_populacional = (float)carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / (float)carta1.populacao;

    // Calcula a densidade populacional e o PIB per capita para a Carta 2
    carta2.densidade_populacional = (float)carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / (float)carta2.populacao;

    // --- 3. ESCOLHER O ATRIBUTO PARA COMPARAÇÃO ---
    // Neste exemplo, escolhemos a Densidade Populacional.
    // Lembre-se que para este atributo, o menor valor vence.
    const char* atributo_escolhido = "Densidade Populacional";

    // --- 4. EXIBIR O RESULTADO DA COMPARAÇÃO ---
    printf("--------------------------------------------------\n");
    printf("Comparacao de cartas (Atributo: %s):\n\n", atributo_escolhido);

    printf("Carta 1 - %s (%s): %.2f hab/km²\n", carta1.nome_cidade, carta1.estado, carta1.densidade_populacional);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n", carta2.nome_cidade, carta2.estado, carta2.densidade_populacional);
    printf("\n");

    // --- 5. DETERMINAR A CARTA VENCEDORA USANDO IF/IF-ELSE ---
    // A regra para Densidade Populacional é que o menor valor vence.
    if (carta1.densidade_populacional < carta2.densidade_populacional) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
    } else if (carta2.densidade_populacional < carta1.densidade_populacional) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("--------------------------------------------------\n");

    return 0;
}