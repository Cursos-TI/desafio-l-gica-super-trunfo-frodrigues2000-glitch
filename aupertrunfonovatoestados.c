#include <stdio.h>
#include <string.h> // Necessário para a função strcpy

int main() {
    // --- Declaração das variáveis para a Carta 1 ---
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // --- Declaração das variáveis para a Carta 2 ---
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- Inicialização das variáveis para a Carta 1 com os dados fornecidos ---
    estado1 = 'A';
    strcpy(codigo1, "A01");
    strcpy(nomeCidade1, "São Paulo");
    populacao1 = 12325000;
    area1 = 1521.11;
    pib1 = 699.28;
    pontosTuristicos1 = 50;

    // --- Inicialização das variáveis para a Carta 2 com os dados fornecidos ---
    estado2 = 'B';
    strcpy(codigo2, "B02");
    strcpy(nomeCidade2, "Rio de Janeiro");
    populacao2 = 6748000;
    area2 = 1200.25;
    pib2 = 300.50;
    pontosTuristicos2 = 30;

    // --- Seção de Exibição dos Dados da Carta 1 ---
    printf("\n--- Informacoes da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // --- Seção de Exibição dos Dados da Carta 2 ---
    printf("\n--- Informacoes da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}