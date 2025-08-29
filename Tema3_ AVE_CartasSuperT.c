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
    int escolhaComparacao;

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

    printf("Informe o PIB (em Bilhoes):");
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

    printf("Informe o PIB (em Bilhoes):");
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turistico:");
    scanf("%d", &pontoturistico2);

    printf("\n");

     //adicional depois de gravada as informaçoes pois estava la em cima e nao estava imprimindo
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float PIBpercapita1 = (pib1 *1000000000) / populacao1;
    float PIBpercapita2 = (pib2 *1000000000) / populacao2;
    
    printf("***** Informaçoes das cartas ***** ");
    //ixibiçao de dados carta 1
    printf("Carta: 1\n");
    printf("Estado: %s.\n", estado1);
    printf("Codigo: %s.\n", codigo1);
    printf("Cidade: %s.\n", nomecidade1);
    printf("Populaçao: %d.\n", populacao1);
    printf("Área: %fkm².\n", area1);
    printf("PIB: %f Bilhões de reais.\n", pib1);
    printf("Ponto turisticos: %d.\n", pontoturistico1);
    printf("Densidade populaçao: %.2f hab/km².\n", densidade1);
    printf("PIB per capita: R$ %.0f.\n", PIBpercapita1);

    printf("\n");
    //ixibiçao de dados carta 1
    printf("Carta 2:\n");
    printf("Estado: %s.\n", estado2);
    printf("Código: %s\n.", codigo2);
    printf("Nome da Cidade: %s.\n", nomecidade2);
    printf("População: %d.\n", populacao2);
    printf("Área: %.f km².\n", area2);
    printf("PIB: %.f bilhões de reais.\n", pib2);
    printf("Número de Pontos Turísticos: %d.\n", pontoturistico2);
    printf("Densidade populaçao: %.2f hab/km².\n", densidade2);
    printf("PIB per capita: R$ %.0f.\n", PIBpercapita2);
    printf("\n");

    // menu interativo
    printf("*** Escolha um atributo para comparação! ***\n");
    printf("\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Ponto Turistico.\n");
    printf("5. Densidade Demografica.\n");
    scanf("%d", &escolhaComparacao);
    
    switch (escolhaComparacao){
      case 1:
      if ((populacao1 > populacao2)){
        printf("Carta 1 Venceu\n");
      }else if (populacao1 == populacao2){
       printf("###Empate!###\n");
      }else{
        printf("Carta 2 venceu!\n");
      }break;
      case 2:
      if(area1 > area2){
        printf("Carta 1 Venceu!\n");
      }else if (area1 == area2){
       printf("###Empate!###\n");
      }else{
        printf("Carta 2 Venceu!\n");
      }break;
      case 3:
      if(pib1 > pib2){
        printf("Carta 1 Venceu!\n");
        }else if (pib1 == pib2){
       printf("###Empate!###\n");
      }else {
        printf("Carta 2 venceu!\n");
      }break;
      case 4:
      if(pontoturistico1 > pontoturistico2){
        printf("Carta 1 Venceu!\n");
        }else if (pontoturistico1 == pontoturistico2){
       printf("###Empate!###\n");
       }else {
        printf("Carta 2 venceu!\n");
      }break;
      case 5:
      if(densidade1 > densidade2){
        printf("Carta 1 Venceu!\n");
        }else if (densidade1 == densidade2){
       printf("###Empate!###\n");
      }else {
        printf("Carta 2 venceu!\n");
      }default:
      printf("Comando invalido!\n");
      break; 
    }
     printf("\n");


      return 0;
}

