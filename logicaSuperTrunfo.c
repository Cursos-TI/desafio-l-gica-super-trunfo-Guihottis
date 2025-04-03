#include <stdio.h>  

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    #include <stdio.h>
    #include <string.h>
    
    int main() {
        char estado1[100], estado2[100];
        int populacao1, populacao2;
    
        printf("insira o nome do primeiro estado: \n");
        fgets(estado1, sizeof(estado1), stdin);
        estado1[strcspn(estado1, "\n")] = 0; 
    
        printf("insira a populacao do primeiro estado sem pontos ex: 10000: \n");
        scanf("%d", &populacao1);
        getchar(); 
    
        printf("insira o nome do segundo estado: \n");
        fgets(estado2, sizeof(estado2), stdin);
        estado2[strcspn(estado2, "\n")] = 0; 
    
        printf("insira a populacao do segundo estado sem pontos ex: 10000: \n");
        scanf("%d", &populacao2);
    
        // Comparação das populações
        if (populacao1 > populacao2) {
            printf("o estado %s tem mais população que o estado %s\n", estado1, estado2);
        } else if (populacao2 > populacao1) {
            printf("o estado %s tem mais população que o estado %s\n", estado2, estado1);
        } else {
            printf("os estados %s e %s tem a mesma população\n", estado1, estado2);
        }
    
        return 0;

    return 0;
}
