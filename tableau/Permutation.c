#include <stdio.h>
#define TAILLE 5

int main() {
    int tab1[TAILLE] = {1, 2, 3, 4, 5};
    int tab2[TAILLE] = {6, 7, 8, 9, 10};

    // Afficher les tableaux originaux
    printf("Tableau original 1: ");
    for(int i = 0; i < TAILLE; i++) {
        printf("%d ", tab1[i]);
    }
    printf("\nTableau original 2: ");
    for(int i = 0; i < TAILLE; i++) {
        printf("%d ", tab2[i]);
    }

    // Permuter les tableaux
    for(int i = 0; i < TAILLE; i++) {
        tab1[i] = tab1[i] + tab2[i];
        tab2[i] = tab1[i] - tab2[i];
        tab1[i] = tab1[i] - tab2[i];
    }

    // Afficher les tableaux permutés
    printf("\nTableau permuté 1: ");
    for(int i = 0; i < TAILLE; i++) {
        printf("%d ", tab1[i]);
    }
    printf("\nTableau permuté 2: ");
    for(int i = 0; i < TAILLE; i++) {
        printf("%d ", tab2[i]);
    }

    return 0;
}