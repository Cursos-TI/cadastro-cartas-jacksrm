#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Criando as variáveis para armazenar os dados das cartas
  char state;          // = 'A';
  char code[3];        // = "01";
  char city[20];       // = "São Paulo";
  int population;      // = 12325000;
  float area;          // = 1521.11;
  double gdp;          // = 699.28;
  int touristic_spots; // = 50;
  float pop_density;
  float gdp_per_capita;

  // Coletando dados para a primeira carta
  printf("### First Card ###\n");
  printf("Enter the state (single character): ");
  scanf(" %c", &state);
  printf("Enter the state code (2 characters): ");
  scanf(" %2s", code);
  printf("Enter the city name: ");
  scanf(" %19s", city);
  printf("Enter the population: ");
  scanf(" %d", &population);
  printf("Enter the area (in square kilometers): ");
  scanf(" %f", &area);
  printf("Enter the GDP (in billions): ");
  scanf(" %f", &gdp);
  printf("Enter the number of touristic spots: ");
  scanf(" %d", &touristic_spots);

  gdp *= 1e9; // Convertendo o PIB de bilhões para unidades monetárias
  pop_density = (float)population / area;
  gdp_per_capita = gdp / (float)population;

  // Exibindo os dados da primeira carta
  printf("\n--- Card 01 ---\n");
  printf("State: %c\n", state);
  printf("State Code: %s\n", state + code);
  printf("City: %s\n", city);
  printf("Population: %d\n", population);
  printf("Area: %.2f km²\n", area);
  printf("GDP: %.2f billion\n", gdp);
  printf("Touristic Spots: %d\n", touristic_spots);
  printf("Population Density: %.2f people/km²\n", pop_density);
  printf("GDP per capita: %.2f\n R$", gdp_per_capita);

  // Coletando dados para a segunda carta
  printf("### Second Card ###\n");
  printf("Enter the state (single character): ");
  scanf(" %c", &state);
  printf("Enter the state code (2 characters): ");
  scanf(" %2s", code);
  printf("Enter the city name: ");
  scanf(" %19s", city);
  printf("Enter the population: ");
  scanf(" %d", &population);
  printf("Enter the area (in square kilometers): ");
  scanf(" %f", &area);
  printf("Enter the GDP (in billions): ");
  scanf(" %f", &gdp);
  printf("Enter the number of touristic spots: ");
  scanf(" %d", &touristic_spots);

  gdp *= 1e9; // Convertendo o PIB de bilhões para unidades monetárias
  pop_density = (float)population / area;
  gdp_per_capita = gdp / (float)population;

  // Exibindo os dados da segunda carta
  printf("\n\n");
  printf("\n--- Card 02 ---\n");
  printf("State: %c\n", state + code);
  printf("State Code: %s\n", code);
  printf("City: %s\n", city);
  printf("Population: %d\n", population);
  printf("Area: %.2f km²\n", area);
  printf("GDP: %.2f billion\n", gdp);
  printf("Touristic Spots: %d\n", touristic_spots);
  printf("Population Density: %.2f people/km²\n", pop_density);
  printf("GDP per capita: %.2f\n R$", gdp_per_capita);

  return 0;
}
