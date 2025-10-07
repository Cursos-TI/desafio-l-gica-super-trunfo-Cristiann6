#include <stdio.h>
#include <string.h>

int main() {
//variaveis da carta 1 e 2 
  char Estado[20], Codigo[20], Cidade[20], Estado2[20], Codigo2[20], Cidade2[20];
  int Turistico, Turistico2;
  float Area, PIB, Area2, PIB2;
  float DensidadeP, PIB_capital;
  float DensidadeP2, PIB_capital2;
  unsigned long int Populacao, Populacao2;
  float Poder, Poder2;
  
  //variavel para a ecolha do menu
  int escolha1, escolha2;

    float valor1_c1, valor2_c1; // Valores dos 2 atributos escolhidos para a Carta 1
    float valor1_c2, valor2_c2; // Valores dos 2 atributos escolhidos para a Carta 2
    float soma_c1, soma_c2;
    char atributo1_nome[50], atributo2_nome[50];
    char resultado_final[50];


printf("Carta 1: \n");

printf("Dígite o seu estado: \n");
scanf(" %s" , Estado);

printf("Dígite o seu código: \n");
scanf(" %s" , Codigo);

printf("Dígite a sua cidade:(use _ no lugar do espaço) \n");
scanf(" %s" , Cidade);

printf("Dígite a sua população: \n");
scanf("%lu" , &Populacao);

printf("Dígite a sua área: \n");
scanf(" %f", &Area);

printf("Dígite o seu pib em bilhões de reais: \n");
scanf(" %f", &PIB);

printf("Dígite o seu ponto turístico: \n");
scanf(" %d", &Turistico);

//calculo da carta 1 
 DensidadeP = (float)Populacao / Area;
 PIB_capital = (PIB * 1000000000.0f) / (float)Populacao;

float inverso_densidade = (DensidadeP > 0) ? (1.0f / DensidadeP) : 0.0f;
Poder = (float)Populacao + Area + PIB + (float)Turistico + PIB_capital + inverso_densidade;

printf("Carta 2: \n");

printf("Dígite o seu estado: \n");
scanf(" %s" , Estado2);

printf("Dígite o seu código: \n");
scanf(" %s" , Codigo2);

printf("Dígite a sua cidade:(use _ no lugar do espaço) \n");
scanf(" %s" , Cidade2);

printf("Dígite a sua população: \n");
scanf(" %lu" , &Populacao2);

printf("Dígite a sua área: \n");
scanf(" %f", &Area2);

printf("Dígite o seu pib em bilhões de reais: \n");
scanf(" %f", &PIB2);

printf("Dígite o seu ponto turístico: \n");
scanf(" %d", &Turistico2);

//calculo da carta 2
 DensidadeP2 = (float)Populacao2 / Area2;
 PIB_capital2 = (PIB2 * 1000000000.0f) / (float)Populacao2;
 
float inverso_densidade2 = (DensidadeP2 > 0) ? (1.0f / DensidadeP2) : 0.0f;
Poder2 = (float)Populacao2 + Area2 + PIB2 + (float)Turistico2 + PIB_capital2 + inverso_densidade2;

    // escolha do primeiro atributo
    printf("-----------------\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Turísticos\n");
    printf("5 - Densidade\n");
    printf("6 Super Poder\n"); 
    printf("-----------------------\n");
    printf("Opção 1: ");
    if (scanf("%d", &escolha1) != 1 || escolha1 < 1 || escolha1 > 6) {
        printf("ERRO: Escolha de atributo 1 inválida.\n");
        return 0;
    }

    // escolha do segundo atributo
    printf("\nEscolha o segundo atributo (diferente de %d):\n", escolha1);
    printf("---------------------------------\n");
    
    if (escolha1 != 1) printf("1- População ");
    if (escolha1 != 2) printf("2- Área ");
    if (escolha1 != 3) printf("3- PIB ");
    if (escolha1 != 4) printf("4- Turísticos ");
    if (escolha1 != 5) printf("5- Densidade ");
    if (escolha1 != 6) printf("6- Super Poder\n");
    printf("---------------------------------\n");
    printf("Opção 2: ");
    scanf("%d", &escolha2);

    if (escolha2 < 1 || escolha2 > 6 || escolha2 == escolha1) {
        printf("\nERRO: A segunda escolha é inválida ou igual à primeira. Encerrando o programa.\n");
        return 0;
    }
      
    
    switch (escolha1) {
        case 1: valor1_c1 = (float)Populacao; valor1_c2 = (float)Populacao2; strcpy(atributo1_nome, "População"); break;
        case 2: valor1_c1 = Area; valor1_c2 = Area2; strcpy(atributo1_nome, "Área"); break;
        case 3: valor1_c1 = PIB; valor1_c2 = PIB2; strcpy(atributo1_nome, "PIB"); break;
        case 4: valor1_c1 = (float)Turistico; valor1_c2 = (float)Turistico2; strcpy(atributo1_nome, "Pontos Turísticos"); break;
        case 5: valor1_c1 = DensidadeP; valor1_c2 = DensidadeP2; strcpy(atributo1_nome, "Densidade Demográfica"); break;
        case 6: valor1_c1 = Poder; valor1_c2 = Poder2; strcpy(atributo1_nome, "Super Poder"); break;
    }
    
    switch (escolha2) {
        case 1: valor2_c1 = (float)Populacao; valor2_c2 = (float)Populacao2; strcpy(atributo2_nome, "População"); break;
        case 2: valor2_c1 = Area; valor2_c2 = Area2; strcpy(atributo2_nome, "Área"); break;
        case 3: valor2_c1 = PIB; valor2_c2 = PIB2; strcpy(atributo2_nome, "PIB"); break;
        case 4: valor2_c1 = (float)Turistico; valor2_c2 = (float)Turistico2; strcpy(atributo2_nome, "Pontos Turísticos"); break;
        case 5: valor2_c1 = DensidadeP; valor2_c2 = DensidadeP2; strcpy(atributo2_nome, "Densidade Demográfica"); break;
        case 6: valor2_c1 = Poder; valor2_c2 = Poder2; strcpy(atributo2_nome, "Super Poder"); break;
    }

    // soma e decisao final
    soma_c1 = valor1_c1 + valor2_c1;
    soma_c2 = valor1_c2 + valor2_c2;
    
    if (soma_c1 > soma_c2) {
        strcpy(resultado_final, Estado);
    } else if (soma_c2 > soma_c1) {
        strcpy(resultado_final, Estado2);
    } else {
        strcpy(resultado_final, "Empate!");
    }

    // Exibição do resultado final
    printf("-------------\n");
    printf("  Resultado da rodada dupla\n");

    printf("\n ATRIBUTO 1: %s\n", atributo1_nome);
    printf("  %s: %.2f | %s: %.2f\n", Estado, valor1_c1, Estado2, valor1_c2);
    
    printf("\n ATRIBUTO 2: %s\n", atributo2_nome);
    printf("  %s: %.2f | %s: %.2f\n", Estado, valor2_c1, Estado2, valor2_c2);
    
    printf("SOMA DOS ATRIBUTOS:\n");
    printf("  %s: %.2f | %s: %.2f\n", Estado, soma_c1, Estado2, soma_c2);

    printf("\ VENCEDOR: %s \n", resultado_final);
    printf("Parabéns ao vencedor\n\n");

  // Área para exibição da carta 1
printf("estado: %s - código: %s\n", Estado, Codigo);
printf("cidade: %s - população: %lu\n", Cidade, Populacao);
printf("área: %.2f km² - PIB: %.2f bilhões de reais\n", Area, PIB);
printf("número de pontos turisticos: %d\n", Turistico);
printf("Densidade Populacional: %.2f hab/km²\n", DensidadeP);
printf("PIB per Capita: %.2f R$\n", PIB_capital);
printf("Super Poder: %.2f\n", Poder);

// Área para exibição da carta 2
printf("estado: %s - código: %s\n", Estado2, Codigo2);
printf("cidade: %s - população: %lu\n", Cidade2, Populacao2);
printf("área: %.2f km² - PIB: %.2f bilhões de reais\n", Area2, PIB2);
printf("número de pontos turisticos: %d\n", Turistico2);
printf("Densidade Populacional: %.2f hab/km²\n", DensidadeP2);
printf("PIB per Capita: %.2f R$\n", PIB_capital2);
  printf("Super Poder: %.2f\n", Poder2);

return 0;

} 

