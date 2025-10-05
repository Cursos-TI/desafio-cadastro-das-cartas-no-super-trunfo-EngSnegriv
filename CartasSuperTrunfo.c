#include <stdio.h>
#include <stdlib.h>

// Jogo Super Trunfo - com 2 cartas 

int main() {

    
    // Carta 1

    char estado1[] = "BA"; // Exemplo de estado
    int numerdacarta1 = 01; // Número da carta
    char nomedacidade1[] = "Salvador"; // Nome da cidade
    float populacao1 = 2418000;
    float area1 = 693.8; // em km²
    float pib1 = 58.93; // em bilhões de reais
    int pontoturistico1 = 5, resultado1;


    // carta 2

    char estado2[] = "BA"; // Exemplo de estado
    int numerdacarta2 = 02; // Número da carta
    char nomedacidade2[20] = "Feira de Santana"; // Nome da cidade
    float populacao2 = 1532000;
    float area2 = 202.11; // em km²
    float pib2 = 65.09; // em bilhões de reais
    int pontoturistico2 = 20, resultado2;
    
      
    // ATRIBUTOS CALCULADOS
    double densipopulacional1 = populacao1 / area1; // Densidade populacional = população / área - habitantes por km²
    double pibpercapita1 = pib1 * 1000000000 / populacao1; // PIB per capita = PIB / população - riqueza média por habitante

    double densipopulacional2 =populacao2 / area2; // Densidade populacional = população / área - habitantes por km²
    double pibpercapita2 = pib2 * 1000000000 / populacao2; // PIB per capita = PIB / população - riqueza média por habitante

    // VARIÁVEIS PARA COMPARAÇÃO
    int comparacao1, comparacao2;

    // VARIÁVEL PARA GUARDAR OS VALORES DOS ATRIBUTOS ESCOLHIDOS
    double valorAtributo1Carta1, valorAtributo1Carta2;
    double valorAtributo2Carta1, valorAtributo2Carta2;

    // VARIAVEL PARA GUARDAR O NOME DOS 
    char nome_atributo1[30], nome_atributo2[30];

    // INICIO DO JOGO

    printf("*******************************\n");
    printf("**** Jogo Super Trunfo *******\n");
    printf("*******************************\n\n");
    printf("Cada carta possui as seguintes caracteristicas:\n");
    printf("Estado, Numero da Carta, Nome da Cidade, Populacao, Area, PIB e Ponto Turistico.\n\n");
    printf("As cartas do jogo são: \n\n Carta 1: Cidade: %s, Estado: %s \n\n Carta 2: Cidade: %s, Estado: %s \n\n", nomedacidade1, estado1, nomedacidade2, estado2);

    printf("Pressione qualquer tecla para continuar...\n");
    getchar(); // Esperar usuário pressionar uma tecla
    printf("Continuando...\n");
    printf("Vamos dar as cartas!\n\n");
    
    printf("Aqui estão as informacoes da carta número 1: \n\n"); // Exibir informações da carta 1
    printf("Numero da Carta: %d\n", numerdacarta1);
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %.2f Habitantes\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f Bilhões De Reais\n", pib1);
    printf("Ponto Turístico: %d\n", pontoturistico1);
    printf("Densidade Populacional: %2.f Hab/km2\n", densipopulacional1);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita1);


    printf("Segue os dados da carta 2:\n"); // Coletar informações para criar a carta 2
    printf("Pressione qualquer tecla para continuar...\n");
    scanf("%*c"); // Esperar usuário pressionar uma tecla

    printf("Aqui estão as informacoes da carta número 2:\n\n"); // Exibir informações da carta 1
    printf("Numero da Carta: %d\n", numerdacarta2);
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %.2f Habitantes\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f Bilhões De Reais\n", pib2);
    printf("Ponto Turístico: %d\n", pontoturistico2);
    printf("Densidade Populacional: %.2f Hab/Km2\n", densipopulacional2);
    printf("PIB Per Capita: %.2f reais\n\n", pibpercapita2);

    printf("Com base nas informações das cartas, vamos comparar os atributos das cidades!\n");
    printf("Pressione qualquer tecla para continuar...\n");
    scanf("%*c"); // Esperar usuário pressionar uma tecla

    // COMPARANDO OS ATRIBUTOS
    

    printf("Escolha dois atributos para comparação, Qual seu primeiro atributo? \n Obs: Não escolha os mesmos atributos.\n"); // a ideia é comparar dois atributos diferentes
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. PIB per Capita\n");
    printf("6. Densidade Populacional\n\n");
    printf("Selecione o primeiro atributo: ");
    scanf("%d", &comparacao1);
    printf("Agora escolha o segundo atributo: ");
    scanf("%d", &comparacao2);
    printf("\n");
    if (comparacao1 == comparacao2) {
        printf("Você escolheu o mesmo atributo para comparação. Por favor, escolha atributos diferentes.\n");
        return 1; // Termina o programa com código de erro
    }
    switch (comparacao1) {
        case 1: // População
            valorAtributo1Carta1 = populacao1;
            valorAtributo1Carta2 = populacao2;
            break;
        case 2:
            valorAtributo1Carta1 = area1;
            valorAtributo1Carta2 = area2;
            break;
        case 3:
            valorAtributo1Carta1 = pib1;
            valorAtributo1Carta2 = pib2;
            break;
        case 4:
            valorAtributo1Carta1 = pontoturistico1;
            valorAtributo1Carta2 = pontoturistico2;
            break;
        case 5:
            valorAtributo1Carta1 = pibpercapita1;
            valorAtributo1Carta2 = pibpercapita2;
            break;
        case 6:
            valorAtributo1Carta1 = densipopulacional1;
            valorAtributo1Carta2 = densipopulacional2;
            break;
        default:
            printf("Opção inválida para o primeiro atributo.\n");
            return 1; // Termina o programa com código de erro
             }

    switch (comparacao2) {
        case 1: // População
            valorAtributo2Carta1 = populacao1;
            valorAtributo2Carta2 = populacao2;
            break;
        case 2:
            valorAtributo2Carta1 = area1;
            valorAtributo2Carta2 = area2;
            break;
        case 3:
            valorAtributo2Carta1 = pib1;
            valorAtributo2Carta2 = pib2;
            break;
        case 4:
            valorAtributo2Carta1 = pontoturistico1;
            valorAtributo2Carta2 = pontoturistico2;
            break;
        case 5:
            valorAtributo2Carta1 = pibpercapita1;
            valorAtributo2Carta2 = pibpercapita2;
            break;
        case 6:
            valorAtributo2Carta1 = densipopulacional1;
            valorAtributo2Carta2 = densipopulacional2;
            break;
        default:
            printf("Opção inválida para o primeiro atributo.\n");
            return 1; // Termina o programa com código de erro
    }
    // soma dos valores dos atributos escolhidos
    double somaAtributosCarta1 = valorAtributo1Carta1 + valorAtributo2Carta1;
    double somaAtributosCarta2 = valorAtributo2Carta2 + valorAtributo2Carta2;

    printf("===============================\n");
    printf("Resultados da Comparação:\n");
    printf("===============================\n");

    printf("Os atributos escolhidos para comparação são:\n");
    printf("Atributo 1: %s - Atributo 2:%s\n", nome_atributo1[30], nome_atributo2[30]);

if (somaAtributosCarta1 > somaAtributosCarta2) {
        printf("A carta 1: %s vence com uma soma de %.2f contra %.2f da carta 2: %s!\n", nomedacidade1, somaAtributosCarta1, somaAtributosCarta2, nomedacidade2);
    } else if (somaAtributosCarta1 < somaAtributosCarta2) {
        printf("A carta 2: %s vence com uma soma de %.2f contra %.2f da carta 1: %S!\n", nomedacidade2, somaAtributosCarta2, somaAtributosCarta1, nomedacidade1);
    } else {
        printf("Empate! Ambas as cartas têm a mesma soma de %.2f!\n", somaAtributosCarta1);
    }

    return 0;

}