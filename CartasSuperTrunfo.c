#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //VARIAVEIS CARTA 1
    char letrac1;
    char cidadec1[50];
    int codigoc1;
    int populacaoc1;
    int turisticoc1;
    float areac1;
    float pibc1;
    
    // VARIAVEIS CARTA 2

    char letrac2;
    char cidadec2[50];
    int codigoc2;
    int populacaoc2;
    int turisticoc2;
    float areac2;
    float pibc2;

    //INICIO DO CODIGO

    printf("---------------------------------- \n");
    printf("    BEM VINDO AO SUPER TRUNFO! \n");
    printf("---------------------------------- \n");
    printf("    Insira os dados da carta 1: \n");
    printf("---------------------------------- \n");

        //RECEBENDO OS DADOS - CARTA 1
        printf("Digite uma letra entre 'A'  e 'H' que representará o estado:");
        scanf("%c", &letrac1);

        printf("Digite o número da carta: \n");
        scanf("%d", &codigoc1);

        // Limpa o buffer antes do fgets
        while ((getchar()) != '\n'); // descarta o ENTER

        printf("Digite o nome da cidade: \n");
        fgets(cidadec1, 50, stdin); 

        printf("Digite a população da cidade: \n");
        scanf("%d", &populacaoc1);

        printf("Digite a Área em KM² da cidade: \n");
        scanf("%f", &areac1);

        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pibc1);

        printf("Digite número de pontos turísticos da cidade:\n");
        scanf("%d", &turisticoc1);


    return 0;
}
