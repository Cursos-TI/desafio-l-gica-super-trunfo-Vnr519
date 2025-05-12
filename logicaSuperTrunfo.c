#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1[4], codigo1[5], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Declaração das variáveis para a Carta 2
    char estado2[4], codigo2[5], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %3s", estado1);
    printf("Código da Carta: ");
    scanf(" %4s", codigo1);
    getchar(); // limpar o \n
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo dos indicadores da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %3s", estado2);
    printf("Código da Carta: ");
    scanf(" %4s", codigo2);
    getchar(); // limpar o \n
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo dos indicadores da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição das Cartas
    printf("\n========================\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f bilhões/hab\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f bilhões/hab\n", pibPerCapita2);

    // Comparação (exemplo: PIB)
    printf("\n========================\n");
    printf("Comparação de Cartas (Atributo: PIB):\n");
    printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
    printf("%s: %.2f bilhões\n", nomeCidade2, pib2);

    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
