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
  int escolha;

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


printf("\n----------\n");
printf("Escolha o atributo para a comparação:\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Número de Pontos Turísticos\n");
printf("5 - Densidade Demográfica\n");
printf("6 - Super Poder\n"); 
printf("-----------\n");
printf("Opção: ");
scanf("%d", &escolha);

printf("\nRESULTADO DA RODADA\n");

// Variáveis para exibir o resultado
char atributo_escolhido[50];
char resultado_final[50];


switch (escolha) {
    case 1:
        strcpy(atributo_escolhido, "População");
        if (Populacao > Populacao2) {
            strcpy(resultado_final, Estado);
        } else if (Populacao2 > Populacao) {
            strcpy(resultado_final, Estado2);
        } else {
            strcpy(resultado_final, "Empate!");
        }
        printf("Atributo: %s\n", atributo_escolhido);
        printf("%s: %lu | %s: %lu\n", Estado, Populacao, Estado2, Populacao2);
        break;

    case 2: 
        strcpy(atributo_escolhido, "Área");
        if (Area > Area2) {
            strcpy(resultado_final, Estado);
        } else if (Area2 > Area) {
            strcpy(resultado_final,  Estado2);
        } else {
            strcpy(resultado_final, "Empate!");
        }
        printf("Atributo: %s\n", atributo_escolhido);
        printf("%s: %.2f | %s: %.2f\n",  Estado, Area,  Estado2, Area2);
        break;

    case 3: 
        strcpy(atributo_escolhido, "PIB");
        if (PIB > PIB2) {
            strcpy(resultado_final,  Estado);
        } else if (PIB2 > PIB) {
            strcpy(resultado_final, Estado2);
        } else {
            strcpy(resultado_final, "Empate!");
        }
        printf("Atributo: %s\n", atributo_escolhido);
        printf("%s: %.2f | %s: %.2f\n",  Estado, PIB,  Estado2, PIB2);
        break;

    case 4: 
       strcpy(atributo_escolhido, "Pontos Turísticos");
        if (Turistico > Turistico2) {
            strcpy(resultado_final,  Estado);
        } else if (Turistico2 > Turistico) {
            strcpy(resultado_final,  Estado2);
        } else {
            strcpy(resultado_final, "Empate!");
        }
        printf("Atributo: %s\n", atributo_escolhido);
        printf("%s: %d | %s: %d\n",  Estado, Turistico,  Estado2, Turistico2);
        break;

    case 5: 
        strcpy(atributo_escolhido, "Densidade Demográfica (hab/km²)");
        
        if (DensidadeP < DensidadeP2) {
            strcpy(resultado_final,  Estado);
        } else if (DensidadeP2 < DensidadeP) {
            strcpy(resultado_final,  Estado2); 
        } else {
            strcpy(resultado_final, "Empate!");
        }
        printf("Atributo: %s\n", atributo_escolhido);
        printf("%s: %.2f | %s: %.2f\n",  Estado, DensidadeP,  Estado2, DensidadeP2);
        break;

    case 6 :
        strcpy(atributo_escolhido, "Super Poder");
        if (Poder > Poder2) {
            strcpy(resultado_final, Estado);
        } else if (Poder2 > Poder) {
            strcpy(resultado_final,  Estado2);
        } else {
            strcpy(resultado_final, "Empate!");
        }
        printf("Atributo: %s\n", atributo_escolhido);
        printf("%s: %.2f | %s: %.2f\n",  Estado, Poder,  Estado2, Poder2);
        break;

    default:
        strcpy(resultado_final, "Opção inválida!");
        printf("ERRO: Escolha uma opção entre 1 e 6.\n");
        return 0; 
}

if (strcmp(resultado_final, "Opção inválida!") != 0) {
    printf("\nVENCEDOR: %s\n", resultado_final);
}

printf("-------------\n\n");

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

