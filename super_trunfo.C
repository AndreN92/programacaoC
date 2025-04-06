#include <stdio.h>
int main (){
//Dados para a carta 01
    char estado1[50] = "A";
    char codigo1[10] = "A01";
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 12325000;
    int pontosturisticos1 = 50;
    float area1 = 1521.11;
    float pib1 = 699.28;


    // Dados para a carta 2
    char estado2[50] = "B";
    char codigo2[5] = "B02";
    char cidade2[50] =  "Rio de Janeiro";
    int populacao2 = 6748000;
    int pontosturisticos2 = 30;
    float area2 = 1200.25;
    float pib2 = 300.50;


    // Para a entrada dos dados da carta 1
    printf("Digite os dados da carta 1:\n");

    printf("Estado:\n");
    scanf("%s", estado1);

    printf("Código:\n");
    scanf("%s", codigo1);

    printf("Cidade:\n");
    scanf("%s", cidade1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área em Km²:\n");
    scanf("%f", &area1);

    printf("PIB (em milhões):\n");
    scanf("%f", &pib1);

    printf("Pontos Turísticos:\n");
    scanf("%d", &pontosturisticos1);

    // Entrada de dados para a carta 2
    printf("Digite os dados para a carta 2:\n");

    printf("Estado:\n");
    scanf("%s", estado2);

    printf("Código:\n");
    scanf("%s", codigo2);

    printf("Cidade:\n");
    scanf("%s", cidade2);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Area em Km²:\n");
    scanf("%f", &area2);

    printf("PIB (em milhões):\n");
    scanf("%f", &pib2);

    printf("Pontos Turísticos:\n");
    scanf("%d", &pontosturisticos2);

    printf("\n");

// Para gerar a impressão dos dados

    printf("Carta 01 \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area em Km²: %f\n", area1);
    printf("PIB(em milhões): %f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);

    printf("Carta 02 \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em Km²: %f\n", area2);
    printf("PIB(em milhões): %f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);






    printf("\n");



    return 0;

}
