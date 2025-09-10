#include <stdio.h>
#include <string.h>

int main()
{
    char Pais1[3], Pais2[3], continuar;
    char NomeDoEstado1[50], NomeDoEstado2[50];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float DensidadeDemografica1, DensidadeDemografica2;
    float PIBPercapta1, PIBPercapta2;
    float PIB1, PIB2;
    int NumeroDePontosTuristicos1, NumeroDePontosTuristicos2;
    char CartaEscolhida[50];
    int atributoEscolhido;
    int menu1;
    int cartasJaCadastradas = 0;

    printf("   === Seja bem-vindo ao jogo Super Trunfo! ===\n\n");

    do
    {
        printf("### SUPER TRUNFO ###\n\n");
        printf("1 - Cadastrar cartas para iniciar o jogo\n");
        printf("2 - Instrucoes do jogo\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &menu1);
        printf("\n");

        switch (menu1)
        {
        case 1: // Cadastro das cartas e batalha
            // === CADASTRO DA PRIMEIRA CARTA ===
            printf("=== CADASTRO DA PRIMEIRA CARTA ===\n");
            printf("Digite as iniciais do pais (2 letras): ");
            scanf("%s", Pais1);
            printf("Digite o nome do estado: ");
            scanf("%s", NomeDoEstado1);
            printf("Digite a populacao do estado: ");
            scanf("%d", &Populacao1);
            printf("Digite a area do estado (km²): ");
            scanf("%f", &Area1);
            printf("Digite o PIB do estado: ");
            scanf("%f", &PIB1);
            printf("Digite o numero de pontos turisticos: ");
            scanf("%d", &NumeroDePontosTuristicos1);
            printf("\n");

            // === CADASTRO DA SEGUNDA CARTA ===
            printf("=== CADASTRO DA SEGUNDA CARTA ===\n");
            printf("Digite as iniciais do pais (2 letras): ");
            scanf("%s", Pais2);
            printf("Digite o nome do estado: ");
            scanf("%s", NomeDoEstado2);
            printf("Digite a populacao do estado: ");
            scanf("%d", &Populacao2);
            printf("Digite a area do estado (km²): ");
            scanf("%f", &Area2);
            printf("Digite o PIB do estado: ");
            scanf("%f", &PIB2);
            printf("Digite o numero de pontos turisticos: ");
            scanf("%d", &NumeroDePontosTuristicos2);
            printf("\n");

            // === CÁLCULO DOS ATRIBUTOS DERIVADOS ===
            DensidadeDemografica1 = Populacao1 / Area1;
            DensidadeDemografica2 = Populacao2 / Area2;
            PIBPercapta1 = PIB1 / Populacao1;
            PIBPercapta2 = PIB2 / Populacao2;

            // === EXIBIÇÃO DAS CARTAS CADASTRADAS ===
            printf("=== CARTAS CADASTRADAS ===\n");
            printf("\n--- CARTA 1: %s, %s ---\n", Pais1, NomeDoEstado1);
            printf("Populacao: %d habitantes\n", Populacao1);
            printf("Area: %.2f km²\n", Area1);
            printf("PIB: R$ %.2f\n", PIB1);
            printf("Pontos Turisticos: %d\n", NumeroDePontosTuristicos1);
            printf("Densidade Demografica: %.2f hab/km²\n", DensidadeDemografica1);
            printf("PIB per Capita: R$ %.2f\n", PIBPercapta1);

            printf("\n--- CARTA 2: %s, %s ---\n", Pais2, NomeDoEstado2);
            printf("Populacao: %d habitantes\n", Populacao2);
            printf("Area: %.2f km²\n", Area2);
            printf("PIB: R$ %.2f\n", PIB2);
            printf("Pontos Turisticos: %d\n", NumeroDePontosTuristicos2);
            printf("Densidade Demografica: %.2f hab/km²\n", DensidadeDemografica2);
            printf("PIB per Capita: R$ %.2f\n", PIBPercapta2);
            printf("\n");

            cartasJaCadastradas = 1;

            // === INÍCIO DA BATALHA ===
            do
            {
                printf("=== BATALHA DE CARTAS ===\n");
                printf("Escolha um atributo para a comparacao:\n");
                printf("1 - Populacao\n");
                printf("2 - Area\n");
                printf("3 - PIB\n");
                printf("4 - Pontos Turisticos\n");
                printf("5 - Densidade Demografica (menor valor vence!)\n");
                printf("6 - PIB per Capita\n");
                printf("Digite sua escolha: ");
                scanf("%d", &atributoEscolhido);
                printf("\n");

                // === COMPARAÇÃO DOS ATRIBUTOS ===
                switch (atributoEscolhido)
                {
                case 1: // População
                    printf("=== COMPARACAO: POPULACAO ===\n");
                    printf("%s, %s: %d habitantes\n", Pais1, NomeDoEstado1, Populacao1);
                    printf("%s, %s: %d habitantes\n", Pais2, NomeDoEstado2, Populacao2);
                    printf("\n");

                    if (Populacao1 > Populacao2)
                    {
                        printf("🏆 VENCEDOR: %s, %s!\n", Pais1, NomeDoEstado1);
                        printf("Populacao maior: %d > %d\n", Populacao1, Populacao2);
                    }
                    else if (Populacao2 > Populacao1)
                    {
                        printf("🏆 VENCEDOR: %s, %s!\n", Pais2, NomeDoEstado2);
                        printf("Populacao maior: %d > %d\n", Populacao2, Populacao1);
                    }
                    else
                    {
                        printf("🤝 EMPATE! Ambas as cartas tem a mesma populacao.\n");
                    }
                    break;

                case 2: // Área
                    printf("=== COMPARACAO: AREA ===\n");
                    printf("%s, %s: %.2f km²\n", Pais1, NomeDoEstado1, Area1);
                    printf("%s, %s: %.2f km²\n", Pais2, NomeDoEstado2, Area2);
                    printf("\n");

                    if (Area1 > Area2)
                    {
                        printf("🏆 VENCEDOR: %s, %s!\n", Pais1, NomeDoEstado1);
                        printf("Area maior: %.2f > %.2f km²\n", Area1, Area2);
                    }
                    else if (Area2 > Area1)
                    {
                        printf("🏆 VENCEDOR: %s, %s!\n", Pais2, NomeDoEstado2);
                        printf("Area maior: %.2f > %.2f km²\n", Area2, Area1);
                    }
                    else
                    {
                        printf("🤝 EMPATE! Ambas as cartas tem a mesma area.\n");
                    }
                    break;

                case 3: // PIB
                    printf("=== COMPARACAO: PIB ===\n");
                    printf("%s, %s: R$ %.2f\n", Pais1, NomeDoEstado1, PIB1);
                    printf("%s, %s: R$ %.2f\n", Pais2, NomeDoEstado2, PIB2);
                    printf("\n");

                    if (PIB1 > PIB2)
                    {
                        printf("🏆 VENCEDOR: %s, %s!\n", Pais1, NomeDoEstado1);
                        printf("PIB maior: R$ %.2f > R$ %.2f\n", PIB1, PIB2);
                    }
                    else if (PIB2 > PIB1)
                    {
                        printf("🏆 VENCEDOR: %s, %s!\n", Pais2, NomeDoEstado2);
                        printf("PIB maior: R$ %.2f > R$ %.2f\n", PIB2, PIB1);
                    }
                    else
                    {
                        printf("🤝 EMPATE! Ambas as cartas tem o mesmo PIB.\n");
                    }
                    break;

                case 4: // Pontos Turísticos
                    printf("=== COMPARACAO: PONTOS TURISTICOS ===\n");
                    printf("%s, %s: %d pontos\n", Pais1, NomeDoEstado1, NumeroDePontosTuristicos1);
                    printf("%s, %s: %d pontos\n", Pais2, NomeDoEstado2, NumeroDePontosTuristicos2);
                    printf("\n");

                    if (NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2)
                    {
                        printf("🏆 VENCEDOR: %s, %s!\n", Pais1, NomeDoEstado1);
                        printf("Mais pontos turisticos: %d > %d\n", NumeroDePontosTuristicos1, NumeroDePontosTuristicos2);
                    }
                    else if (NumeroDePontosTuristicos2 > NumeroDePontosTuristicos1)
                    {
                        printf("🏆 VENCEDOR: %s, %s!\n", Pais2, NomeDoEstado2);
                        printf("Mais pontos turisticos: %d > %d\n", NumeroDePontosTuristicos2, NumeroDePontosTuristicos1);
                    }
                    else
                    {
                        printf("🤝 EMPATE! Ambas as cartas tem o mesmo numero de pontos turisticos.\n");
                    }
                    break;

                case 5: // Densidade Demográfica (MENOR VENCE)
                    printf("=== COMPARACAO: DENSIDADE DEMOGRAFICA (MENOR VENCE!) ===\n");
                    printf("%s, %s: %.2f hab/km²\n", Pais1, NomeDoEstado1, DensidadeDemografica1);
                    printf("%s, %s: %.2f hab/km²\n", Pais2, NomeDoEstado2, DensidadeDemografica2);
                    printf("\n");

                    if (DensidadeDemografica1 < DensidadeDemografica2)
                    {
                        printf("🏆 VENCEDOR: %s, %s!\n", Pais1, NomeDoEstado1);
                        printf("Densidade menor (melhor): %.2f < %.2f hab/km²\n", DensidadeDemografica1, DensidadeDemografica2);
                    }
                    else if (DensidadeDemografica2 < DensidadeDemografica1)
                    {
                        printf("🏆 VENCEDOR: %s, %s!\n", Pais2, NomeDoEstado2);
                        printf("Densidade menor (melhor): %.2f < %.2f hab/km²\n", DensidadeDemografica2, DensidadeDemografica1);
                    }
                    else
                    {
                        printf("🤝 EMPATE! Ambas as cartas tem a mesma densidade demografica.\n");
                    }
                    break;

                case 6: // PIB per Capita
                    printf("=== COMPARACAO: PIB PER CAPITA ===\n");
                    printf("%s, %s: R$ %.2f\n", Pais1, NomeDoEstado1, PIBPercapta1);
                    printf("%s, %s: R$ %.2f\n", Pais2, NomeDoEstado2, PIBPercapta2);
                    printf("\n");

                    if (PIBPercapta1 > PIBPercapta2)
                    {
                        printf("🏆 VENCEDOR: %s, %s!\n", Pais1, NomeDoEstado1);
                        printf("PIB per capita maior: R$ %.2f > R$ %.2f\n", PIBPercapta1, PIBPercapta2);
                    }
                    else if (PIBPercapta2 > PIBPercapta1)
                    {
                        printf("🏆 VENCEDOR: %s, %s!\n", Pais2, NomeDoEstado2);
                        printf("PIB per capita maior: R$ %.2f > R$ %.2f\n", PIBPercapta2, PIBPercapta1);
                    }
                    else
                    {
                        printf("🤝 EMPATE! Ambas as cartas tem o mesmo PIB per capita.\n");
                    }
                    break;

                default:
                    printf("❌ OPCAO INVALIDA! Escolha um numero de 1 a 6.\n");
                    continue; // Volta para o início do loop para escolher novamente
                }

                printf("\n");
                printf("Deseja jogar novamente? (s/n): ");
                scanf(" %c", &continuar);
                printf("\n");

            } while (continuar == 's' || continuar == 'S');

            printf("Obrigado por jogar! Ate a proxima.\n\n");
            break;

        case 2: // Instruções do jogo
            printf("=== INSTRUCOES DO JOGO ===\n");
            printf("O Super Trunfo e um jogo de cartas onde voce compara atributos!\n\n");
            printf("COMO JOGAR:\n");
            printf("1. Cadastre duas cartas com informacoes de estados/paises\n");
            printf("2. Escolha um atributo para comparar entre as cartas\n");
            printf("3. A carta com o MAIOR valor no atributo escolhido vence\n");
            printf("   EXCETO para Densidade Demografica (menor valor vence)\n\n");
            printf("ATRIBUTOS DISPONIVEIS:\n");
            printf("- Populacao: Numero de habitantes\n");
            printf("- Area: Tamanho em km²\n");
            printf("- PIB: Produto Interno Bruto\n");
            printf("- Pontos Turisticos: Quantidade de atracoes\n");
            printf("- Densidade Demografica: Habitantes por km² (menor vence!)\n");
            printf("- PIB per Capita: PIB dividido pela populacao\n\n");
            break;

        case 3: // Sair
            printf("Obrigado por jogar Super Trunfo! Ate logo! 👋\n");
            break;

        default:
            printf("❌ OPCAO INVALIDA! Digite um numero de 1 a 3.\n\n");
            break;
        }
    } while (menu1 != 3);

    return 0;
}
