#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define NB_CAR 3

typedef struct car {
    char marque[30];
    char modele[30];
    int immatriculation;
    int annee;
    int km;
    float moyenne_km;
} S_car;

void Saisir_Car(S_car tab[], int n);


int main() {
    S_car tab[NB_CAR];
    Saisir_Car(tab,3);
    return 0;
}

void Saisir_car(S_car tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Saisir la marque de la voiture %d\n", i + 1);
        scanf("%s", tab[i].marque);

        printf("Saisir le modele de la voiture %d\n", i + 1);
        scanf("%s", tab[i].modele);
        
        printf("Saisir l'immatriculation de la voiture %d\n", i + 1);
        scanf("%d", &tab[i].immatriculation);

        printf("Saisir l'annee de la voiture %d\n", i + 1);
        scanf("%d", &tab[i].annee);

        printf("Saisir le kilometrage de la voiture sur 5 ans%d\n", i + 1);
        scanf("%d", &tab[i].km);
        
        printf("Saisir la moyenne annuel de kilometrage de la voiture %d\n", i + 1);
        scanf("%f", &tab[i].moyenne_km);
    }
}