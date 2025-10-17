#include <stdio.h>
#include <string.h>

int main()
{
    int opcao;

    // Menu Principal
    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regra\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Iniciando o jogo...\n\n");
        break;

    case 2:
        // Exibe as regras do jogo e encerra o programa
        printf("Regra do Jogo:\n");
        printf("A carta com o maior valor no atributo escolhido vencerá.\n");
        printf("Porém, para a Densidade Populacional, vence quem tiver o menor valor.\n");
        return 0;

    case 3:
        // Encerra o programa
        printf("Saindo...\n");
        return 0;

    default:
        printf("Opção inválida. Tente novamente.\n");
        return 0; // encerra o programa em caso de opção inválida
    }

    // Variáveis da Carta 1
    char pais1[50];
    int populacao1;
    float area_km2_1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis da Carta 2
    char pais2[50];
    int populacao2;
    float area_km2_2;
    float pib2;
    int pontos_turisticos2;

    // Cadastro da Carta 1
    printf("Carta 1:\n");

    getchar(); // Limpa o buffer antes do fgets

    printf("Digite o nome do país: ");
    fgets(pais1, 50, stdin);         // Lê nome com espaços
    pais1[strcspn(pais1, "\n")] = 0; // Remove o '\n' no final

    printf("Digite a população: ");
    scanf("%d", &populacao1); // Lê número inteiro

    printf("Digite a área (em km²): ");
    scanf("%f", &area_km2_1); // Lê número decimal

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da Carta 2
    printf("\nCarta 2:\n");

    getchar(); // Limpa o buffer

    printf("Digite o nome do país: ");
    fgets(pais2, 50, stdin);
    pais2[strcspn(pais2, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area_km2_2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da Densidade Populacional
    float densidade1 = (float)populacao1 / area_km2_1;
    float densidade2 = (float)populacao2 / area_km2_2;

    // Menu Interativo para Comparação de Atributos
    int atributo;

    printf("\nEscolha um atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Digite o número do atributo escolhido: ");
    scanf("%d", &atributo);

    switch (atributo)
    {

    // Comparação de cartas (Atributo: População)
    case 1:
        printf("\nComparação do Atributo: População\n");
        printf("Carta 1 - %s: %d\n", pais1, populacao1);
        printf("Carta 2 - %s: %d\n", pais2, populacao2);

        if (populacao1 > populacao2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
        }
        else if (populacao1 < populacao2)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;

    // Comparação de cartas (Atributo: Área)
    case 2:
        printf("\nComparação do Atributo: Área\n");
        printf("Carta 1 - %s: %.2f km²\n", pais1, area_km2_1);
        printf("Carta 2 - %s: %.2f km²\n", pais2, area_km2_2);

        if (area_km2_1 > area_km2_2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
        }
        else if (area_km2_1 < area_km2_2)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;

    // Comparação de cartas (Atributo: PIB)
    case 3:
        printf("\nComparação do Atributo: PIB\n");
        printf("Carta 1 - %s: %.2f bilhões de reais\n", pais1, pib1);
        printf("Carta 2 - %s: %.2f bilhões de reais\n", pais2, pib2);

        if (pib1 > pib2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
        }
        else if (pib1 < pib2)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;

    // Comparação de cartas (Atributo: Pontos Turísticos)
    case 4:
        printf("\nComparação do Atributo: Pontos Turísticos\n");
        printf("Carta 1 - %s: %d\n", pais1, pontos_turisticos1);
        printf("Carta 2 - %s: %d\n", pais2, pontos_turisticos2);

        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
        }
        else if (pontos_turisticos1 < pontos_turisticos2)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;

    // Comparação de cartas (Atributo: Densidade Populacional)
    case 5:
        printf("\nComparação do Atributo: Densidade Populacional\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", pais1, densidade1);
        printf("Carta 2 - %s: %.2f hab/km²\n", pais2, densidade2);

        if (densidade1 < densidade2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
        }
        else if (densidade1 > densidade2)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
        }
        else
        {
            printf("Resultado: Empate!\n");
        }
        break;

    default:
        printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}
