#include <stdio.h>
#include <stdlib.h>
#define NB_CHAR 20
#define TAILLE 5

struct etudiant
{
    char nom[NB_CHAR];
    int nombre;
};

typedef struct etudiant S_etudiant;

int main()
{

    S_etudiant promo[TAILLE] = {{"Dupont", 2}, {"Durand", 4}, {"Martin", 3}, {"Bernard", 1}, {"Thomas", 5}};
    // tri par selection
    
    for(int i = 0; i < TAILLE; i++)
    {
        for(int j = i+1; j < TAILLE; j++)
        {
            if(promo[i].nombre > promo[j].nombre)
            {
                S_etudiant temp = promo[i];
                promo[i] = promo[j];
                promo[j] = temp;
            }
        }
    }

    // affichage
    for(int i = 0; i < TAILLE; i++)
    {
        printf("%s %d\n", promo[i].nom, promo[i].nombre);
    }   

    return 0;
}