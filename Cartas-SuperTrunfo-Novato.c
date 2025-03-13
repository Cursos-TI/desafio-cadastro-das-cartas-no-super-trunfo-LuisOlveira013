#include <stdio.h>

struct Carta {
    char estado;        // Letra do estado (A a H)
    char codigo[5];     // Código da carta (ex: A01, B03)
    char cidade[100];   // Nome da cidade
    int populacao;      // População da cidade
    float area;         // Área da cidade em km²
    float pib;          // PIB da cidade
    int pontosTuristicos; // Número de pontos turísticos
};

int main() {
    struct Carta carta1, carta2;

    // Coletando dados da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Estado (de A a H): ");
    scanf(" %c", &carta1.estado);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", carta1.cidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB da cidade: ");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Coletando dados da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Estado (de A a H): ");
    scanf(" %c", &carta2.estado);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", carta2.cidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB da cidade: ");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibindo dados da primeira carta
    printf("\n--- Informações da Primeira Carta ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código da Carta: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    // Exibindo dados da segunda carta
    printf("\n--- Informações da Segunda Carta ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código da Carta: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    // Comparação entre as cartas 
    if (carta1.populacao > carta2.populacao) {
        printf("\nCarta 1 ganhou (maior população)\n");
    } else{
        printf("\nCarta 2 ganhou (maior população)\n");
    }

    if (carta1.area > carta2.area){
        printf("\nCarta 1 ganhou (maior area)");
    }else{
        printf("\nCarta 2 ganhou (maior area)\n");
    }

    if (carta1.pib > carta2.pib){
        printf("\nCarta 1 ganhou (maior pib)\n");
    }else{
        printf("\nCarta 2 ganhou (maior pib)\n");
    }

    if (carta1.pontosTuristicos > carta2.pontosTuristicos){
        printf("\nCarta 1 ganhou (maior numero de pontos turisticos)\n");
    }else{
        printf("\nCarta 2 ganhou (maior numero de pontos turisticos)\n");
    }

    return 0;
}