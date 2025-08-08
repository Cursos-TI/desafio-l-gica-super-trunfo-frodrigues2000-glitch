#include <iostream>
#include <string>
#include <vector>
#include <iomanip> // Para formatar a saída de floats

// A struct 'Carta' armazena os dados de cada país
struct Carta {
    std::string nome;
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
};

// Função para exibir o menu de opções para o jogador
void exibirMenu() {
    std::cout << "\n--- Escolha um Atributo para Comparar ---" << std::endl;
    std::cout << "1. Populacao" << std::endl;
    std::cout << "2. Area" << std::endl;
    std::cout << "3. PIB" << std::endl;
    std::cout << "4. Numero de Pontos Turisticos" << std::endl;
    std::cout << "5. Densidade Demografica" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Sua escolha: ";
}

// Função para exibir os detalhes de uma carta
void exibirCarta(const Carta& carta) {
    std::cout << "País: " << carta.nome << std::endl;
    std::cout << "  - Populacao: " << carta.populacao << " milhoes" << std::endl;
    std::cout << "  - Area: " << std::fixed << std::setprecision(2) << carta.area << " km²" << std::endl;
    std::cout << "  - PIB: " << std::fixed << std::setprecision(2) << carta.pib << " trilhoes USD" << std::endl;
    std::cout << "  - Pontos Turisticos: " << carta.pontosTuristicos << std::endl;
    std::cout << "  - Densidade Demografica: " << std::fixed << std::setprecision(2) << carta.densidadeDemografica << " hab/km²" << std::endl;
}

int main() {
    // Definindo as duas cartas para o jogo
    Carta carta1 = {"Brasil", 215, 8515767.0f, 1.61f, 10, 25.2f};
    Carta carta2 = {"Argentina", 46, 2780400.0f, 0.49f, 8, 16.5f};

    int escolha;
    std::string atributoEscolhido;

    std::cout << "Bem-vindo ao Super Trunfo de Paises!" << std::endl;
    std::cout << "As cartas para esta rodada sao:" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    exibirCarta(carta1);
    std::cout << "------------------------------------------" << std::endl;
    exibirCarta(carta2);
    std::cout << "------------------------------------------" << std::endl;

    exibirMenu();
    std::cin >> escolha;

    // Estrutura 'switch' para lidar com a escolha do usuario
    switch (escolha) {
        case 1:
            atributoEscolhido = "Populacao";
            // Lógica de comparação para População
            if (carta1.populacao > carta2.populacao) {
                std::cout << "O " << carta1.nome << " vence com " << carta1.populacao << " milhoes de habitantes!" << std::endl;
            } else if (carta2.populacao > carta1.populacao) {
                std::cout << "A " << carta2.nome << " vence com " << carta2.populacao << " milhoes de habitantes!" << std::endl;
            } else {
                std::cout << "Empate!" << std::endl;
            }
            break;
        case 2:
            atributoEscolhido = "Area";
            // Lógica de comparação para Área
            if (carta1.area > carta2.area) {
                std::cout << "O " << carta1.nome << " vence com " << std::fixed << std::setprecision(2) << carta1.area << " km²!" << std::endl;
            } else if (carta2.area > carta1.area) {
                std::cout << "A " << carta2.nome << " vence com " << std::fixed << std::setprecision(2) << carta2.area << " km²!" << std::endl;
            } else {
                std::cout << "Empate!" << std::endl;
            }
            break;
        case 3:
            atributoEscolhido = "PIB";
            // Lógica de comparação para PIB
            if (carta1.pib > carta2.pib) {
                std::cout << "O " << carta1.nome << " vence com um PIB de " << std::fixed << std::setprecision(2) << carta1.pib << " trilhoes USD!" << std::endl;
            } else if (carta2.pib > carta1.pib) {
                std::cout << "A " << carta2.nome << " vence com um PIB de " << std::fixed << std::setprecision(2) << carta2.pib << " trilhoes USD!" << std::endl;
            } else {
                std::cout << "Empate!" << std::endl;
            }
            break;
        case 4:
            atributoEscolhido = "Pontos Turisticos";
            // Lógica de comparação para Pontos Turísticos
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                std::cout << "O " << carta1.nome << " vence com " << carta1.pontosTuristicos << " pontos turisticos!" << std::endl;
            } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                std::cout << "A " << carta2.nome << " vence com " << carta2.pontosTuristicos << " pontos turisticos!" << std::endl;
            } else {
                std::cout << "Empate!" << std::endl;
            }
            break;
        case 5:
            atributoEscolhido = "Densidade Demografica";
            // Regra especial: menor valor vence!
            if (carta1.densidadeDemografica < carta2.densidadeDemografica) {
                std::cout << "O " << carta1.nome << " vence com " << std::fixed << std::setprecision(2) << carta1.densidadeDemografica << " hab/km²!" << std::endl;
            } else if (carta2.densidadeDemografica < carta1.densidadeDemografica) {
                std::cout << "A " << carta2.nome << " vence com " << std::fixed << std::setprecision(2) << carta2.densidadeDemografica << " hab/km²!" << std::endl;
            } else {
                std::cout << "Empate!" << std::endl;
            }
            break;
        default:
            std::cout << "Opcao invalida. Por favor, escolha um numero de 1 a 5." << std::endl;
            break;
    }

    // Exibição final do resultado
    if (escolha >= 1 && escolha <= 5) {
        std::cout << "\n--- Resultado da Comparacao ---" << std::endl;
        std::cout << "Atributo escolhido: " << atributoEscolhido << std::endl;
        std::cout << carta1.nome << " vs. " << carta2.nome << std::endl;
    }
    
    return 0;
}