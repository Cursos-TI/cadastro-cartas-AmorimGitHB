#include <stdio.h>

int main() {
    char estado1[3], estado2[3];            
    char codigo1[4], codigo2[4];            
    char nomecidade1[50], nomecidade2[50];  
    int populacao1, populacao2;
    float area1, area2;
    float pibe1, pibe2;
    int numeropontosturisticos1, numeropontosturisticos2;

    // CARTA 1
    printf("Estado: ");
    scanf("%2s", estado1);

    printf("Codigo da carta: ");
    scanf("%3s", codigo1);

    printf("Nome da cidade: ");
    scanf("%49s", nomecidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pibe1);

    printf("Numero pontos turisticos: ");
    scanf("%d", &numeropontosturisticos1);

    // CARTA 2
    printf("Estado: ");
    scanf("%2s", estado2);

    printf("Codigo da carta: ");
    scanf("%3s", codigo2);

    printf("Nome da cidade: ");
    scanf("%49s", nomecidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pibe2);

    printf("Numero pontos turisticos: ");
    scanf("%d", &numeropontosturisticos2);

    // Imprimindo
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pibe1);
    printf("Numero Pontos Turisticos: %d\n", numeropontosturisticos1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pibe2);
    printf("Numero Pontos Turisticos: %d\n", numeropontosturisticos2);

    return 0;
}