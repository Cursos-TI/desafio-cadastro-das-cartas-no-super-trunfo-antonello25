#include <stdio.h> 

int main() {
    //declaração das variáveis
    char codigo1[3], codigo2[3];
    char estado1[10], estado2[10], cidade1[10], cidade2[10];
    int populacao1, populacao2;
    float area1, area2, PIB1, PIB2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPercapita1, pibPercapita2;
    int opcao;

    printf("---Cadastro da Primeira Carta---\n");  //cadastro da primeira carta
    printf("Código da carta: ");
    scanf("%s", &codigo1);
    printf("Estado: ");
    scanf("%s", &estado1);
    printf("Cidade: ");
    scanf("%s", &cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    prinf("PIB: ");
    scanf("%f", &PIB1);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    pibPercapita1 = PIB1 / densidadePopulacional1;

    printf("---Cadastro da Segunda Carta---\n");  //cadastro da segunda carta
    printf("Código da carta: ");
    scanf("%s", &codigo2);
    printf("Estado: ");
    scanf("%s", &estado2);
    printf("Cidade: ");
    scanf("%s", &cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    prinf("PIB: ");
    scanf("%f", &PIB2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);


    densidadePopulacional2 = populacao2 / area2;
    pibPercapita2 = PIB2 / densidadePopulacional2;

    printf("***Dados primeira carta***\n");   //imprimir os dados da primeira carta
    printf("Código: %s \n", codigo1);
    printf("Estado: %s", estado1);
    printf("Nome: %s \n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);


    printf("***Dados segunda carta***\n");   //imprimir os dados da segunda carta
    printf("Código: %s \n", codigo2);
    printf("Estado: %s", estado2);
    printf("Nome: %s \n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    printf(" ------ MENU DE COMPARAÇÂO ------");  //Menu interativo
    printf("Escolha uma opção: ");
    printf("1.População");
    printf("2.Área");
    printf("3.PIB");
    printf("4.Ponto turísticos");
    printf("5.Densidade populacional");
    printf("6.Pib Per capita");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        if(populacao1 > populacao2) {
            printf("%s tem uma população maior.", cidade1);
        } else{
            printf("%s tem um populção maior.", cidade2);
        }
    break;
    case 2:
        if(area1 > area2){
            printf("%s tem uma área maior.", cidade1);
        } else{
            printf("%s tem uma área maior.", cidade2);
        }
    break;
    case 3:
        if(PIB1 > PIB2){
            printf("%s tem um PIB maior.", cidade1);
        } else{
            printf("%s tem um PIB maior.", cidade2);
        }
    break;
    case 4:
        if(pontosTuristicos1 > pontosTuristicos2){
            printf("%s tem um maior número de pontos turísticos.", cidade1);
        } else{
            printf("%s tem um maior número de pontos turísticos.", cidade2);
        }
    break;
    case 5:
        if(densidadePopulacional1 > densidadePopulacional2){
            printf("%s tem uma densidade populacional maior.", cidade1);
        } else{
            printf("%s tem uma densidade populacional maior.", cidade2);
        }
    break;
    case 6:
        if(pibPercapita1 > pibPercapita2){
            printf("%s tem um PIB Per Capita maior.", cidade1);
        } else{
            printf("%s tem um PIB Per Capita maior.", cidade2);
        }
    break;
    default:
        printf("Opção inválida !!Tente novamente.");
 }
}