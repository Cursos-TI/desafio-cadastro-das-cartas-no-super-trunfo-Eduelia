#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Eduardo felipe elias

int main(){

    printf("Bem vindo ao Super Trunfo!\n");
    printf("\n");
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

    //adicional
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float PIBpercapita1 = pib1 / populacao1;
    float PIBpercapita2 = pib2 / populacao2;


    //dados primeira carta

    printf("Carta 1:\n");

    printf("Informe a letra inicial de um estado com letra A a H:");
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

    printf("Informe a letra inicial de um estado com letra A a H:");
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

    //ixibiçao de dados carta 1
    printf("Carta: 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomecidade1);
    printf("Populaçao: %d\n", populacao1);
    printf("Área: %fkm²\n", area1);
    printf("PIB: %f Bilhões de reais\n", pib1);
    printf("Ponto turisticos: %d\n", pontoturistico1);
    printf("Densidade populaçao: %2.f\n", densidade1);
    printf("PIB per capita: %.f\n", PIBpercapita1);

    printf("\n");
    //ixibiçao de dados carta 1
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico2);
    printf("Densidade populaçao: %2.f\n", densidade2);
    printf("PIB per capita: %.f\n", PIBpercapita2);

    printf("\n");

    printf("Comparaçao de atributos (Populaçao)\n"); // introduçao de comparaçao

    printf("\n");

    printf("Carta 1 - Cidade: %s- População: %d\n", nomecidade1, populacao1); //informaçoes da carta
    printf("Carta 2 - Cidade: %s- População: %d\n", nomecidade2, populacao2);

    printf("\n");

    if (populacao1 > populacao2){
        printf ("CARTA 1 VENCEU!\n");
    }else {
        printf ("CARTA 2 VENCEU!\n");
    }
    printf("\n");
    printf("Comparaçao de atributos (Área)\n");// introduçao de comparaçao
    
    printf("\n");

    printf("Carta 1 - Área %.fkm².\n", area1);//informaçoes da carta
    printf("Carta 2 - Área %.fkm².\n", area2);
    
    printf("\n");

    if (area1 > area2){
        printf("CARTA 1 VENCEU!\n");
    }else {
        printf ("CARTA 2 VENCEU!\n");
    }
    printf("\n");

    printf("Comparaçao de atributos (PIB):\n");// introduçao de comparaçao
    
    printf("\n");

    printf("Carta 1 - PIB %f Reais.\n", pib1);//informaçoes da carta
    printf("Carta 2 - PIB %f Reais.\n", pib2);
    
    printf("\n");

    if (pib1 > pib2){
        printf("CARTA 1 VENCEU!\n");
    }else {
        printf ("CARTA 2 VENCEU!\n");
    }
    printf("\n");

    printf("Comparaçao de atributos (Ponto turustico):\n");// introduçao de comparaçao
    
    printf("\n");

    printf("Carta 1 - Ponto turistico %d.\n", pontoturistico1);
    printf("Carta 2 - Ponto turistico %d.\n", pontoturistico2);
    
    printf("\n");

    if (pontoturistico1 > pontoturistico2){
        printf("CARTA 1 VENCEU!\n");
    }else {
        printf ("CARTA 2 VENCEU!\n");
    }
    printf("\n");

    printf("Comparaçao de atributos (Densidade populacional):\n");// introduçao de comparaçao
    
    printf("\n");

    printf("Carta 1 - Densidade Populacional %.F.\n", densidade1);
    printf("Carta 2 - Densidade Populacional %.f.\n", densidade2);
    
    printf("\n");

    if (densidade1 < densidade2){
        printf("CARTA 1 VENCEU!\n");
    }else {
        printf ("CARTA 2 VENCEU!\n");
    }
      return 0;
}