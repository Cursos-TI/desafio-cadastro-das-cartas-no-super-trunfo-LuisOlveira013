#include <stdio.h>

int main(){
//inserindo dados da primeira carta 
    char estado;        // Letra do estado (A a H)
    char codigo[5];     // Código da carta (ex: A01, B03)
    char cidade[100];   // Nome da cidade
    int populacao;      // População da cidade
    float area;         // Área da cidade em km²
    float pib;          // PIB da cidade
    int pontosTuristicos; // Número de pontos turísticos
    float densidadePopulacional;
    float pibPercapita;

    //coletando os dados da primeira carta 
    printf("Cadastro da primeira carta:\n");
    printf("Estado (de A a H): ");
    scanf(" %c", &estado);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", &codigo);
    printf("\nNome da Cidade: ");
    scanf(" %[^\n]s", cidade);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área (em km²): ");
    scanf("%f", &area);
    printf("PIB da cidade: ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

densidadePopulacional = populacao / area;
printf("Densidade populacional: %f\n", densidadePopulacional);

pibPercapita = pib / populacao;
printf("Pib Percapita: %f\n", pibPercapita);

    printf("\nInsira os dados da segunda carta\n");
//inserindo dados da segunda carta 
    char estado2;        // Letra do estado (A a H)
    char codigo2[5];     // Código da carta (ex: A01, B03)
    char cidade2[2100];   // Nome da cidade
    int populacao2;      // População da cidade
    float area2;         // Área da cidade em km²
    float pib2;          // PIB da cidade
    int pontosTuristicos2; // Número de pontos turísticos
    float densidadePopulacional2;
    float pibPercapita2;


    //coletando os dados da segunda carta 
    printf("Cadastro da primeira carta:\n");
    printf("Estado (de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    printf("Densidade populacional: %f\n", densidadePopulacional2);

    pibPercapita = pib / populacao;
    printf("Pib Percapita: %f\n", pibPercapita2);

    //exibindo dados da primeira carta 
    printf("\n--- Informações da Primeira Carta ---\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade populacional: %f\n", densidadePopulacional);
    printf("Pib Percapita: %f\n", pibPercapita);

    //exibindo dados da segunda carta
    printf("\n--- Informações da Primeira Carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %f\n", densidadePopulacional2);
    printf("Pib Percapita: %f\n", pibPercapita2);





}