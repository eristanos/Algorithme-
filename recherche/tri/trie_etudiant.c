#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    int tab[TAILLE] = {-1,4,7,9,-3};
    int j,i,indiceMin;
    char min[NB_CHAR];
    S_etudiant temp;

    for(i = 0; i<TAILLE - 1; i++)
    {
        //recherche min
        strcpy(min,promo[i].nom);
        indiceMin = i;

        for(j = i+1; j <TAILLE; j++)
        {
            if(strcmp(min,promo[j].nom) > 0)
            {
                strcpy(min,promo[j].nom);
                indiceMin = j;
            }
        }
        temp = promo[i];
        promo[i] = promo[indiceMin];
        promo[indiceMin] = temp;

    

    }

    // affichage
    for(int i = 0; i < 5; i++)
    {
        printf("%s \n", promo[i].nom);
    }   

    return 0;
}