#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado_1, estado_2;
    char codigo_da_carta_1[20], codigo_da_carta_2[20];
    char nome_da_cidade_1[20], nome_da_cidade_2[20];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pts_turisticos_1, pts_turisticos_2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Cadastrando a primeira carta
    printf("Digite uma letra que represente o primeiro estado (de 'A' a 'H'): \n");
    scanf("%c", &estado_1);
    printf("Digite o código da carta (ex: 01, 02, ...): \n");
    scanf("%s", codigo_da_carta_1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade_1);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao_1);
    printf("Digite o tamanho da área em km²: \n");
    scanf("%f", &area_1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pts_turisticos_1);

    printf("Digite uma letra que represente o segundo estado (de 'A' a 'H'): \n");
    scanf(" %c", &estado_2);
    printf("Digite o código da carta (ex: 01, 02, ...): \n");
    scanf("%s", codigo_da_carta_2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade_2);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao_2);
    printf("Digite o tamanho da área em km²: \n");
    scanf("%f", &area_2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pts_turisticos_2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nPrimeira carta:");
    printf("\nCódigo: %c%s", estado_1, codigo_da_carta_1);
    printf("\nNome da cidade: %s", nome_da_cidade_1);
    printf("\nPopulação: %d", populacao_1);
    printf("\nÁrea em km²: %f", area_1);
    printf("\nPIB: %f", pib_1);
    printf("\nPontos turísticos: %d", pts_turisticos_1);

    printf("\n\nSegunda carta:");
    printf("\nCódigo: %c%s", estado_2, codigo_da_carta_2);
    printf("\nNome da cidade: %s", nome_da_cidade_2);
    printf("\nPopulação: %d", populacao_2);
    printf("\nÁrea em km²: %f", area_2);
    printf("\nPIB: %f", pib_2);
    printf("\nPontos turísticos: %d\n", pts_turisticos_2);

    return 0;
}
