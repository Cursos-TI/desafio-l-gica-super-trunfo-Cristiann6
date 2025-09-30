#include <stdio.h>

int main() {
//variaveis da carta 1 e 2 
  char Estado[20], Codigo[20], Cidade[20], Estado2[20], Codigo2[20], Cidade2[20];
  int Turistico, Turistico2;
  float Area, PIB, Area2, PIB2;
  float DensidadeP, PIB_capital;
  float DensidadeP2, PIB_capital2;
  unsigned long int Populacao, Populacao2;
  float Poder, Poder2;
  
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


if (Populacao > Populacao2) {
printf ("A população da carta 1 é maior!\n");
} else if (Populacao2 > Populacao) {
printf ("A população da carta 2 é maior!\n");
} else {
  printf ("As duas cidades tem o mesmo número de população.");
}

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

