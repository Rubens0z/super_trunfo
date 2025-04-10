#include <stdio.h>

int main() {
    // Rio de Janeiro (Card 1)
    char state1 = 'R'; // Estado
    char code1[4] = "RJ1"; // Código
    char cityName1[50] = "Rio de Janeiro"; // Nome da cidade
    unsigned long int population1 = 6748000; // População
    float area1 = 1182.3; // Área em km²
    float gdp1 = 364000; // PIB em milhões
    int touristPoints1 = 20; // Pontos turísticos

    // São Paulo (Card 2)
    char state2 = 'S'; // Estado
    char code2[4] = "SP1"; // Código
    char cityName2[50] = "São Paulo"; // Nome da cidade
    unsigned long int population2 = 12330000; // População
    float area2 = 1521.1; // Área em km²
    float gdp2 = 699000; // PIB em milhões
    int touristPoints2 = 15; // Pontos turísticos

    // Calculations for Rio de Janeiro
    float populationDensity1 = population1 / area1;
    float gdpPerCapita1 = gdp1 / population1;
    float superPower1 = population1 + area1 + gdp1 + touristPoints1 + gdpPerCapita1 + (1 / populationDensity1);

    // Calculations for São Paulo
    float populationDensity2 = population2 / area2;
    float gdpPerCapita2 = gdp2 / population2;
    float superPower2 = population2 + area2 + gdp2 + touristPoints2 + gdpPerCapita2 + (1 / populationDensity2);

    // Results
    printf("\nCard Comparison (Rio de Janeiro vs São Paulo):\n");
    printf("Population: Rio won (%d)\n", population1 > population2);
    printf("Area: Rio won (%d)\n", area1 > area2);
    printf("GDP: Rio won (%d)\n", gdp1 > gdp2);
    printf("Tourist Points: Rio won (%d)\n", touristPoints1 > touristPoints2);
    printf("Population Density: Rio won (%d)\n", populationDensity1 < populationDensity2);
    printf("GDP per Capita: Rio won (%d)\n", gdpPerCapita1 > gdpPerCapita2);
    printf("Super Power: Rio won (%d)\n", superPower1 > superPower2);

    return 0;
}



    
