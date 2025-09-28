#include <stdio.h>

// Jogo Super Trunfo - com 2 cartas 

// DESAFIO TEMA 2 - CONSTRUÇÃO DO JOGO SUPER TRUNFO COM AS COMPARAÇÕES SIMPLES

/* DESAFIOS TEMA 3

Implementar a lógica de comparação entre duas cartas, considerando diferentes atributos numéricos.
 
Permitir ao jogador escolher entre diferentes atributos para a comparação através de menus interativos.
 
Evoluir em complexidade ao longo dos três desafios:
 
Comparação de cartas com base em um único atributo utilizando if e if-else.
 
Comparação de cartas com múltiplos atributos usando operadores lógicos e estruturas de decisão aninhadas e encadeadas (if-else if), além da implementação de menus com switch.
 
Comparação de cartas com base em dois atributos, utilizar o operador ternário e integrando todas as estruturas de decisão aprendidas para criar uma lógica mais complexa.
*/

int main() {

// Carta 1

    char estado1[] = "BA"; // Exemplo de estado
    int numerdacarta1 = 01; // Número da carta
    char nomedacidade1[] = "Salvador";
    double populacao1 = 2418000;
    float area1 = 693.8;
    float pib1 = 58.93;
    int pontoturistico1 = 5;
   

    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Vamos iniciar com as cartas!\n");
    printf("Cada carta possui as seguintes caracteristicas:\n");
    printf("Estado, Numero da Carta, Nome da Cidade, Populacao, Area, PIB e Ponto Turistico.\n");

    printf("Pressione qualquer tecla para continuar...\n");
    scanf("%*c"); // Esperar usuário pressionar uma tecla
    printf("Continuando...\n");
    printf("Vamos dar as cartas!\n");
    
    printf("Aqui estão as informacoes da carta número 1: \n\n"); // Exibir informações da carta 1
    printf("Numero da Carta: %d\n", numerdacarta1);
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
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

    char estado2[] = "BA"; // Exemplo de estado
    int numerdacarta2 = 02; // Número da carta
    char nomedacidade2[20] = "Feira de Santana";
    double populacao2 = 1532000;
    float area2 = 202.11;
    float pib2 = 65.09;
    int pontoturistico2 = 20;
    int comparacao;

    printf("Aqui estão as informacoes da carta número 2:\n\n"); // Exibir informações da carta 1
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
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

    printf("Vamos comparar os atributos das cartas!\n");
    printf("Qual dos atributos você gostaria de comparar?\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. PIB per Capita\n");
    printf("6. Densidade Populacional\n");
    printf("7. Super Poder. \n");
    printf("Digite o número correspondente ao atributo escolhido: ");
    scanf("%d", &comparacao);

    switch (comparacao) {
        case 1:
    printf("Você escolheu comparar a População.\n");
    printf("A população da carta 1 (%s) é %.0f\n", nomedacidade1, populacao1);
    printf("A população da carta 2 (%s) é %.0f\n", nomedacidade2, populacao2);

    // 1. Primeira verificação: É um empate?
    if (populacao1 == populacao2) {
        printf("Houve um empate com o número de habitantes!\n\n");
    
    // 2. Se não for empate, vamos verificar se a carta 1 ganhou.
    } else if (populacao1 > populacao2) { 
        // Note o uso de "else if" para uma nova condição.
        // O printf agora usa apenas a variável correta (nomedacidade1).
        printf("A cidade vencedora é %s! Carta 1, com maior número de habitantes\n", nomedacidade1);

    // 3. Se não empatou e a carta 1 não ganhou, a única opção restante é que a carta 2 ganhou.
    } else { 
        // O "else" final captura o último caso possível.
        // O printf agora usa apenas a variável correta (nomedacidade2).
        printf("A cidade vencedora é %s! Carta 2, com maior número de habitantes\n", nomedacidade2);
    }
    break; // Não se esqueça do break no final do case!
      

        case 2:
    printf("Você escolheu comparar a Área.\n");
    printf("A área da carta 1 (%s) é %.2f km²\n", nomedacidade1, area1);
    printf("A área da carta 2 (%s) é %.2f km²\n", nomedacidade2, area2);

    if (area1 == area2) {
        printf("Houve um empate com a área das cidades!\n");
    } else if (area1 > area2) {
        printf("A cidade vencedora é %s! Carta 1, com maior área\n", nomedacidade1);
    } else {
        printf("A cidade vencedora é %s! Carta 2, com maior área\n", nomedacidade2);
    }
    break;

        case 3:
    printf("Você escolheu comparar o PIB.\n");
    printf("O PIB da carta 1 (%s) é %.2f bilhões de reais\n", nomedacidade1, pib1);
    printf("O PIB da carta 2 (%s) é %.2f bilhões de reais\n", nomedacidade2, pib2);

    if (pib1 == pib2) {
        printf("Houve um empate com o PIB das cidades!\n");
    } else if (pib1 > pib2) {
        printf("A cidade vencedora é %s! Carta 1, com maior PIB\n", nomedacidade1);
    } else {
        printf("A cidade vencedora é %s! Carta 2, com maior PIB\n", nomedacidade2);
    }


        default:
        printf("Opção inválida. Por favor, escolha uma opção válida.\n\n");
    
        }

    printf("Pressione qualquer tecla para finalizar...\n");
    scanf("%*c"); // Esperar usuário pressionar uma tecla 

    printf("Obrigado por jogar Super Trunfo!\n");
    printf("Esperamos que tenha se divertido!\n");

    return 0;
    }
