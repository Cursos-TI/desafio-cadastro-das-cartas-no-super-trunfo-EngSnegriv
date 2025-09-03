#include <stdio.h>

    int main() {

    // Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
 
// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

// Carta 1

    char estado1 = 'A'; // Exemplo de estado
    int numerdacarta1 = 01; // Número da carta
    char nomedacidade1[20] = "Salvador";
    double populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 1500000.00;
    int pontoturistico1 = 5;
   

    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Vamos iniciar com as cartas!\n");
    printf("Cada carta possui as seguintes caracteristicas:\n");
    printf("Estado, Numero da Carta, Nome da Cidade, Populacao, Area, PIB e Ponto Turistico.\n");

    printf("Pressione qualquer tecla para continuar...\n");
    scanf("%*c"); // Esperar usuário pressionar uma tecla
    printf("Continuando...\n");
    printf("Vamos dar as cartas!\n");
    
    printf("Aqui estão as informacoes da carta número 1:\n"); // Exibir informações da carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Numero da Carta: %d\n", numerdacarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %.2f Habitantes\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f Bilhões De Reais\n", pib1);
    printf("Ponto Turístico: %d\n", pontoturistico1);

    float densipopulacional1 = (float)populacao1 / area1; // Densidade populacional = população / área - habitantes por km²
    float pibpercapita1 = (float)pib1 / populacao1; // PIB per capita = PIB / população - riqueza média por habitante

    printf("Densidade Populacional: %f Hab/km2\n", densipopulacional1);
    printf("PIB per Capita: %f reais\n\n", pibpercapita1);


    printf("Segue os dados da carta 2:\n"); // Coletar informações para criar a carta 2
    printf("Pressione qualquer tecla para continuar...\n");
    scanf("%*c"); // Esperar usuário pressionar uma tecla


// carta 2

    char estado2 = 'B'; // Exemplo de estado
    int numerdacarta2 = 02; // Número da carta
    char nomedacidade2[20] = "Feira de Santana";
    int populacao2 = 15325000;
    float area2 = 2021.11;
    float pib2 = 2500000.00;
    int pontoturistico2 = 20;

    printf("Aqui estão as informacoes da carta número 2:\n\n"); // Exibir informações da carta 1
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Numero da Carta: %d\n", numerdacarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %.d Habitantes\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f Bilhões De Reais\n", pib2);
    printf("Ponto Turístico: %d\n", pontoturistico2);
    
    float densipopulacional2 = populacao2 / area2; // Densidade populacional = população / área - habitantes por km²
    float pibpercapita2 = pib2 / populacao2; // PIB per capita = PIB / população - riqueza média por habitante


    printf("Densidade Populacional: %.2f Hab/Km2\n", densipopulacional2);
    printf("PIB Per Capita: %f reais\n\n", pibpercapita2);

    printf("Com base nas informações das cartas, vamos comparar os atributos das cidades!\n");
    printf("Pressione qualquer tecla para continuar...\n");
    scanf("%*c"); // Esperar usuário pressionar uma tecla

    float superpoder1 = (float)populacao1 + area1 + pib1 + pontoturistico1 + pibpercapita1 + 1 / densipopulacional1;
    float superpoder2 = (float)populacao2 + area2 + pib2 + pontoturistico2 + pibpercapita2 + 1 / densipopulacional2;
    printf("Super Porder Carta 1 é: %.2f\n", superpoder1);
    printf("Super Porder Carta 2 é: %.2f\n\n", superpoder2);

    printf("População da Carta 1 é maior que a Carta 2? %d\n", populacao1 > populacao2);
    printf("Área da Carta 1 é maior que a Carta 2? %d\n", area1 > area2);
    printf("PIB da Carta 1 é maior que a Carta 2? %d\n", pib1 > pib2);
    printf("Pontos Turísticos da Carta 1 é maior que a Carta 2? %d\n", pontoturistico1 > pontoturistico2);
    printf("PIB per Capita da Carta 1 é maior que a Carta 2? %d\n", pibpercapita1 > pibpercapita2);
    printf("Densidade Populacional da Carta 1 é maior que a Carta 2? %d\n", densipopulacional1 > densipopulacional2);
    printf("O Super Poder da Carta 1 é maior que o da Carta 2? %d\n\n", superpoder1 > superpoder2);

    printf("Pressione qualquer tecla para finalizar...\n");
    scanf("%*c"); // Esperar usuário pressionar uma tecla

    printf("Obrigado por jogar Super Trunfo!\n");
    printf("Esperamos que tenha se divertido!\n");

    }