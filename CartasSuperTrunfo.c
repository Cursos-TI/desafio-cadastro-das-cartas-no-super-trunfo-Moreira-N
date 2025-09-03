#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char Carta1[50], Carta2[50];
    char Estado1[50], Estado2[50];
    char Cidade1[50], Cidade2[50];
    int População1, População2;
    float Area1, Area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código da primeira carta: ");
    scanf("%s", Carta1);
    printf("Digite o estado da primeira carta: ");
    scanf("%s", Estado1);
    printf("Digite a cidade da primeira carta: ");
    scanf("%s", Cidade1);
    printf("Digite a população da primeira carta: ");
    scanf("%d", &População1);
    printf("Digite a área da primeira carta: ");
    scanf("%f", &Area1);
    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &PontosTuristicos1);
    printf("Digite o código da segunda carta: ");
    scanf("%s", Carta2);
    printf("Digite o estado da segunda carta: ");
    scanf("%s", Estado2);
    printf("Digite a cidade da segunda carta: ");
    scanf("%s", Cidade2);
    printf("Digite a população da segunda carta: ");
    scanf("%d", &População2);
    printf("Digite a área da segunda carta: ");
    scanf("%f", &Area2);
    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &PontosTuristicos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Código: %s\n", Carta1);
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", População1);
    printf("Área: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Código: %s\n", Carta2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);   
    printf("População: %d\n", População2);
    printf("Área: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);


    
    return 0;
}
