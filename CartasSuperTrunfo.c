#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades
// utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
    // Cidade A
    char stateA = 'A';
    char codeA[3] = "01";
    char cityA[20] = "São Paulo";
    unsigned long populationA = 200; // 12325000;
    float areaA = 200;               // 1521.11;
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

    pop_densityA = (float) populationA / areaA;
    gdp_per_capitaA = (float) (((double) gdpA * 1e9) / populationA);
    super_powerA = (float) populationA + areaA + gdpA + touristic_spotsA +
                   gdp_per_capitaA - pop_densityA;

    // Exibindo os dados da primeira carta
    printf("\n### Card 01 ###\n");
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
    unsigned long populationB = 200; // 6748000;
    float areaB = 200;               // 1200.25;
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

    pop_densityB = (float) populationB / areaB;
    gdp_per_capitaB = (float) (((double) gdpB * 1e9) / populationB);
    super_powerB = (float) populationB + areaB + gdpB + touristic_spotsB +
                   gdp_per_capitaB - pop_densityB;

    // Exibindo os dados da segunda carta
    printf("\n### Card 02 ###\n");
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

    int option1, option2;
    float totalA = 0, totalB = 0;

    printf("\n### Choose 2 properties to compare: ###\n");
    printf("###      Comparing: %c%s vs %c%s      ###\n",
        stateA,
        codeA,
        stateB,
        codeB);
    printf("-> Option 1\n");
    printf("1. Population\n");
    printf("2. Area (km²)\n");
    printf("3. GDP\n");
    printf("4. Touristic Spots\n");
    printf("5. Population Density (people/km²)\n");
    printf("6. GDP per capita\n");
    // printf("7. Super Power\n");
    printf("->: ");
    scanf("%d", &option1);

    printf("\n-> Option 2\n");
    if (option1 != 1) printf("1. Population\n");
    if (option1 != 2) printf("2. Area (km²)\n");
    if (option1 != 3) printf("3. GDP\n");
    if (option1 != 4) printf("4. Touristic Spots\n");
    if (option1 != 5) printf("5. Population Density (people/km²)\n");
    if (option1 != 6) printf("6. GDP per capita\n");
    printf("->: ");
    scanf("%d", &option2);

    if (option1 == option2) {
        printf("You must choose different options!\n");
        return 1;
    }

    // Comparando opção 1
    switch (option1) {
    case 1:
        // Comparando População
        printf("In Population: %s City Wins\n",
            populationA > populationB ? cityA : cityB);
        totalA += populationA;
        totalB += populationB;
        break;

    case 2:
        // Comparando Área
        printf("In Area: %s City Wins\n", areaA > areaB ? cityA : cityB);
        totalA += areaA;
        totalB += areaB;
        break;

    case 3:
        // Comparando PIB
        printf("In GDP: %s City Wins\n", gdpA > gdpB ? cityA : cityB);
        totalA += gdpA;
        totalB += gdpB;
        break;

    case 4:
        // Comparando Número de Pontos Turísticos
        printf("In Touristic Spots: %s City Wins\n",
            touristic_spotsA > touristic_spotsB ? cityA : cityB);
        totalA += touristic_spotsA;
        totalB += touristic_spotsB;
        break;

    case 5:
        // Comparando Densidade Populacional
        printf("In Population Density: %s City Wins\n",
            pop_densityA < pop_densityB ? cityA : cityB);
        totalA += pop_densityA;
        totalB += pop_densityB;
        break;

    case 6:
        // Comparando GDP per capita
        printf("In GDP per capita: %s City Wins\n",
            gdp_per_capitaA > gdp_per_capitaB ? cityA : cityB);
        totalA += gdp_per_capitaA;
        totalB += gdp_per_capitaB;
        break;

        // case 7:
        //   // Comparando Super Power
        //   printf(
        //       "In Super Power: %s City Wins\n",
        //       super_powerA > super_powerB ? cityA : cityB);
        //   break;

    default:
        printf("Invalid option!");
        break;
    }

    // Comparando opção 2
    switch (option2) {
    case 1:
        // Comparando População
        printf("In Population: %s City Wins\n",
            populationA > populationB ? cityA : cityB);
        totalA += populationA;
        totalB += populationB;
        break;

    case 2:
        // Comparando Área
        printf("In Area: %s City Wins\n", areaA > areaB ? cityA : cityB);
        totalA += areaA;
        totalB += areaB;
        break;

    case 3:
        // Comparando PIB
        printf("In GDP: %s City Wins\n", gdpA > gdpB ? cityA : cityB);
        totalA += gdpA;
        totalB += gdpB;
        break;

    case 4:
        // Comparando Número de Pontos Turísticos
        printf("In Touristic Spots: %s City Wins\n",
            touristic_spotsA > touristic_spotsB ? cityA : cityB);
        totalA += touristic_spotsA;
        totalB += touristic_spotsB;
        break;

    case 5:
        // Comparando Densidade Populacional
        printf("In Population Density: %s City Wins\n",
            pop_densityA < pop_densityB ? cityA : cityB);
        totalA += pop_densityA;
        totalB += pop_densityB;
        break;

    case 6:
        // Comparando GDP per capita
        printf("In GDP per capita: %s City Wins\n",
            gdp_per_capitaA > gdp_per_capitaB ? cityA : cityB);
        totalA += gdp_per_capitaA;
        totalB += gdp_per_capitaB;
        break;

        // case 7:
        //   // Comparando Super Power
        //   printf(
        //       "In Super Power: %s City Wins\n",
        //       super_powerA > super_powerB ? cityA : cityB);
        //   break;

    default:
        printf("Invalid option!");
        break;
    }

    printf("Total score: \n");
    printf("%s: %.2f\n", cityA, totalA);
    printf("%s: %.2f\n", cityB, totalB);
    if (totalA == totalB)
        printf("It's a tie!\n");
    else
        printf("Winner: %s\n", totalA > totalB ? cityA : cityB);

    return 0;
}
