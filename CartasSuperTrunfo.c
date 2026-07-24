#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Cidade A
  char stateA = 'A';
  char codeA[3] = "01";
  char cityA[20] = "São Paulo";
  unsigned long populationA = 12325000;
  float areaA = 1521.11;
  float gdpA = 699.28;
  int touristic_spotsA = 50;
  float pop_densityA;
  float gdp_per_capitaA;
  float super_powerA;

  // Coletando dados para a primeira carta
  // printf("### First Card ###\n");
  // printf("Enter the state (single character): ");
  // scanf(" %c", &stateA);
  // printf("Enter the state code (2 characters): ");
  // scanf(" %2s", codeA);
  // printf("Enter the city name: ");
  // scanf(" %19s", cityA);
  // printf("Enter the population: ");
  // scanf(" %d", &populationA);
  // printf("Enter the area (in square kilometers): ");
  // scanf(" %f", &areaA);
  // printf("Enter the GDP (in billions): ");
  // scanf(" %f", &gdpA);
  // printf("Enter the number of touristic spots: ");
  // scanf(" %d", &touristic_spotsA);

  // gdpA *= 1e9; // Convertendo o PIB de bilhões para unidades monetárias
  pop_densityA = (float)populationA / areaA;
  gdp_per_capitaA = (float)(((double)gdpA * 1e9) / populationA);
  super_powerA = (float)populationA + areaA + gdpA + touristic_spotsA + gdp_per_capitaA - pop_densityA;

  // Exibindo os dados da primeira carta
  printf("\n--- Card 01 ---\n");
  printf("State: %c\n", stateA);
  printf("State Code: %c%s\n", stateA, codeA);
  printf("City: %s\n", cityA);
  printf("Population: %lu\n", populationA);
  printf("Area: %.2f km²\n", areaA);
  printf("GDP: %.2f billion\n", gdpA);
  printf("Touristic Spots: %d\n", touristic_spotsA);
  printf("Population Density: %.2f people/km²\n", pop_densityA);
  printf("GDP per capita: %.2f R$\n", gdp_per_capitaA);
  printf("Super Power: %.2f\n", super_powerA);

  // Cidade B
  char stateB = 'B';
  char codeB[3] = "02";
  char cityB[20] = "Rio de Janeiro";
  unsigned long populationB = 6748000;
  float areaB = 1200.25;
  float gdpB = 300.50;
  int touristic_spotsB = 30;
  float pop_densityB;
  float gdp_per_capitaB;
  float super_powerB;

  // Coletando dados para a segunda carta
  // printf("### Second Card ###\n");
  // printf("Enter the state (single character): ");
  // scanf(" %c", &stateB);
  // printf("Enter the state code (2 characters): ");
  // scanf(" %2s", codeB);
  // printf("Enter the city name: ");
  // scanf(" %19s", cityB);
  // printf("Enter the population: ");
  // scanf(" %d", &populationB);
  // printf("Enter the area (in square kilometers): ");
  // scanf(" %f", &areaB);
  // printf("Enter the GDP (in billions): ");
  // scanf(" %f", &gdpB);
  // printf("Enter the number of touristic spots: ");
  // scanf(" %d", &touristic_spotsB);

  // gdpB *= 1e9; // Convertendo o PIB de bilhões para unidades monetárias
  pop_densityB = (float)populationB / areaB;
  gdp_per_capitaB = (float)(((double)gdpB * 1e9) / populationB);
  super_powerB = (float)populationB + areaB + gdpB + touristic_spotsB + gdp_per_capitaB - pop_densityB;

  // Exibindo os dados da segunda carta
  printf("\n\n");
  printf("\n--- Card 02 ---\n");
  printf("State: %c\n", stateB);
  printf("State Code: %c%s\n", stateB, codeB);
  printf("City: %s\n", cityB);
  printf("Population: %lu\n", populationB);
  printf("Area: %.2f km²\n", areaB);
  printf("GDP: %.2f billion\n", gdpB);
  printf("Touristic Spots: %d\n", touristic_spotsB);
  printf("Population Density: %.2f people/km²\n", pop_densityB);
  printf("GDP per capita: %.2f R$\n", gdp_per_capitaB);
  printf("Super Power: %.2f\n", super_powerB);

  int option;

  printf("### Choose which property to compare: ###\n");
  printf("###       Comparing: %c%s vs %c%s       ###\n", stateA, codeA, stateB, codeB);
  printf("1. Population\n");
  printf("2. Area (km²)\n");
  printf("3. GDP\n");
  printf("4. Touristic Spots\n");
  printf("5. Population Density (people/km²)\n");
  printf("6. GDP per capita\n");
  printf("7. Super Power\n");
  printf("Option: ");
  scanf("%d", &option);

  switch (option)
  {
  case 1:
    // Comparando População
    if (populationA > populationB)
    {
      printf("Population: City %s Wins\n", cityA);
    }
    else
    {
      printf("Population: City %s Wins\n", cityB);
    }
    break;

  case 2:
    // Comparando Área
    if (areaA > areaB)
    {
      printf("Area: City %s Wins\n", cityA);
    }
    else
    {
      printf("Area: City %s Wins\n", cityB);
    }
    break;

  case 3:
    // Comparando PIB
    if (gdpA > gdpB)
    {
      printf("GDP: City %s Wins\n", cityA);
    }
    else
    {
      printf("GDP: City %s Wins\n", cityB);
    }
    break;

  case 4:
    // Comparando Número de Pontos Turísticos
    if (touristic_spotsA > touristic_spotsB)
    {
      printf("Touristic Spots: City %s Wins\n", cityA);
    }
    else
    {
      printf("Touristic Spots: City %s Wins\n", cityB);
    }
    break;

  case 5:
    // Comparando Densidade Populacional
    if (pop_densityA < pop_densityB)
    {
      printf("Population Density: City %s Wins\n", cityA);
    }
    else
    {
      printf("Population Density: City %s Wins\n", cityB);
    }
    break;

  case 6:
    // Comparando GDP per capita
    if (gdp_per_capitaA > gdp_per_capitaB)
    {
      printf("GDP per capita: City %s Wins\n", cityA);
    }
    else
    {
      printf("GDP per capita: City %s Wins\n", cityB);
    }
    break;

  case 7:
    // Comparando Super Power
    if (super_powerA > super_powerB)
    {
      printf("Super Power: City %s Wins\n", cityA);
    }
    else
    {
      printf("Super Power: City %s Wins\n", cityB);
    }
    break;

  default:
    printf("Invalid option!");
    break;
  }

  return 0;
}
