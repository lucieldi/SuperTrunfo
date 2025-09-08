#include <stdio.h>
#include <string.h>

int main() { 
	// Carta 1
	char estado1;
	char codigo1[4]; // formato A01, mais o '\0'
	char cidade1[100];
	int populacao1;
	float area1;
	float pib1;
	int pontos1;

// Carta 2
char estado2;
char codigo2[4];
char cidade2[100];
int populacao2;
float area2;
float pib2;
int pontos2;

// Instruções para o usuário
printf("Informe os dados da Carta 1:\n");
printf("Estado (A-H): ");
scanf(" %c", &estado1);
printf("Código da Carta A01: ");
scanf("%3s", codigo1);
printf("Nome da Cidade: ");
scanf(" %99[^\n]", cidade1);
printf("População: ");
scanf("%d", &populacao1);
printf("Área (km²): ");
scanf("%f", &area1);
printf("PIB: ");
scanf("%f", &pib1);
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontos1);

printf("\nInforme os dados da Carta 2:\n");
printf("Estado (A-H): ");
scanf(" %c", &estado2);
printf("Código da Carta (ex.: B02): ");
scanf("%3s", codigo2);
printf("Nome da Cidade: ");
scanf(" %99[^\n]", cidade2);
printf("População: ");
scanf("%d", &populacao2);
printf("Área (km²): ");
scanf("%f", &area2);
printf("PIB: ");
scanf("%f", &pib2);
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontos2);

// Exibição da Cartas
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontos1);

printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontos2);

return 0;
}