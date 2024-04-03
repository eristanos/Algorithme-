#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define NB_CAR 3

typedef struct date{
    int jour;
    int mois;
    int annee;
} S_date;


typedef struct entretien{
    S_date date;
    char type[30];
    float temps; //en heure
    float cout;
    char mecanicien[30];


} S_entretien;


typedef struct car {
    char marque[30];
    char modele[30];
    char immatriculation[30];
    int annee;
    int km;
    float moyenne_km;
    S_entretien entretien[100];
    int nb_entretien;

} S_car;

void Saisir_Car(S_car tab[], int n);

void Saisir_Entretien(S_entretien tab[]);


int main() {
    S_car tab[NB_CAR];
    Saisir_Car(tab,3);
    int etat = 1;
    while (etat == 1)
    {
        printf("voulez vous saisir un entretien ? n pour oui 0 pour non\n");
        scanf("%d", &etat);
        if (etat == 1)
        {
            Saisir_Entretien(tab[0].entretien);
            tab[0].nb_entretien++;
        }
        else
        {
            etat = 0
        }
    }
    
    return 0;
}

void Saisir_Car(S_car tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Saisir la marque de la voiture %d\n", i + 1);
        scanf("%s", tab[i].marque);
        printf("Saisir le modele de la voiture %d\n", i + 1);
        scanf("%s", tab[i].modele);
        printf("Saisir l'immatriculation de la voiture %d\n", i + 1);
        scanf("%s", tab[i].immatriculation);
        printf("Saisir l'annee de la voiture %d\n", i + 1);
        scanf("%d", &tab[i].annee);
        printf("Saisir le kilometrage de la voiture sur 5 ans%d\n", i + 1);
        scanf("%d", &tab[i].km);
        printf("Saisir la moyenne annuel de kilometrage de la voiture %d\n", i + 1);
        scanf("%f", &tab[i].moyenne_km);
    }
}

void Saisir_Entretien(S_entretien tab[])
{
    printf("Saisir la date de l'entretien\n");
    printf("Saisir le jour\n");
    scanf("%d", &tab->date.jour);
    printf("Saisir le mois\n");
    scanf("%d", &tab->date.mois);
    printf("Saisir l'annee\n");
    scanf("%d", &tab->date.annee);
    printf("Saisir le type de l'entretien\n");
    scanf("%s", tab->type);
    printf("Saisir le temps de l'entretien\n");
    scanf("%f", &tab->temps);
    printf("Saisir le cout de l'entretien\n");
    scanf("%f", &tab->cout);
    printf("Saisir le mecanicien de l'entretien\n");
    scanf("%s", tab->mecanicien);
}




