#include <stdio.h>

int main() {
    
    // Declaração das  variáveis carta 01
    int carta01_populacao, carta01_qtd_pontos_turisticos;
    float carta01_area, carta01_pib;
    char carta01_estado;
    char carta01_nome[50];

    // Declaração das variáveis para a carta 02
    int carta02_populacao, carta02_qtd_pontos_turisticos;
    float carta02_area, carta02_pib;
    char carta02_estado;
    char carta02_nome[50];

    // Início do programa
    printf("Bem vindo a área de cadastro de cartas!\n");
    
    // Cadastro dos dados da carta 01
    printf("Cadastre os dados da carta 01!\n");

    // Estado
    printf("Qual o estado da carta 01? Insira um caracter de A a H!\n");
    scanf(" %c", &carta01_estado);
    printf("O estado cadastrado é %c\n", carta01_estado);

    // Codigo da carta
    printf("O código da carta 01 é %c01\n", carta01_estado);

    // Nome
    printf("Qual o nome cidade da carta 01?\n");
    scanf("%s", carta01_nome);
    printf("O nome cadastrado é %s\n", carta01_nome);

    // População
    printf("Qual a população da carta 01?\n");
    scanf("%d", &carta01_populacao);
    printf("A população cadastrada é %d\n", carta01_populacao);

    // Área
    printf("Qual a área da carta 01? (Atenção: resposta em Km²)\n");
    scanf("%f", &carta01_area);
    printf("A área cadastrada é %.2f\n", carta01_area);

    // PIB
    printf("Qual o PIB da carta 01? (Atenção: resposta em Bilhões de reais)\n");
    scanf("%f", &carta01_pib);
    printf("O PIB cadastrado é %.2f\n", carta01_pib);

    // Quantidade de pontos turísticos
    printf("Quantos pontos turísticos a carta 01 possui?\n");
    scanf("%d", &carta01_qtd_pontos_turisticos);
    printf("A carta 01 possui %d pontos turísticos\n", carta01_qtd_pontos_turisticos);

    // print dados carta 01
    printf("\n##############################################\n");
    printf("\nCarta 01\n");
    printf("\n##############################################\n");
    printf("Estado: %c\n", carta01_estado);
    printf("Código: %c01\n", carta01_estado);
    printf("Nome da cidade: %s\n", carta01_nome);
    printf("População: %d\n", carta01_populacao);
    printf("Área: %.2f Km²\n", carta01_area);
    printf("PIB: %.2f Bilhões de reais \n", carta01_pib);
    printf("Pontos turísticos: %d\n", carta01_qtd_pontos_turisticos);
    printf("\n##############################################\n");
    

    // Cadastro dos dados da carta 02
    printf("Cadastre os dados da carta 02!\n");

    // Estado
    printf("Qual o estado da carta 02? Insira um caracter de A a H!\n");
    scanf(" %c", &carta02_estado);
    printf("O estado cadastrado é %c\n", carta02_estado);

    // Codigo da carta
    printf("O código da carta 02 é %c02\n", carta02_estado);

    // Nome
    printf("Qual o nome cidade da carta 02?\n");
    scanf("%s", carta02_nome);
    printf("O nome cadastrado é %s\n", carta02_nome);

    // População
    printf("Qual a população da carta 02?\n");
    scanf("%d", &carta02_populacao);
    printf("A população cadastrada é %d\n", carta02_populacao);

    // Área
    printf("Qual a área da carta 02? (Atenção: resposta em Km²)\n");
    scanf("%f", &carta02_area);
    printf("A área cadastrada é %.2f\n", carta02_area);

    // PIB
    printf("Qual o PIB da carta 02? (Atenção: resposta em Bilhões de reais)\n");
    scanf("%f", &carta02_pib);
    printf("O PIB cadastrado é %.2f\n", carta02_pib);

    // Quantidade de pontos turísticos
    printf("Quantos pontos turísticos a carta 02 possui?\n");
    scanf("%d", &carta02_qtd_pontos_turisticos);
    printf("A carta 02 possui %d pontos turísticos\n", carta02_qtd_pontos_turisticos);

    // print dados carta 02
    printf("\n##############################################\n");
    printf("\nCarta 02\n");
    printf("\n##############################################\n");
    printf("Estado: %c\n", carta02_estado);
    printf("Código: %c02\n", carta02_estado);
    printf("Nome da cidade: %s\n", carta02_nome);
    printf("População: %d\n", carta02_populacao);
    printf("Área: %.2f Km²\n", carta02_area);
    printf("PIB: %.2f Bilhões de reais\n", carta02_pib);
    printf("Pontos turísticos: %d\n", carta02_qtd_pontos_turisticos);
    printf("\n##############################################\n");

    return 0;
}
