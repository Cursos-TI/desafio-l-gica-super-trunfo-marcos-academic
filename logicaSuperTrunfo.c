#include <stdio.h>
#include <string.h>

// Definição de uma estrutura (struct) chamada Carta que representa uma carta do Super Trunfo
struct Carta {
    char estado;                  // Letra representando o estado (A a H)
    char codigo[4];              // Código da carta (ex: A01), armazenado como string
    char cidade[50];            // Nome da cidade
    int populacao;              // População da cidade
    float area;                 // Área da cidade em km²
    float pib;                  // PIB da cidade em bilhões de reais
    int pontosTuristicos;      // Quantidade de pontos turísticos
    float densidadePopulacional; // Densidade populacional (calculada)
    float pibPerCapita;          // PIB per capita (calculado)
};

int main() {
    // Declaração de duas variáveis do tipo Carta
    struct Carta carta1, carta2;

    // ========================= CADASTRO DA CARTA 1 =========================
    printf("=== Cadastro da Carta 1 ===\n");

    // Leitura dos dados do usuário para a carta 1
    printf("Estado (letra A-H): ");
    scanf(" %c", &carta1.estado); // Espaço antes do %c ignora espaços ou quebras de linha pendentes
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.cidade); // Lê uma string com espaços até encontrar uma nova linha
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // ========================= CADASTRO DA CARTA 2 =========================
    printf("\n=== Cadastro da Carta 2 ===\n");

    // Leitura dos dados do usuário para a carta 2
    printf("Estado (letra A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Código da Carta (ex: B01): ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // ========================= CÁLCULOS DERIVADOS =========================

    // Calcula a densidade populacional: população dividida pela área
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // ========================= EXIBIÇÃO DOS DADOS =========================
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per capita: %.6f bilhões/hab\n", carta1.pibPerCapita);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per capita: %.6f bilhões/hab\n", carta2.pibPerCapita);

    // ========================= COMPARAÇÃO ENTRE CARTAS =========================
    // Comparando as cartas pelo atributo População
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s: %d habitantes\n", carta1.cidade, carta1.populacao);
    printf("Carta 2 - %s: %d habitantes\n", carta2.cidade, carta2.populacao);

    // Estrutura condicional para decidir quem venceu
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate! Ambas têm a mesma população.\n");
    }

    return 0;
}
