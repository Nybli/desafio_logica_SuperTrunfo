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
        printf("Regra do Jogo:\n");
        printf("A carta com o maior valor no atributo escolhido vencerá.\n");
        printf("Porém, para a Densidade Populacional, vence a carta que tiver o menor valor.\n");
        return 0;

    case 3:
        printf("Saindo...\n");
        return 0;

    default:
        printf("Opção inválida. Tente novamente.\n");
        return 0;
    }

    // Variáveis das Cartas
    char pais1[50], pais2[50];
    int populacao1, populacao2;
    float area_km2_1, area_km2_2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Cadastro Carta 1
    printf("\nCarta 1:\n");
    getchar(); // limpa o buffer
    printf("Digite o nome do país: ");
    fgets(pais1, 50, stdin);
    pais1[strcspn(pais1, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area_km2_1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro Carta 2
    printf("\nCarta 2:\n");
    getchar();
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

    float densidade1 = (float)populacao1 / area_km2_1;
    float densidade2 = (float)populacao2 / area_km2_2;

    int atributo1, atributo2;

    // Menu para a escolha do primeiro atributo
    printf("\nEscolha do primeiro atributo: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");

    printf("Digite o número do primeiro atributo escolhido: ");
    scanf("%d", &atributo1);

    // Menu dinâmico para a escolha do segundo atributo
    printf("\nEscolha do segundo atributo (diferente do primeiro):\n");
    if (atributo1 != 1)
        printf("1. População\n");
    if (atributo1 != 2)
        printf("2. Área\n");
    if (atributo1 != 3)
        printf("3. PIB\n");
    if (atributo1 != 4)
        printf("4. Pontos Turísticos\n");
    if (atributo1 != 5)
        printf("5. Densidade Populacional\n");

    printf("Digite o número do segundo atributo escolhido: ");
    scanf("%d", &atributo2);

    // Validação para garantir que os atributos sejam diferentes
    if (atributo1 == atributo2)
    {
        printf("Atenção! Você deve escolher um atributo diferente do primeiro.\n");
        return 0;
    }

    // Inicialização das variáveis de comparação
    float atributo1_carta1 = 0, atributo1_carta2 = 0;
    float atributo2_carta1 = 0, atributo2_carta2 = 0;

    // Atribuição dos valores dos atributos
    switch (atributo1)
    {
    case 1:
        atributo1_carta1 = populacao1;
        atributo1_carta2 = populacao2;
        break;
    case 2:
        atributo1_carta1 = area_km2_1;
        atributo1_carta2 = area_km2_2;
        break;
    case 3:
        atributo1_carta1 = pib1;
        atributo1_carta2 = pib2;
        break;
    case 4:
        atributo1_carta1 = pontos_turisticos1;
        atributo1_carta2 = pontos_turisticos2;
        break;
    case 5:
        atributo1_carta1 = densidade1;
        atributo1_carta2 = densidade2;
        break;
    }

    switch (atributo2)
    {
    case 1:
        atributo2_carta1 = populacao1;
        atributo2_carta2 = populacao2;
        break;
    case 2:
        atributo2_carta1 = area_km2_1;
        atributo2_carta2 = area_km2_2;
        break;
    case 3:
        atributo2_carta1 = pib1;
        atributo2_carta2 = pib2;
        break;
    case 4:
        atributo2_carta1 = pontos_turisticos1;
        atributo2_carta2 = pontos_turisticos2;
        break;
    case 5:
        atributo2_carta1 = densidade1;
        atributo2_carta2 = densidade2;
        break;
    }

    // Soma dos atributos vencedores para cada carta, sem alterar os valores originais

    float soma1 = atributo1_carta1 + atributo2_carta1;
    float soma2 = atributo1_carta2 + atributo2_carta2;

    // Exibição do Resultado
    printf("\n--- Resultado Final - Países ---\n");

    // Nome dos dois países
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n\n", pais2);

    // Atributos usados na comparação e seus valores
    printf("Atributo 1: ");
    switch (atributo1)
    {
    case 1:
        printf("População\n");
        printf("Carta 1 (%s): %.0f habitantes\n", pais1, atributo1_carta1);
        printf("Carta 2 (%s): %.0f habitantes\n\n", pais2, atributo1_carta2);
        break;
    case 2:
        printf("Área\n");
        printf("Carta 1 (%s): %.2f km²\n", pais1, atributo1_carta1);
        printf("Carta 2 (%s): %.2f km²\n\n", pais2, atributo1_carta2);
        break;
    case 3:
        printf("PIB\n");
        printf("Carta 1 (%s): %.2f bilhões de reais\n", pais1, atributo1_carta1);
        printf("Carta 2 (%s): %.2f bilhões de reais\n\n", pais2, atributo1_carta2);
        break;
    case 4:
        printf("Pontos Turísticos\n");
        printf("Carta 1 (%s): %.0f pontos turísticos\n", pais1, atributo1_carta1);
        printf("Carta 2 (%s): %.0f pontos turísticos\n\n", pais2, atributo1_carta2);
        break;
    case 5:
        printf("Densidade Populacional\n");
        printf("Carta 1 (%s): %.2f habitantes por km²\n", pais1, atributo1_carta1);
        printf("Carta 2 (%s): %.2f habitantes por km²\n\n", pais2, atributo1_carta2);
        break;
    }

    printf("Atributo 2: ");
    switch (atributo2)
    {
    case 1:
        printf("População\n");
        printf("Carta 1 (%s): %.0f habitantes\n", pais1, atributo2_carta1);
        printf("Carta 2 (%s): %.0f habitantes\n\n", pais2, atributo2_carta2);
        break;
    case 2:
        printf("Área\n");
        printf("Carta 1 (%s): %.2f km²\n", pais1, atributo2_carta1);
        printf("Carta 2 (%s): %.2f km²\n\n", pais2, atributo2_carta2);
        break;
    case 3:
        printf("PIB\n");
        printf("Carta 1 (%s): %.2f bilhões de reais\n", pais1, atributo2_carta1);
        printf("Carta 2 (%s): %.2f bilhões de reais\n\n", pais2, atributo2_carta2);
        break;
    case 4:
        printf("Pontos Turísticos\n");
        printf("Carta 1 (%s): %.0f pontos turísticos\n", pais1, atributo2_carta1);
        printf("Carta 2 (%s): %.0f pontos turísticos\n\n", pais2, atributo2_carta2);
        break;
    case 5:
        printf("Densidade Populacional\n");
        printf("Carta 1 (%s): %.2f habitantes por km²\n", pais1, atributo2_carta1);
        printf("Carta 2 (%s): %.2f habitantes por km²\n\n", pais2, atributo2_carta2);
        break;
    }

    // Soma dos atributos para cada carta
    printf("Soma dos atributos:\n");
    printf("Carta 1 (%s): %.2f pontos\n", pais1, soma1);
    printf("Carta 2 (%s): %.2f pontos\n\n", pais2, soma2);

    int densidadeInversa = 0;

    if (atributo1 == 5 && atributo2 != 5)
    {
        if (atributo1_carta1 < atributo1_carta2)
            soma1 += 1000000; // favorece carta 1
        else if (atributo1_carta1 > atributo1_carta2)
            soma2 += 1000000; // favorece carta 2
        densidadeInversa = 1;
    }
    else if (atributo2 == 5 && atributo1 != 5)
    {
        if (atributo2_carta1 < atributo2_carta2)
            soma1 += 1000000;
        else if (atributo2_carta1 > atributo2_carta2)
            soma2 += 1000000;
        densidadeInversa = 1;
    }
    else if (atributo1 == 5 && atributo2 == 5)
    {
        if ((atributo1_carta1 + atributo2_carta1) < (atributo1_carta2 + atributo2_carta2))
            soma1 += 1000000;
        else if ((atributo1_carta1 + atributo2_carta1) > (atributo1_carta2 + atributo2_carta2))
            soma2 += 1000000;
        densidadeInversa = 1;
    }

    // Carta vencedora ou empate
    if (soma1 > soma2)
        printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
    else if (soma1 < soma2)
        printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
    else
        printf("Resultado: Empate!\n");

    return 0;
}
