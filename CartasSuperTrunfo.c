#include <stdio.h>

int main(){
         // CARTA1 E AS DECLARAÇÕES DAS VARÁVEIS   
        char estado;
        char codigodacarta[50]; // AQUI É CHAR MAS COMO STRING, POR ISSO OS COLCHETES
        char nomedacidade[50]; // AQUI SE REPETE, INCLUSIVE APANHEI MUITO PRA LEMBRAR QUE OS COLCHETES É APÓS O IDENTIFICADOR
        int população;
        float área;
        float PIB;
        int NúmerodePontosTuristicos;

        printf("CARTA 1:\n"); // AQUI SÓ MOSTRA O TEXTO, SEM ENTRADA DE DADOS, SÓ SAÍDA

        printf("Qual é o seu Estado?   \n");
        scanf(" %c", &estado);

        printf("Qual o código da carta? (%c01 a %c04)    \n", estado, estado); // COMO USAMOS 2 %c O ESTADO REPETE 2 VEZES
        scanf(" %s", codigodacarta);

        printf("Qual o nome da cidade?   \n");
        scanf(" %s", nomedacidade);

        printf("Qual a população?  \n");
        scanf(" %d", &população);

        printf("Qual a área?   \n");
        scanf(" %f", &área);

        printf("Qual o PIB?   \n");
        scanf(" %f", &PIB);

        printf("Qual o número de pontos turisticos?    \n");
        scanf(" %d", &NúmerodePontosTuristicos);

        // CARTA2 E AS DECLARAÇÕES DAS VARÁVEIS - AQUI EU SÓ COPIEI E COLEI, INSERINDO O 2. JÁ ERA 2 DA MANHÃ E ESTAVA COM SONO   
        char estado2;
        char codigodacarta2[50]; // AQUI É CHAR MAS COMO STRING, POR ISSO OS COLCHETES
        char nomedacidade2[50]; // AQUI SE REPETE, INCLUSIVE APANHEI MUITO PRA LEMBRAR QUE OS COLCHETES É APÓS O IDENTIFICADOR
        int população2;
        float área2;
        float PIB2;
        int NúmerodePontosTuristicos2;

        printf("CARTA 2:\n"); // AQUI SÓ MOSTRA O TEXTO, SEM ENTRADA DE DADOS, SÓ SAÍDA

        printf("Qual é o seu Estado?   \n");
        scanf(" %c", &estado2);

        printf("Qual o código da carta? (%c01 a %c04)    \n", estado2, estado2); // COMO USAMOS 2 %c O ESTADO REPETE 2 VEZES
        scanf(" %s", &codigodacarta2);

        printf("Qual o nome da cidade?   \n");
        scanf(" %s", &nomedacidade2);

        printf("Qual a população?  \n");
        scanf(" %d", &população2);

        printf("Qual a área?   \n");
        scanf(" %f", &área2);

        printf("Qual o PIB?   \n");
        scanf(" %f", &PIB2);

        printf("Qual o número de pontos turisticos?    \n");
        scanf(" %d", &NúmerodePontosTuristicos2);

        printf("CARTA 1: \n"); // E AQUI É SÓ PRA MOSTRAR OS RESULTADOS MESMO
        printf("Estado: %c \n", estado);
        printf("Código: %s \n", codigodacarta);
        printf("Nome da Cidade: %s \n", nomedacidade);
        printf("População: %d \n", população);
        printf("Área: %f \n", área);
        printf("PIB: %f \n", PIB);
        printf("Número de Pontos Turísticos: %d \n", NúmerodePontosTuristicos);

         printf("CARTA 2: \n"); // E AQUI É SÓ PRA MOSTRAR OS RESULTADOS MESMO
        printf("Estado: %c \n", estado2);
        printf("Código: %s \n", codigodacarta2);
        printf("Nome da Cidade: %s \n", nomedacidade2);
        printf("População: %d \n", população2);
        printf("Área: %f \n", área2);
        printf("PIB: %f \n", PIB2);
        printf("Número de Pontos Turísticos: %d \n", NúmerodePontosTuristicos2);

    return 0;
}