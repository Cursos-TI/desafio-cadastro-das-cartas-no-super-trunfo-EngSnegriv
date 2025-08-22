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
    char numerdacarta1 = '1'; // Número da carta
    char nomedacidade1[20] = "Salvador";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 1500000.00;
    int pontoturistico1 = 5;

// carta 2

    char estado2;
    char numerdacarta2;
    char nomedacidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontoturistico2;


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
    printf("Numero da Carta: %c\n", numerdacarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Ponto Turístico: %d\n", pontoturistico1);

    printf("Com base na carta 1 vamos criar a carta?:\n"); // Coletar informações para criar a carta 2
    printf("Pressione qualquer tecla para continuar...\n");
    scanf("%*c"); // Esperar usuário pressionar uma tecla

    printf("Carta 2:\n");
    printf("Digite o estado da carta 2: ");
    scanf(" %c", &estado2);
    printf("Seu estado é: %c\n", estado2);
    printf("Digite o número da carta 2: ");
    scanf(" %c", &numerdacarta2);
    printf("Seu número da carta é: %c\n", numerdacarta2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %19[^\n]", nomedacidade2); // Limitar a 19 caracteres + '\0'
    printf("Seu nome da cidade é: %s\n", nomedacidade2);
    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);
    printf("Sua população é: %d\n", populacao2);
    printf("Digite a área da carta 2: ");
    scanf("%f", &area2);
    printf("Sua área é: %.2f\n", area2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);
    printf("Seu PIB é: %.2f\n", pib2);
    printf("Digite o ponto turístico da carta 2: ");
    scanf("%d", &pontoturistico2);
    printf("Seu ponto turístico é: %d\n", pontoturistico2);
    printf("Aqui estão as informações da carta número 2:\n"); // Exibir informações da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Número da Carta: %c\n", numerdacarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Ponto Turístico: %d\n", pontoturistico2);
    printf("Pressione qualquer tecla para finalizar...\n");
    scanf("%*c"); // Esperar usuário pressionar uma tecla

    printf("Obrigado por jogar Super Trunfo!\n");
    printf("Esperamos que tenha se divertido!\n");

    }