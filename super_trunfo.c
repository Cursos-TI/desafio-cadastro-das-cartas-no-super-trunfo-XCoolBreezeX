#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char Estado1, Estado2; // Apenas a primeira letra do estado
    char Codigo1[5], Codigo2[5];
    char Cidade1[19], Cidade2[19];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2; // Área em km²
    float PIB1, PIB2;
    int NPTuristicos1, NPTuristicos2; // NPTuristicos = Número de Pontos Turísticos
    float DensidadePopulacional1, DensidadePopulacional2;
    float PibPerCapita1, PibPerCapita2;
    float SuperPoder1, SuperPoder2;
    
    // Registro da Carta 1

    printf ("Registre Carta 1\n");
    printf ("Estado1\n");
    scanf ("%c", &Estado1);
    
    printf ("Codigo1\n");
    scanf ("%s", Codigo1);
    
    printf ("Cidade1\n");
    scanf ("%s", Cidade1);
    
    printf ("População1\n");
    scanf ("%lu", &Populacao1);
    
    printf ("Area1\n");
    scanf ("%f", &Area1);
    
    printf ("PIB1\n");
    scanf ("%f", &PIB1);
    
    printf ("NPTuristicos1\n");
    scanf ("%d", &NPTuristicos1);

    DensidadePopulacional1 = Populacao1/Area1;

    PibPerCapita1 = PIB1/Populacao1;

    SuperPoder1 = Populacao1 + Area1 + PIB1 + NPTuristicos1 + PibPerCapita1 + (1 / DensidadePopulacional1);

    //Registro da Carta 2

    printf ("Registre Carta 2\n");
    printf ("Estado2\n");
    scanf (" %c", &Estado2);
    
    printf ("Codigo2\n");
    scanf ("%s", Codigo2);
    
    printf ("Cidade2\n");
    scanf ("%s", Cidade2);
    
    printf ("População2\n");
    scanf ("%lu", &Populacao2);
    
    printf ("Area2\n");
    scanf ("%f", &Area2);
    
    printf ("PIB2\n");
    scanf ("%f", &PIB2);
    
    printf ("NPTuristicos2\n");
    scanf ("%d", &NPTuristicos2);

    DensidadePopulacional2 = Populacao2/Area2;

    PibPerCapita2 = PIB2/Populacao2;

    SuperPoder2 = Populacao2 + Area2 + PIB2 + NPTuristicos2 + PibPerCapita2 + (1 / DensidadePopulacional2);
    
    // Exibição das cartas

    printf ("Carta 1\n");
    printf ("Estado: %c\n", Estado1);
    printf ("Código: %s\n", Codigo1);
    printf ("Cidade: %s\n", Cidade1);
    printf ("População: %lu\n", Populacao1);
    printf ("Area: %f\n", Area1);
    printf ("PIB: %f\n", PIB1);
    printf ("NPTuristicos: %d\n", NPTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PibPerCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf ("Carta 2\n");
    printf ("Estado: %c\n", Estado2);
    printf ("Código: %s\n", Codigo2);
    printf ("Cidade: %s\n", Cidade2);
    printf ("População: %lu\n", Populacao2);
    printf ("Area: %f\n", Area2);
    printf ("PIB: %f\n", PIB2);
    printf ("NPTuristicos: %d\n", NPTuristicos2);
    printf ("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf ( "PIB per Capita: %.2f reais\n", PibPerCapita2);
    printf ("Super Poder: %.2f\n", SuperPoder2);

    //Comparando as cartas, 1 = sim, 0 = náo

    printf ("População: Carta 1 venceu (%d)\n", (Populacao1 > Populacao2));
    printf ("Area: Carta 1 venceu (%d)\n", (Area1 > Area2));
    printf ("PIB: Carta 1 venceu (%d)\n", (PIB1 > PIB2));
    printf ("Número de Pontos Turisticos: Carta 1 venceu (%d)\n", (NPTuristicos1 > NPTuristicos2));
    printf ("Densidade Populacional: (%d)\n", (DensidadePopulacional1 > DensidadePopulacional2));
    printf ("PIB per capita: (%d)\n", (PibPerCapita1 > PibPerCapita2));
    printf ("Super Poder: (%d)\n", (SuperPoder1 > SuperPoder2));

    
    return 0;
}
