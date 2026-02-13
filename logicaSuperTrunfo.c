#include <stdio.h>

int main()
{

    // Declaração de variáveis
    char estado1, estado2;
    char codigo1[3], codigo2[3];           // [ ] cadeia de char pois vou adicionar mais de um caratcter "simulando uma string - texto"
    char nomeCidade1[20], nomeCidade2[20]; // [ ] cadeia de char pois vou adicionar mais de um caratcter "simulando uma string - texto"
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibpc1, pibpc2;
    float sp1, sp2;
    int opcao;

    // Título
    printf("Criando as Cartas do jogo Super Trunfo - Brenda C. C. Lopes\n\n");

    // Leitura de dados da carta 1:
    printf("Dados da carta 1:\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado1); // Obrigatório espaçamento antes de %c na leitura de um char

    printf("Digite o Código: ");
    scanf("%s", codigo1); // Não é necessário utilizar o & em uma cadeia de char

    printf("Digite o nome da Cidade: ");
    scanf("%s", nomeCidade1); // Não é necessário utilizar o & em uma cadeia de char

    printf("Digite o número da população: ");
    scanf("%lu", &populacao1);

    printf("Digite o número da área: ");
    scanf("%f", &area1);

    printf("Digite o número do PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos: ");
    scanf("%i", &pontosTuristicos1);

    densidade1 = populacao1 / area1; // calculo da densidade populacional
    pibpc1 = pib1 / populacao1;      // calculo PIB per capita
    sp1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibpc1 + (1.0 / densidade1);

    printf("\n");

    // Leitura de dados da carta 2:
    printf("Dados da carta 2:\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado2); // Obrigatório espaçamento antes de %c na leitura de um char

    printf("Digite o Código: ");
    scanf("%s", codigo2); // Não é necessário utilizar o & em uma cadeia de char

    printf("Digite o nome da Cidade: ");
    scanf("%s", nomeCidade2); // Não é necessário utilizar o & em uma cadeia de char

    printf("Digite o número da população: ");
    scanf("%lu", &populacao2);

    printf("Digite o número da área: ");
    scanf("%f", &area2);

    printf("Digite o número do PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos: ");
    scanf("%i", &pontosTuristicos2);

    densidade2 = populacao2 / area2; // calculo da densidade populacional
    pibpc2 = pib2 / populacao2;      // calculo PIB per capita
    sp2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibpc2 + (1.0 / densidade2);

    printf("\n");

    // Exibição em tela dos dados da carta 1:
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km² \n", area1);            // Adicionado número 2 em (%.2f) para exibir 2 casas decimais após o ponto
    printf("PIB: %.2f bilhões de reais \n", pib1); // Adicionado número 2 em (%.2f) para exibir 2 casas decimais após o ponto
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", pibpc1);
    printf("Super poder: %.2f\n", sp1);

    printf("\n");

    // Exibição em tela dos dados da carta 2:
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);             // Adicionado número 2 em (%.2f) para exibir 2 casas decimais após o ponto
    printf("PIB: %.2f bilhões de reais \n", pib2); // Adicionado número 2 em (%.2f) para exibir 2 casas decimais após o ponto
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pibpc2);
    printf("Super poder: %.2f\n", sp2);

    printf("\n");

    printf("===== MENU =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - Todos\n\n");
    printf("Escolha um atributo para comparar: ");
    scanf("%i", &opcao);

    printf("\n");

    switch (opcao)  // estrutura de decisão usada para escolher um entre vários caminhos
    {
    case 1: // Comparação atributo população 
        printf("Atributo população:\n");  
        printf("Carta 1: %lu\n", populacao1);
        printf("Carta 2: %lu\n", populacao2);
        if (populacao1 > populacao2)
        {
            printf("Carta 1 venceu!\n\n");
        }
        else if (populacao1 < populacao2)
        {
            printf("Carta 2 venceu!\n\n");
        }
        else
        {
            printf("Empate!\n\n");
        }
        break;
    case 2: // Comparação atributo  área
        printf("Atributo área:\n");
        printf("Carta 1: %.2f\n", area1);
        printf("Carta 2: %.2f\n", area2);
        if (area1 > area2)
        {
            printf("Carta 1 venceu!\n\n");
        }
        else if (area1 < area2)
        {
            printf("Carta 2 venceu!\n\n");
        }
        else
        {
            printf("Empate!\n\n");
        }
        break;
    case 3: // Comparação atributo PIB
        printf("Atributo PIB:\n");
        printf("Carta 1: %.2f\n", pib1);
        printf("Carta 2: %.2f\n", pib2);
        if (pib1 > pib2)
        {
            printf("Carta 1 venceu!\n\n");
        }
        else if (pib1 < pib2)
        {
            printf("Carta 2 venceu!\n\n");
        }
        else
        {
            printf("Empate!\n\n");
        }
        break;
    case 4: // Comparação atributo pontos turísticos
        printf("Atributo pontos turísticos:\n");
        printf("Carta 1: %i\n", pontosTuristicos1);
        printf("Carta 2: %i\n", pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("Carta 1 venceu!\n\n");
        }
        else if (pontosTuristicos1 < pontosTuristicos2)
        {
            printf("Carta 2 venceu!\n\n");
        }
        else
        {
            printf("Empate!\n\n");
        }
        break;
    case 5: // Comparação atributo densidade demográfica
        printf("Atributo densidade demográfica:\n");
        printf("Carta 1: %.2f\n", densidade1);
        printf("Carta 2: %.2f\n", densidade2);
        if (densidade1 < densidade2)
        {
            printf("Carta 1 venceu!\n\n");
        }
        else if (densidade1 > densidade2)
        {
            printf("Carta 2 venceu!\n\n");
        }
        else
        {
            printf("Empate!\n\n");
        }
        break;
    case 6: // Comparação de todos atributos 
        printf("Todos atributos\n\n");
        printf("Atributo população:\n");
        printf("Carta 1: %lu\n", populacao1);
        printf("Carta 2: %lu\n", populacao2);
        if (populacao1 > populacao2)
        {
            printf("Carta 1 venceu!\n\n");
        }
        else if (populacao1 < populacao2)
        {
            printf("Carta 2 venceu!\n\n");
        }
        else
        {
            printf("Empate!\n\n");
        }

        printf("Atributo área\n");
        printf("Carta 1: %.2f\n", area1);
        printf("Carta 2: %.2f\n", area2);
        if (area1 > area2)
        {
            printf("Carta 1 venceu!\n\n");
        }
        else if (area1 < area2)
        {
            printf("Carta 2 venceu!\n\n");
        }
        else
        {
            printf("Empate!\n\n");
        }

        printf("Atributo PIB\n");
        printf("Carta 1: %.2f\n", pib1);
        printf("Carta 2: %.2f\n", pib2);
        if (pib1 > pib2)
        {
            printf("Carta 1 venceu!\n\n");
        }
        else if (pib1 < pib2)
        {
            printf("Carta 2 venceu!\n\n");
        }
        else
        {
            printf("Empate!\n\n");
        }

        printf("Atributo pontos turisticos\n");
        printf("Carta 1: %i\n", pontosTuristicos1);
        printf("Carta 2: %i\n", pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("Carta 1 venceu!\n\n");
        }
        else if (pontosTuristicos1 < pontosTuristicos2)
        {
            printf("Carta 2 venceu!\n\n");
        }
        else
        {
            printf("Empate!\n\n");
        }

        printf("Atributo densidade demográfica\n");
        printf("Carta 1: %.2f\n", densidade1);
        printf("Carta 2: %.2f\n", densidade2);
        if (densidade1 < densidade2)
        {
            printf("Carta 1 venceu!\n\n");
        }
        else if (densidade1 > densidade2)
        {
            printf("Carta 2 venceu!\n\n");
        }
        else
        {
            printf("Empate!\n\n");
        }

        printf("Atributo PIB per Capita\n");
        printf("Carta 1: %.2f\n", pibpc1);
        printf("Carta 2: %.2f\n", pibpc2);
        if (pibpc1 > pibpc2)
        {
            printf("Carta 1 venceu!\n\n");
        }
        else if (pibpc1 < pibpc2)
        {
            printf("Carta 2 venceu!\n\n");
        }
        else
        {
            printf("Empate!\n\n");
        }

        printf("Atributo: Super poder\n");
        printf("Carta 1: %.2f\n", sp1);
        printf("Carta 2: %.2f\n", sp2);
        if (sp1 > sp2)
        {
            printf("Carta 1 venceu!\n\n");
        }
        else if (sp1 < sp2)
        {
            printf("Carta 2 venceu!\n\n");
        }
        else
        {
            printf("Empate!\n\n");
        }
        break;
    default:
        printf("Opção inválida!");
        break;
    }

    return 0;
}
