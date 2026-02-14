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
    char opcao1, opcao2;
    int resultado1, resultado2;

    // Título
    printf("Criando as Cartas do jogo Super Trunfo:\n\n");

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

    printf("===== Bem-vindo ao jogo! =====\n\n"); // Menu interativo primeiro atributo
    printf("Menu do atributo 1:\n");
    printf("A - População\n");
    printf("B - Área\n");
    printf("C - PIB\n");
    printf("D - Número de pontos turísticos\n");
    printf("E - Densidade demográfica\n");
    printf("F - PIB per Capita\n");
    printf("G - Super poder\n");
    printf("Escolha o primeiro atributo: ");
    scanf(" %c", &opcao1);

    printf("\n");
    switch (opcao1)  // Exibe a opção escolhida e armazena o resultado 1
    {
    case 'A':
    case 'a':
        printf("Você escolheu o atributo população.\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;

    case 'B':
    case 'b':
        printf("Você escolheu o atributo área.\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;

    case 'C':
    case 'c':
        printf("Você escolheu o atributo PIB.\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;

    case 'D':
    case 'd':
        printf("Você escolheu o atributo número de pontos turísticos.\n");
        resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
        break;

    case 'E':
    case 'e':
        printf("Você escolheu o atributo densidade demográfica.\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;

    case 'F':
    case 'f':
        printf("Você escolheu o atributo PIB per capita.\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;

    case 'G':
    case 'g':
        printf("Você escolheu o atributo super poder.\n");
        resultado1 = sp1 > sp2 ? 1 : 0;
        break;

    default:
        printf("Opcão inválida.\n");
        break;
    }

    printf("\n");
    // Menu interativo segundo atributo. Não irá exibir a opção escolhida acima
    printf("Menu do atributo 2:\n");
    opcao1 != 'A' && opcao1 != 'a' ? printf("A - População\n") : printf("A - Você já escolheu esta opcão.\n");
    opcao1 != 'B' && opcao1 != 'b' ? printf("B - Área\n") : printf("B - Você já escolheu esta opcão.\n");
    opcao1 != 'C' && opcao1 != 'c' ? printf("C - PIB\n") : printf("C - Você já escolheu esta opcão.\n");
    opcao1 != 'D' && opcao1 != 'd' ? printf("D - Número de pontos turísticos\n") : printf("D - Você já escolheu esta opcão.\n");
    opcao1 != 'E' && opcao1 != 'e' ? printf("E - Densidade demográfica\n") : printf("E - Você já escolheu esta opcão.\n");
    opcao1 != 'F' && opcao1 != 'f' ? printf("F - PIB per Capita\n") : printf("F - Você já escolheu esta opcão.\n");
    opcao1 != 'G' && opcao1 != 'g' ? printf("G - Super poder\n") : printf("G - Você já escolheu esta opcão.\n");
    printf("Escolha o segundo atributo: ");
    scanf(" %c", &opcao2);
 
    printf("\n");
    if (opcao1 == opcao2) // Testa se o usuário não escolheu a mesma opção anterior
    {
        printf("Você já escolheu esta opção.");
    }
    else
    {
        switch (opcao2) // Exibe a opção escolhida e armazena o resultado 2
        {
        case 'A':
        case 'a':
            printf("Você escolheu o atributo população.\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;

        case 'B':
        case 'b':
            printf("Você escolheu o atributo área.\n");
            resultado2 = area1 > area1 ? 1 : 0;
            break;

        case 'C':
        case 'c':
            printf("Você escolheu o atributo PIB.\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;

        case 'D':
        case 'd':
            printf("Você escolheu o atributo número de pontos turísticos.\n");
            resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            break;

        case 'E':
        case 'e':
            printf("Você escolheu o atributo densidade demográfica.\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;

        case 'F':
        case 'f':
            printf("Você escolheu o atributo PIB per capita.\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;

        case 'G':
        case 'g':
            printf("Você escolheu o atributo super poder.\n");
            resultado2 = sp1 > sp2 ? 1 : 0;
            break;

        default:
            printf("Opcão inválida.\n");
            break;
        }

        printf("\n");
        printf("Resultado da comparação dos atributos escolhidos entre as cartas 1 e 2: ");

        if (resultado1 == 1 && resultado2 == 1)  // Resultado da comparação dos 2 atributos escolhidos
        {
            printf("Carta 1 venceu!\n");
        }
        else if (resultado1 == 0 && resultado2 == 0)
        {
            printf("A carta 2 venceu!\n");
        }
        else
        {
            printf("Empatou!\n");
        }
    }

    return 0;
}
