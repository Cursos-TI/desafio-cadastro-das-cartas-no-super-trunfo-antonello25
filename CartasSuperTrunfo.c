#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Super Trunfo - Países\n");
    //definição das variáveis
    char estado1[10], estado2[10];
    char codigo1[3], codigo2[3];
    char cidade1[10], cidade2[10];
    unsigned int populacao1, populacao2;                
    float area1, PIB1, area2, PIB2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPercapita1, pibPercapita2;

    printf("---Primeira carta---\n");    //Entrada de dados da primeira carta
    
    printf("Estado: "); 
    scanf("%s\n", &estado1);      

    printf("Código: ");
    scanf("%s\n", &codigo1);

    printf("Nome da cidade: ");
    scanf("%s\n", &cidade1);

    printf("População: ");
    scanf("%u\n", &populacao1);

    printf("Área (km2): ");
    scanf("%f\n", &area1);

    printf("PIB: ");
    scanf("%f\n", &PIB1);

    printf("Número de pontos turísticos: ");
    scanf("%d\n", &pontosTuristicos1);

    printf("---Segunda carta---\n");   //Entrada de dados da segunda carta

    printf("Estado: ");
    scanf("%s\n", estado2);

    printf("Código : ");
    scanf("%s\n", &codigo2);

    printf("Cidade: ");
    scanf("%s\n", &cidade2);

    printf("População: ");
    scanf("%u\n", &populacao2);

    printf("Área (km2): ");
    scanf("%f\n", &area2);

    printf("PIB: ");
    scanf("%f\n", &PIB2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("***Dados primeira cidade***\n");   //imprimir os dados da primeira cidade
    printf("Estado: %s\n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    pibPercapita1 = PIB1 / densidadePopulacional1;

    printf("Densidade populacional (hab/km2): %.2f \n", densidadePopulacional1);
    printf("PIB per capita: %.2f \n", pibPercapita1);

    printf("***Dados segunda cidade***\n");    //imprimir os dados da segunda carta
    printf("Estado: %s\n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome: %s \n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPercapita2 = PIB2 / densidadePopulacional2;

    printf("Densidade populacional (hab/km2): %.2f \n", densidadePopulacional2);
    printf("PIB per capita: %.2f \n", pibPercapita2);

    printf("=== Comparação das cartas ===\n");    //comparação entra a primeira cidade e segunda
    printf("população1 > população2: %d\n", populacao1 > populacao2);
    printf("área1 > área2: %d\n", area1 > area2);
    printf("PIB1 > PIB2: %d\n", PIB1 > PIB2);
    printf("pontosTuristicos1 > pontosTuristicos2: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("densidadepopulacional1 > densidadepopulacional2: %d\n", densidadePopulacional1 > densidadePopulacional2);
    printf("PIBpercapita1 > PIBpercapita2: %d\n", pibPercapita1 > pibPercapita2);

    return 0;
}

