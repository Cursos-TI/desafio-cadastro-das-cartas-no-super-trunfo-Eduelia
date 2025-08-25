#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Eduardo felipe elias

int main(){
    // carta 1
    char estado1[20];
    char codigo1[20];
    char nomecidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontoturistico1;

    // carta 2

    char estado2[20];
    char codigo2 [20];
    char nomecidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontoturistico2;

    //dados primeira carta

    printf("Carta 1:\n");

    printf("Informe uma letra com inicial de um estado com letra A a H:");
    scanf("%s", estado1);
    
    printf("Informe um codigo de carta(Ex A01 B01):");
    scanf("%s", codigo1);

    printf("Informe uma cidade:");
    scanf("%s", nomecidade1);

    printf("Informe a populaçao:");
    scanf("%d", &populacao1);

    printf("Informe a Área (em km²):");
    scanf("%f", &area1);

    printf("Informe o PIB em (Bilhoes):");
    scanf("%f", &pib1);

    printf("Informe o numero de pontos turistico:");
    scanf("%d", &pontoturistico1);

    printf("\n");

    //dados segunda carta

    printf("Carta 2:\n");

    printf("Informe uma letra com inicial de um estado com letra A a H:");
    scanf("%s", estado2);
    
    printf("Informe um codigo de carta(Ex A01 B01):");
    scanf("%s", codigo2);

    printf("Informe uma cidade:");
    scanf("%s", nomecidade2);

    printf("Informe a populaçao:");
    scanf("%d", &populacao2);

    printf("Informe a Área (em km²):");
    scanf("%f", &area2);

    printf("Informe o PIB em (Bilhoes):");
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turistico:");
    scanf("%d", &pontoturistico2);

    printf("\n");

    //ixibiçao de dados 1
    printf("Carta:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomecidade1);
    printf("Populaçao: %d\n", populacao1);
    printf("Área: %fkm²\n", area1);
    printf("PIB: %f Bilhões de reais\n", pib1);
    printf("Ponto turisticos: %d\n", pontoturistico1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico2);

    printf("\n");

    return 0;
}
