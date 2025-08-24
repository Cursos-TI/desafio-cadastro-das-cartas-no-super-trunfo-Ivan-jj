#include <stdio.h>

int main(){
    // cada uma das variáveis estão seguindo a regra de cada carta onde 1 é para a primeira e 2 para a segunda
    char estado1, estado2, cartacode1[4], cartacode2[4], cidade1[25], cidade2[25];
    unsigned long int populacao1, populacao2;
    int turismo1, turismo2, resultadocarta; 
    float area1, area2, PIB1, PIB2, dencidade1, dencidade2, PIBper1, PIBper2, superpoder1, superpoder2;

    printf("Bem vindo ao sistema de cadastro de cartas para o jogo Super Trunfo de Países\n");

    // inicio de input das informações
    printf("Informações a seguir são para a primeira carta.\n");

    printf("Digite a primeira letra entre 'A' a 'H': "); 
    scanf(" %c", &estado1);
    
    printf("Digite a letra do estado e um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", cartacode1);

    printf("Digite o nome da cidade Sem espaços (Ex: SãoPaulo ou São_Paulo): ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite quantos pontos turísticos a cidade possui: ");
    scanf("%d", &turismo1);

    // Calculos para carta 1
    dencidade1 = (float)populacao1 / area1;  // calculo para dencidade
    PIBper1 = (PIB1 * 1000000000.0) / (float)populacao1;    //calculo para PIB per capita

    printf("Cadastro da primeira carta concluído!\n"); //confirmação visual para o usuário

    // inicio de input das informações para a segunda carta
    printf("Informações a seguir são para a segunda carta.\n");

    printf("Digite a primeira letra entre 'A' a 'H': "); 
    scanf(" %c", &estado2);
    
    printf("Digite a letra do estado e um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", cartacode2);

    printf("Digite o nome da cidade Sem espaços (Ex: SãoPaulo ou São_Paulo): ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite quantos pontos turísticos a cidade possui: ");
    scanf("%d", &turismo2);

    // Calculos para carta 2
    dencidade2 = (float)populacao2 / area2; // calculo para dencidade
    PIBper2 = (PIB2 * 1000000000.0) / (float) populacao2;   //calculo para PIB per capita

    printf("Cadastro da segunda carta concluído!\n");   //confirmação visual para o usuário

    // exibi as cartas para melhor visualização do usuario

    // resultado das informações para a primeira carta
    printf("\n=============== Carta: 1 ===============\n");
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", cartacode1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", turismo1);
    printf("Densidade Populacional: %.2f hab/Km² \n", dencidade1);
    printf("PIB per Capita: %.2f reais \n", PIBper1);
    printf("======================================\n");

    // resultado das informações para a segunda carta
    printf("\n=============== Carta: 2 ===============\n");
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", cartacode2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", turismo2);
    printf("Densidade Populacional: %.2f hab/Km²\n", dencidade2);
    printf("PIB per Capita: %.2f reais\n", PIBper2);
    printf("======================================\n");
    
    printf("\nCartas cadastradas! Boa sorte no jogo!\n");   // Mensagem de encerramento
    
    // abaixo esta o resultado da carta que ganhou

    // Comparação entre as cartas para fazer a de Super Poder
    superpoder1 = (float)populacao1 + area1 + PIB1 + (float)turismo1 + PIBper1 + (1.0 / dencidade1);
    superpoder2 = (float)populacao2 + area2 + PIB2 + (float)turismo2 + PIBper2 + (1.0 / dencidade2);

    //  A comparação é feita entre uma forma matematica onde a formula seria:
    //  (populacao1 > populacao2) * 1 + (populacao2 > populacao1) * 2
    //  exemplo: (0) * 1 + (1) * 2 = (0) + (2) = 2 a carta vencedora será a carta 2
    
    printf("\nCompraração de Cartas:\n");
    
    resultadocarta = (populacao1 > populacao2) * 1 + (populacao2 > populacao1) * 2;
    printf("População: Carta %d venceu (%d)\n",resultadocarta, populacao1 > populacao2);

    resultadocarta = (area1 > area2) * 1 + (area2 > area1) * 2;
    printf("Área: Carta %d venceu (%d)\n",resultadocarta, area1 > area2);

    resultadocarta = (PIB1 > PIB2) * 1 + (PIB2 > PIB1) * 2;
    printf("PIB: Carta %d venceu (%d)\n",resultadocarta, PIB1 > PIB2);

    resultadocarta = (turismo1 > turismo2) * 1 + (turismo2 > turismo1) * 2;    
    printf("Pontos Turísticos: Carta %d venceu (%d)\n",resultadocarta, turismo1 > turismo2);
    
    resultadocarta = (dencidade1 < dencidade2) * 1 + (dencidade2 < dencidade1) * 2;
    printf("Densidade Populacional: Carta %d venceu (%d)\n",resultadocarta, dencidade1 < dencidade2);

    resultadocarta = (PIBper1 > PIBper2) * 1 + (PIBper2 > PIBper1) * 2;
    printf("PIB per Capita: Carta %d venceu (%d)\n",resultadocarta, PIBper1 > PIBper2);

    resultadocarta = (superpoder1 > superpoder2) * 1 + (superpoder2 > superpoder1) * 2;
    printf("Super Poder: Carta %d venceu (%d)\n",resultadocarta, superpoder1 > superpoder2);

    return 0;    
}
