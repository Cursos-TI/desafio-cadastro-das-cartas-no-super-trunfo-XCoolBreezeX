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

    char Estado1, Estado2; //Apenas a primeira letra do estado
    char Codigo1[5], Codigo2[5];
    char Cidade1[19], Cidade2[19];
    int Populacao1, Populacao2;
    float Area1, Area2; // Área em km2
    float PIB1, PIB2;
    int NPTuristicos1, NPTuristicos2; //NPTuristicos = Número de Pontos Turísticos
    
    printf ("Digite o nome do Estado1\n");
    scanf ("%c", &Estado1);
    
    printf ("Digite o Codigo1\n");
    scanf ("%s", Codigo1);
    
    printf ("Digite o nome da Cidade1\n");
    scanf ("%s", Cidade1);
    
    printf ("Digite a População1\n");
    scanf ("%d", &Populacao1);
    
    printf ("Insira o tamanho da Area1\n");
    scanf(" %f", &Area1);
    printf ("Insira o tamanho da Area1\n");
    scanf(" %f", &Area1);
    
    printf ("Digte o valor do PIB1\n");
    scanf ("%f", &PIB1);
    
    printf ("Digite o NPTuristicos1\n");
    scanf ("%d", &NPTuristicos1);
    
    printf ("Carta 1\n");
    printf ("Estado: %c\n", Estado1);
    printf ("Código: %s\n", Codigo1);
    printf ("Cidade: %s\n", Cidade1);
    printf ("População: %d\n", Populacao1);
    printf ("Area: %f\n", Area1);
    printf ("PIB: %f\n", PIB1);
    printf ("NPTuristicos: %d\n", NPTuristicos1);

    printf ("Digite o nome do Estado2\n");
    scanf (" %c", &Estado2);
    
    printf ("Digite o Codigo2\n");
    scanf ("%s", Codigo2);
    
    printf ("Digite o nome da Cidade2\n");
    scanf ("%s", Cidade2);
    
    printf ("Digite a População2\n");
    scanf ("%d", &Populacao2);
    
    printf ("Digite o tamanho da Area2\n");
    scanf(" %f", &Area2);
    printf ("Digite o tamanho da Area2\n");
    scanf(" %f", &Area2);
    
    printf ("Digite o valor do PIB2\n");
    scanf ("%f", &PIB2);
    
    printf ("Digite o NPTuristicos2\n");
    scanf ("%d", &NPTuristicos2);
    
    printf ("Carta 2\n");
    printf ("Estado: %c\n", Estado2);
    printf ("Código: %s\n", Codigo2);
    printf ("Cidade: %s\n", Cidade2);
    printf ("População: %d\n", Populacao2);
    printf ("Area: %f\n", Area2);
    printf ("PIB: %f\n", PIB2);
    printf ("NPTuristicos: %d\n", NPTuristicos2);

    return 0;
}
