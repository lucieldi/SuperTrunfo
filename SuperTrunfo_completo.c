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
    int Atributo1, Atributo2, Atributo3, Atributo4;
    int menu1;

    // Cadastro de cartas

    // carta1
    printf("   Seja bem vindo ao jogo Super Trunfo. \n\n");

    do
    {
        printf("### SUPER TRUNFO ###\n\n");

        printf("1 - Cadastre as cartas para iniciar o Jogo.\n");
        printf("2 - Instrucoes de jogo.\n");
        printf("3 - Sair.\n");
        scanf("%d", &menu1);

        switch (menu1)
        {
        case 1: // cadastra as cartas para começar o jogo

            printf("digite os dados da primeira carta!! \n");

            printf("Digite as iniciais de um Pais com 2 letras \n");
            scanf("%s", Pais1);
            printf("Digite o nome de um Estado \n");
            scanf("%s", NomeDoEstado1);
            printf("Digite um valor com a quantidade de pessoas da Estado \n");
            scanf("%d", &Populacao1);
            printf("Digite o valor da area do Estado \n");
            scanf("%f", &Area1);
            printf("Digite o valor do PIB do Estado \n");
            scanf("%f", &PIB1);
            printf("Digite a quantidade de pontos turisticos do Estado \n");
            scanf("%d", &NumeroDePontosTuristicos1);
            printf("\n\n");

            // carta2
            printf("digite os dados da segunda carta \n");

            printf("Digite as iniciais de um Pais com 2 letras \n");
            scanf("%s", Pais2);
            printf("Digite o nome de um Estado \n");
            scanf("%s", NomeDoEstado2);
            printf("Digite um valor com a quantidade de pessoas do Estado \n");
            scanf("%d", &Populacao2);
            printf("Digite o valor da area do Estado \n");
            scanf("%f", &Area2);
            printf("Digite o valor do PIB do Estado \n");
            scanf("%f", &PIB2);
            printf("Digite a quantidade de pontos turisticos do Estado \n");
            scanf("%d", &NumeroDePontosTuristicos2);
            printf("\n\n");

            // calcula e exibir a densidade demografica e pib percapta
            DensidadeDemografica1 = Populacao1 / Area1;
            DensidadeDemografica2 = Populacao2 / Area2;
            PIBPercapta1 = PIB1 / Populacao1;
            PIBPercapta2 = PIB2 / Populacao2;

            printf("A Densidade Demografica da Carta %s, %s e: %.2f habitantes/km \n", Pais1, NomeDoEstado1, DensidadeDemografica1);
            printf("O PIB Percapta da carta %s, %s e: %.2f Reais \n\n", Pais1, NomeDoEstado1, PIBPercapta1);
            printf("A Densidade Demografica da Carta %s, %s e: %.2f habitantes/km\n", Pais2, NomeDoEstado2, DensidadeDemografica2);
            printf("O PIB Percapta da carta %s, %s e: %.2f Reais \n\n", Pais2, NomeDoEstado2, PIBPercapta2);

            // comparar um atributo escolhido:a
            do
            {

                printf("\n\n\n");
                printf("Agora vamos comecar a Batalha!! \n\n");

                printf("Escreva o Estado da carta que vc escolheu para batalhar!!. \n");

                printf("%s,%s \n", Pais1, NomeDoEstado1);
                printf("%s,%s \n", Pais2, NomeDoEstado2);
                scanf("%s", CartaEscolhida);

                if (strcmp(CartaEscolhida, NomeDoEstado1) == 0)
                {
                    printf("\n\nAgora digite um numero para escolher o Primeiro atributo da carta %s para estaremos Batalhando.\n\n", NomeDoEstado1);

                    // Exibição da 1 Carta cadastrada:

                    printf("Estado: %s \n", NomeDoEstado1);
                    printf("Pais: %s \n", Pais1);
                    printf("1-Populacao: %d \n", Populacao1);
                    printf("2-Area: %.2f Km \n", Area1);
                    printf("3-PIB: %.2f Reais\n", PIB1);
                    printf("4-Numero de Pontos Turisticos: %d \n", NumeroDePontosTuristicos1);
                    printf("5-Densidade Demografica: %.2f hab/km\n", DensidadeDemografica1);
                    printf("6-PIB per Capita: %.2f reais\n", PIBPercapta1);

                    scanf("%d", &Atributo1);
                    printf("\n\nAgora digite um numero para escolher o Segundo atributo da carta %s para estaremos Batalhando.\n\n", NomeDoEstado1);

                    // Exibição da 1 Carta cadastrada:

                    printf("Estado: %s \n", NomeDoEstado1);
                    printf("Pais: %s \n", Pais1);
                    printf("1-Populacao: %d \n", Populacao1);
                    printf("2-Area: %.2f Km \n", Area1);
                    printf("3-PIB: %.2f Reais\n", PIB1);
                    printf("4-Numero de Pontos Turisticos: %d \n", NumeroDePontosTuristicos1);
                    printf("5-Densidade Demografica: %.2f hab/km\n", DensidadeDemografica1);
                    printf("6-PIB per Capita: %.2f reais\n", PIBPercapta1);

                    scanf("%d", &Atributo2);
                    printf("\n\n");

                    if (Atributo1 == 1) // atributo população
                    {
                        Atributo1 = Populacao1;
                        printf("Voce escolheu o atributo Populacao: %d\n", Populacao1);
                        if (Populacao1 > Populacao2)
                        {
                            printf("O atributo Populacao: %d, da carta %s e maior voce Venceu!! \n\n", Populacao1, NomeDoEstado1);
                        }
                        else
                        {
                            printf("O atributo Populacao: %d, da carta %s e menor voce Perdeu!! \n\n", Populacao1, NomeDoEstado1);
                        }
                    }
                    if (Atributo2 == 1) // atributo população
                    {
                        Atributo2 = Populacao1;
                        printf("Voce escolheu o atributo Populacao: %d\n", Populacao1);
                        if (Populacao1 > Populacao2)
                        {
                            printf("O atributo Populacao: %d, da carta %s e maior voce Venceu!! \n\n", Populacao1, NomeDoEstado1);
                        }
                        else
                        {
                            printf("O atributo Populacao: %d, da carta %s e menor voce Perdeu!! \n\n", Populacao1, NomeDoEstado1);
                        }
                    }

                    if (Atributo1 == 2) // atributo area
                    {
                        Atributo1 = Area1;
                        printf("Voce escolheu o atributo Area: %.2f\n", Area1);
                        if (Area1 > Area2)
                        {
                            printf("O atributo Area: %.2f, da carta %s e maior voce Venceu!! \n\n", Area1, NomeDoEstado1);
                        }
                        else
                        {
                            printf("O atributo Area: %.2f, da carta %s e menor voce Perdeu!! \n\n", Area1, NomeDoEstado1);
                        }
                    }
                    if (Atributo2 == 2) // atributo area
                    {
                        Atributo2 = Area1;
                        printf("Voce escolheu o atributo Area: %.2f\n", Area1);
                        if (Area1 > Area2)
                        {
                            printf("O atributo Area: %.2f, da carta %s e maior voce Venceu!! \n\n", Area1, NomeDoEstado1);
                        }
                        else
                        {
                            printf("O atributo Area: %.2f, da carta %s e menor voce Perdeu!! \n\n", Area1, NomeDoEstado1);
                        }
                    }

                    if (Atributo1 == 3) // pib
                    {
                        Atributo1 = PIB1;
                        printf("Voce escolheu o atributo PIB: %.2f\n", PIB1);
                        if (PIB1 > PIB2)
                        {
                            printf("O atributo PIB: %.2f, da carta %s e maior voce Venceu!! \n\n", PIB1, NomeDoEstado1);
                        }
                        else
                        {
                            printf("O atributo PIB: %.2f, da carta %s e menor voce Perdeu!! \n\n", PIB1, NomeDoEstado1);
                        }
                    }
                    if (Atributo2 == 3) // pib
                    {
                        Atributo2 = PIB1;
                        printf("Voce escolheu o atributo PIB: %.2f\n", PIB1);
                        if (PIB1 > PIB2)
                        {
                            printf("O atributo PIB: %.2f, da carta %s e maior voce Venceu!! \n\n", PIB1, NomeDoEstado1);
                        }
                        else
                        {
                            printf("O atributo PIB: %.2f, da carta %s e menor voce Perdeu!! \n\n", PIB1, NomeDoEstado1);
                        }
                    }

                    if (Atributo1 == 4) // numero de pontos turisticos
                    {
                        Atributo1 = NumeroDePontosTuristicos1;
                        printf("Voce escolheu o atributo Pontos Turisticos: %d\n", NumeroDePontosTuristicos1);
                        if (NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2)
                        {
                            printf("O atributo Pontos Turisticos: %d, da carta %s e maior voce Venceu!! \n\n", NumeroDePontosTuristicos1, NomeDoEstado1);
                        }
                        else
                        {
                            printf("O atributo Pontos Turisticos: %d, da carta %s e menor voce Perdeu!! \n\n", NumeroDePontosTuristicos1, NomeDoEstado1);
                        }
                    }
                    if (Atributo2 == 4) // numero de pontos turisticos
                    {
                        Atributo2 = NumeroDePontosTuristicos1;
                        printf("Voce escolheu o atributo Pontos Turisticos: %d\n", NumeroDePontosTuristicos1);
                        if (NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2)
                        {
                            printf("O atributo Pontos Turisticos: %d, da carta %s e maior voce Venceu!! \n\n", NumeroDePontosTuristicos1, NomeDoEstado1);
                        }
                        else
                        {
                            printf("O atributo Pontos Turisticos: %d, da carta %s e menor voce Perdeu!! \n\n", NumeroDePontosTuristicos1, NomeDoEstado1);
                        }
                    }

                    if (Atributo1 == 5) // densidade Demografica
                    {
                        Atributo1 = DensidadeDemografica1;
                        printf("Voce escolheu o atributo Densidade Demografica: %.2f\n", DensidadeDemografica1);
                        if (DensidadeDemografica1 > DensidadeDemografica2)
                        {
                            printf("O atributo Densidade Demografica: %.2f, da carta %s e maior voce Perdeu!! \n\n", DensidadeDemografica1, NomeDoEstado1);
                        }
                        else
                        {
                            printf("O atributo Densidade Demografica: %.2f, da carta %s e menor voce Venceu!! \n\n", DensidadeDemografica1, NomeDoEstado1);
                        }
                    }
                    if (Atributo2 == 5) // densidade Demografica
                    {
                        Atributo2 = DensidadeDemografica1;
                        printf("Voce escolheu o atributo Densidade Demografica: %.2f\n", DensidadeDemografica1);
                        if (DensidadeDemografica1 > DensidadeDemografica2)
                        {
                            printf("O atributo Densidade Demografica: %.2f, da carta %s e maior voce Perdeu!! \n\n", DensidadeDemografica1, NomeDoEstado1);
                        }
                        else
                        {
                            printf("O atributo Densidade Demografica: %.2f, da carta %s e menor voce Venceu!! \n\n", DensidadeDemografica1, NomeDoEstado1);
                        }
                    }

                    if (Atributo1 == 6) // pib percapta
                    {
                        Atributo1 = PIBPercapta1;
                        printf("Voce escolheu o atributo PIB Percapta: %.2f\n", PIBPercapta1);
                        if (PIBPercapta1 > PIBPercapta2)
                        {
                            printf("O atributo PIB Percapta: %.2f, da carta %s e maior voce Venceu!! \n\n", PIBPercapta1, NomeDoEstado1);
                        }
                        else
                        {
                            printf("O atributo PIB Percapta: %.2f, da carta %s e menor voce Perdeu!! \n\n", PIBPercapta1, NomeDoEstado1);
                        }
                    }
                    if (Atributo2 == 6) // pib percapta
                    {
                        Atributo2 = PIBPercapta1;
                        printf("Voce escolheu o atributo PIB Percapta: %.2f\n", PIBPercapta1);
                        if (PIBPercapta1 > PIBPercapta2)
                        {
                            printf("O atributo PIB Percapta: %.2f, da carta %s e maior voce Venceu!! \n\n", PIBPercapta1, NomeDoEstado1);
                        }
                        else
                        {
                            printf("O atributo PIB Percapta: %.2f, da carta %s e menor voce Perdeu!! \n\n", PIBPercapta1, NomeDoEstado1);
                        }
                    }

                    printf("A soma do Primeiro Atributo:%d com o Segundo Atributo:%d \n\n", Atributo1, Atributo2);
                    if ((Atributo1 + Atributo2) > (Atributo3 + Atributo4))
                    {
                        printf("VOCÊ VENCEU!!\n\n");
                        printf("A soma da carta Pais:%s ,Estado: %s, é maior que a da carta Pais:%s ,Estado: %s ", Pais1, NomeDoEstado1, Pais2, NomeDoEstado2);
                    }
                    else if ((Atributo1 + Atributo2) < (Atributo3 + Atributo4))
                    {
                        printf("VOCÊ PERDEU!!\n\n");
                        printf("A soma dos atributos da carta Pais:%s ,Estado: %s, é menor que a da carta Pais:%s ,Estado: %s ", Pais1, NomeDoEstado1, Pais2, NomeDoEstado2);
                    }
                    else
                    {
                        printf("VOCÊ EMPATOU!!\n\n");
                        printf("A soma dos atributos da carta Pais:%s ,Estado: %s, igual a carta Pais:%s ,Estado: %s ", Pais1, NomeDoEstado1, Pais2, NomeDoEstado2);
                    }
                }

                else
                {
                    printf("\n\nAgora digite um numero para escolher o Primeiro atributo da carta %s para estaremos Batalhando.\n\n", NomeDoEstado2);

                    printf("Pais: %s \n", NomeDoEstado2);
                    printf("Pais: %s \n", Pais2);
                    printf("1-Populacao: %d \n", Populacao2);
                    printf("2-Area: %.2f Km \n", Area2);
                    printf("3-PIB: %.2f Reais\n", PIB2);
                    printf("4-Numero de Pontos Turisticos: %d \n", NumeroDePontosTuristicos2);
                    printf("5-Densidade Demografica: %.2f hab/km\n", DensidadeDemografica2);
                    printf("6-PIB per Capita: %.2f reais\n", PIBPercapta2);

                    scanf("%d", &Atributo3);
                    printf("\n\nAgora digite um numero para escolher o Segundo atributo da carta %s para estaremos Batalhando.\n\n", NomeDoEstado2);

                    printf("Pais: %s \n", NomeDoEstado2);
                    printf("Pais: %s \n", Pais2);
                    printf("1-Populacao: %d \n", Populacao2);
                    printf("2-Area: %.2f Km \n", Area2);
                    printf("3-PIB: %.2f Reais\n", PIB2);
                    printf("4-Numero de Pontos Turisticos: %d \n", NumeroDePontosTuristicos2);
                    printf("5-Densidade Demografica: %.2f hab/km\n", DensidadeDemografica2);
                    printf("6-PIB per Capita: %.2f reais\n", PIBPercapta2);

                    scanf("%d", &Atributo4);
                    printf("\n\n");

                    if (Atributo3 == 1) // atributo população
                    {
                        Atributo3 = Populacao2;
                        printf("Voce escolheu o atributo Populacao: %d\n", Populacao2);
                        if (Populacao2 > Populacao1)
                        {
                            printf("O atributo Populacao: %d, da carta %s e maior voce Venceu!! \n\n", Populacao2, NomeDoEstado2);
                        }
                        else
                        {
                            printf("O atributo Popaulacao: %d, da carta %s e menor voce Perdeu!! \n\n", Populacao2, NomeDoEstado2);
                        }
                    }
                    if (Atributo4 == 1) // atributo população
                    {
                        Atributo4 = Populacao2;
                        printf("Voce escolheu o atributo Populacao: %d\n", Populacao2);
                        if (Populacao2 > Populacao1)
                        {
                            printf("O atributo Populacao: %d, da carta %s e maior voce Venceu!! \n\n", Populacao2, NomeDoEstado2);
                        }
                        else
                        {
                            printf("O atributo Popaulacao: %d, da carta %s e menor voce Perdeu!! \n\n", Populacao2, NomeDoEstado2);
                        }
                    }

                    if (Atributo3 == 2) // atributo area
                    {
                        Atributo3 = Area2;
                        printf("Voce escolheu o atributo Area: %.2f\n", Area2);
                        if (Area2 > Area1)
                        {
                            printf("O atributo Area: %.2f, da carta %s e maior voce Venceu!! \n\n", Area2, NomeDoEstado2);
                        }
                        else
                        {
                            printf("O atributo Area: %.2f, da carta %s e menor voce Perdeu!! \n\n", Area2, NomeDoEstado2);
                        }
                    }
                    if (Atributo4 == 2) // atributo area
                    {
                        Atributo4 = Area2;
                        printf("Voce escolheu o atributo Area: %.2f\n", Area2);
                        if (Area2 > Area1)
                        {
                            printf("O atributo Area: %.2f, da carta %s e maior voce Venceu!! \n\n", Area2, NomeDoEstado2);
                        }
                        else
                        {
                            printf("O atributo Area: %.2f, da carta %s e menor voce Perdeu!! \n\n", Area2, NomeDoEstado2);
                        }
                    }

                    if (Atributo3 == 3) // pib
                    {
                        Atributo3 = PIB2;
                        printf("Voce escolheu o atributo PIB: %.2f\n", PIB2);
                        if (PIB2 > PIB1)
                        {
                            printf("O atributo PIB: %.2f, da carta %s e maior voce Venceu!! \n\n", PIB2, NomeDoEstado2);
                        }
                        else
                        {
                            printf("O atributo PIB: %.2f, da carta %s e menor voce Perdeu!! \n\n", PIB2, NomeDoEstado2);
                        }
                    }
                    if (Atributo4 == 3) // pib
                    {
                        Atributo4 = PIB2;
                        printf("Voce escolheu o atributo PIB: %.2f\n", PIB2);
                        if (PIB2 > PIB1)
                        {
                            printf("O atributo PIB: %.2f, da carta %s e maior voce Venceu!! \n\n", PIB2, NomeDoEstado2);
                        }
                        else
                        {
                            printf("O atributo PIB: %.2f, da carta %s e menor voce Perdeu!! \n\n", PIB2, NomeDoEstado2);
                        }
                    }

                    if (Atributo3 == 4) // numero de pontos turisticos
                    {
                        Atributo3 = NumeroDePontosTuristicos2;
                        printf("Voce escolheu o atributo Pontos Turisticos: %d\n", NumeroDePontosTuristicos2);
                        if (NumeroDePontosTuristicos2 > NumeroDePontosTuristicos1)
                        {
                            printf("O atributo Pontos Turisticos: %d, da carta %s e maior voce Venceu!! \n\n", NumeroDePontosTuristicos2, NomeDoEstado2);
                        }
                        else
                        {
                            printf("O atributo Pontos Turisticos: %d, da carta %s e menor voce Perdeu!! \n\n", NumeroDePontosTuristicos2, NomeDoEstado2);
                        }
                    }
                    if (Atributo4 == 4) // numero de pontos turisticos
                    {
                        Atributo4 = NumeroDePontosTuristicos2;
                        printf("Voce escolheu o atributo Pontos Turisticos: %d\n", NumeroDePontosTuristicos2);
                        if (NumeroDePontosTuristicos2 > NumeroDePontosTuristicos1)
                        {
                            printf("O atributo Pontos Turisticos: %d, da carta %s e maior voce Venceu!! \n\n", NumeroDePontosTuristicos2, NomeDoEstado2);
                        }
                        else
                        {
                            printf("O atributo Pontos Turisticos: %d, da carta %s e menor voce Perdeu!! \n\n", NumeroDePontosTuristicos2, NomeDoEstado2);
                        }
                    }

                    if (Atributo3 == 5) // densidade Demografica
                    {
                        Atributo3 = DensidadeDemografica2;
                        printf("Voce escolheu o atributo Densidade Demografica: %.2f\n", DensidadeDemografica2);
                        if (DensidadeDemografica2 > DensidadeDemografica1)
                        {
                            printf("O atributo Densidade Demografica: %.2f, da carta %s e maior voce Perdeu!! \n\n", DensidadeDemografica2, NomeDoEstado2);
                        }
                        else
                        {
                            printf("O atributo Densidade Demografica: %.2f, da carta %s e menor voce Ganhou!! \n\n", DensidadeDemografica2, NomeDoEstado2);
                        }
                    }
                    if (Atributo4 == 5) // densidade Demografica
                    {
                        Atributo4 = DensidadeDemografica2;
                        printf("Voce escolheu o atributo Densidade Demografica: %.2f\n", DensidadeDemografica2);
                        if (DensidadeDemografica2 > DensidadeDemografica1)
                        {
                            printf("O atributo Densidade Demografica: %.2f, da carta %s e maior voce Perdeu!! \n\n", DensidadeDemografica2, NomeDoEstado2);
                        }
                        else
                        {
                            printf("O atributo Densidade Demografica: %.2f, da carta %s e menor voce Ganhou!! \n\n", DensidadeDemografica2, NomeDoEstado2);
                        }
                    }

                    if (Atributo3 == 6) // pib percapta
                    {
                        Atributo3 = PIBPercapta2;
                        printf("Voce escolheu o atributo PIB Percapta: %.2f\n", PIBPercapta2);
                        if (PIBPercapta2 > PIBPercapta1)
                        {
                            printf("O atributo PIB Percapta: %.2f, da carta %s e maior voce Venceu!! \n\n", PIBPercapta2, NomeDoEstado2);
                        }
                        else
                        {
                            printf("O atributo PIB Percapta: %.2f, da carta %s e menor voce Perdeu!! \n\n", PIBPercapta2, NomeDoEstado2);
                        }
                    }
                    if (Atributo4 == 6) // pib percapta
                    {
                        Atributo4 = PIBPercapta2;
                        printf("Voce escolheu o atributo PIB Percapta: %.2f\n", PIBPercapta2);
                        if (PIBPercapta2 > PIBPercapta1)
                        {
                            printf("O atributo PIB Percapta: %.2f, da carta %s e maior voce Venceu!! \n\n", PIBPercapta2, NomeDoEstado2);
                        }
                        else
                        {
                            printf("O atributo PIB Percapta: %.2f, da carta %s e menor voce Perdeu!! \n\n", PIBPercapta2, NomeDoEstado2);
                        }
                    }
                    printf("A soma do Primeiro Atributo:%d com o Segundo Atributo:%d \n\n", Atributo3, Atributo4);
                    if ((Atributo3 + Atributo4) > (Atributo1 + Atributo2))
                    {
                        printf("VOCÊ VENCEU!!\n\n");
                        printf("A soma da carta Pais:%s ,Estado: %s, é maior que a da carta Pais:%s ,Estado: %s ", Pais2,NomeDoEstado2, Pais1, NomeDoEstado1);
                    }
                    else if ((Atributo1 + Atributo2) < (Atributo3 + Atributo4))
                    {
                        printf("VOCÊ PERDEU!!\n\n");
                        printf("A soma dos atributos da carta Pais:%s ,Estado: %s, é menor que a da carta Pais:%s ,Estado: %s ", Pais2,NomeDoEstado2, Pais1, NomeDoEstado1);
                    }
                    else
                    {
                        printf("VOCÊ EMPATOU!!\n\n");
                        printf("A soma dos atributos da carta Pais:%s ,Estado: %s, igual a carta Pais:%s ,Estado: %s ",Pais2, NomeDoEstado2, Pais1, NomeDoEstado1);
                    }
                }

                printf("\nDeseja jogar novamente? (s/n): ");
                scanf(" %c", &continuar); // Espaço antes do %c para evitar problemas com buffer

            } while (continuar == 's' || continuar == 'S'); // Se o usuário digitar 's', continua o jogo
            printf("Obrigado por jogar! Ate a prosxima.\n");

        case 2: // instruções do jogo
            printf("## Instruções do jogo##\n");
            printf("O jogo consiste em uma batalha de cartas\n ");
            printf("onde o jogador escolhe uma carta e compara os atributos escolhidos\n");
            printf("o jogador que tiver a carta com o maior atributo ganha a rodada\n");
            break;
        case 3: // sair
            printf("Obrigado por jogar\n");

            break;

        default:
            printf("Digite um numero valido\n");
            break;
        }
    } while (menu1 != 3);
}
