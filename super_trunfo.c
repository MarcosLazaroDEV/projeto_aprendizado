/*Estácio - 02/08/25
Desafio: nível novato - Criando as Cartas do Super Trunfo.
Atividade executada conforme parametros descritos no portal SAVA. 
*/
#include <stdio.h> 
int main(){
    char estado1, estado2;
    char codigoCarta1[50], codigoCarta2[50];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float areaKm1, areaKm2;
    float pib1, pib2;
    int npontosTurisicos1, npontosTurisicos2;

    //estapa de solicitações (Entradas) - Carta 1
    printf("Digite o estado 1, escolha uma lentra entre A e H: ");//conforme solicitado o estado será representado por uma lentra entre A e H
    scanf(" %c", &estado1);

    printf("Digite o códgo: ");//conforme solicitado código terá junção entre letra do estado + numero da carta
    scanf("%s", &codigoCarta1);
 
    printf("Digite nome da Cidade -> utilizar apenas o 1º nome: ");//netsa fase aprendi a utilizar o fgets mas para executar apenas o que foi solicitado efetuei com scanf.
    scanf("%s", &nomeCidade1);

    printf("Digite o numero da população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite área da cidade em Km²: ");
    scanf("%f", &areaKm1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos desta cidade: ");
    scanf("%d", &npontosTurisicos1);
    printf("Teste saida : %d  \n", npontosTurisicos1);

    printf("\nCidade A preenchida\n");
    //Comando abaixo limpar tela
    //system("clear");

    printf("\n***** Preparar para digitar dados da proxima carta *****\n");
    
    //etapa de solicitações (Entradas) - Carta 2
    printf("Digite o estado 2, escolha uma lentra entre A e H: ");//conforme solicitado o estado será representado por uma lentra entre A e H
    scanf(" %c", &estado2);

    printf("Digite o códgo: ");//conforme solicitado código terá junção entre letra do estado + numero da carta
    scanf("%s", &codigoCarta2);

    printf("Digite nome da Cidade -> utilizar apenas o 1º nome: ");//netsa fase aprendi a utilizar o fgets mas para executar apenas o que foi solicitado efetuei com scanf.
    scanf("%s", &nomeCidade2);

    printf("Digite o numero da população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite área da cidade em Km²: ");
    scanf("%f", &areaKm2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos desta cidade: ");
    scanf("%d", &npontosTurisicos2);

    system("clear");

    //inicio da etapa mostra cartas 1 e 2

   printf("\n***************************************************\n");

    printf("\nCARTA: 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %c%s \n", estado1, codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Àrea: %.2f \n", areaKm1);
    printf("PIB: %.2f \n", pib1);
    printf("Numero de Pontos Turisticos: %d \n", npontosTurisicos1);

    printf("\n***************************************************\n");

    printf(" \nCARTA: 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %c%s \n", estado2, codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Àrea: %.2f \n", areaKm2);
    printf("PIB: %.2f \n", pib2);
    printf("Numero de Pontos Turisticos: %d \n", npontosTurisicos2);

    printf("\n***************************************************\n");

return 0;

}
