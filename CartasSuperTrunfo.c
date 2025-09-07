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
        while ((getchar()) != '\n'); // descarta '\n' o 'ENTER'

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

         // Limpa o buffer antes do fgets
        while ((getchar()) != '\n'); // descarta '\n' o 'ENTER'


        system("clear"); // LIMPA A TELA
    //=========================================================================================

    //RECEBENDO OS DADOS - CARTA 2
    printf("---------------------------------- \n");
    printf("    Insira os dados da carta 2: \n");
    printf("---------------------------------- \n");

        printf("Digite uma letra entre 'A'  e 'H' que representará o estado: ");
        scanf("%c", &letrac2);

        printf("Digite o número da carta: ");
        scanf("%d", &codigoc2);

        // Limpa o buffer antes do fgets
        while ((getchar()) != '\n'); // descarta '\n' o 'ENTER'

        printf("Digite o nome da cidade: ");
        fgets(cidadec2, 50, stdin); //fgets usado para leitura de strings com espaços

        printf("Digite a população da cidade:");
        scanf("%d", &populacaoc2);

        printf("Digite a Área em KM² da cidade: ");
        scanf("%f", &areac2);

        printf("Digite o PIB da cidade: ");
        scanf("%f", &pibc2);

        printf("Digite número de pontos turísticos da cidade: ");
        scanf("%d", &turisticoc2);

        system("clear");

//===================================================================================

        //EXIBIÇÃO DAS CARTAS APÓS A LEITURA DE DADOS
            //CARTA NUMERO 1
            printf("---------------------------------- \n");
            printf("            CARTA N°1: \n");
            printf("---------------------------------- \n");
                printf("ESTADO: %c \n", letrac1);
                printf("CÓDIGO: %c%d \n", letrac1, codigoc1); //EXIBE A LETRA QUE CORRESPONDE AO ESTADO E O NUMERO DA CARTA, AMBOS OS DADOS FORMAM O CÓDIGO DA CARTA.
                printf("NOME DA CIDADE: %s", cidadec1);
                printf("POPULAÇÃO: %d \n", populacaoc1);
                printf("ÁREA: %.2f KM² \n", areac1);
                printf("PIB: %.2f bilhões de reais \n", pibc1);
                printf("NÚMERO DE PONTOS TURISTICOS: %d \n", turisticoc1);
        //-----------------------------------------------------------------
            //CARTA NUMERO 2
            printf("---------------------------------- \n");
            printf("            CARTA N°2: \n");
            printf("---------------------------------- \n");
                printf("ESTADO: %c \n", letrac2);
                printf("CÓDIGO: %c%d \n", letrac2, codigoc2); //EXIBE A LETRA QUE CORRESPONDE AO ESTADO E O NUMERO DA CARTA, AMBOS FORMAM O CÓDIGO DA CARTA.
                printf("NOME DA CIDADE: %s", cidadec2);
                printf("POPULAÇÃO: %d \n", populacaoc2);
                printf("ÁREA: %.2f KM² \n", areac2);
                printf("PIB: %.2f bilhões de reais \n", pibc2);
                printf("NÚMERO DE PONTOS TURISTICOS: %d \n", turisticoc2);


    return 0;
}
