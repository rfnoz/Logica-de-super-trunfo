#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];         // 3 caracteres (ex: A01) + 1 para o terminador '\0'
    char nomeCidade1[100];   // Tamanho maior para o nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //Informações e captura para a PRIMEIRA CARTA
    printf("Dados da Primeira Carta\n");

    printf("Digite o estado da primeira carta (uma letra ex: A): ");
    scanf(" %c", &estado1); // O espaço antes de %c ajuda com o \n anterior

    printf("Digite o codigo da primeira carta (3 caracteres ex: A01): ");
    scanf("%s", codigo1); // %s lê até o primeiro espaço ou nova linha

    printf("Digite o nome da cidade da primeira carta: ");

    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Limpa o restante da linha anterior

    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    // Remove a quebra de linha que fgets pode adicionar no final
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //Informações e captura para a SEGUNDA CARTA
    printf("\nDados da Segunda Carta\n");

    printf("Digite o estado da segunda carta (uma letra ex: B): ");
    scanf(" %c", &estado2); // O espaço antes de %c ajuda com o \n anterior

    printf("Digite o codigo da segunda carta (3 caracteres ex: B01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da segunda carta: ");
    // Limpar o buffer antes de fgets novamente
    while ((c = getchar()) != '\n' && c != EOF);
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das informações da PRIMEIRA CARTA
    printf("\nInformações da Carta 01\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1); // %.2f para formatar com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);

    // --- Exibição das informações da SEGUNDA CARTA ---
    printf("\n--- Informações da Carta 02 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    return 0; // Indica que o programa terminou com sucesso
}
