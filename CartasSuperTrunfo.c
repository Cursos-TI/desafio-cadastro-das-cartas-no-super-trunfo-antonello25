#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    printf("Desafio Super Trunfo - Países\n");

    
    char codigo[3];
    char nome[20];
    int populacao, pontosTuristicos;
    float area, PIB;
    float densidadePopulacional;
    float pibPercapita;

    
    printf("Digite o código da cidade: \n");
    scanf("%s", &codigo);

    printf("Digite o nome: \n");
    scanf("%s", &nome);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite área (km2): \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("Código: %s \n", codigo);
    printf("Nome: %s \n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %f\n", PIB);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    densidadePopulacional = populacao / area;
    pibPercapita = PIB / densidadePopulacional;

    printf("Densidade populacional (hab/km2): %.2f \n", densidadePopulacional);
    printf("PIB per capita: %.2f \n", pibPercapita);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
