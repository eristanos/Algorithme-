#include <stdio.h>

void afficherGagne();       // déclaration sous programme
int question();             // void indique une procédure (ne retourne pas de valeur)

int main()
{
    int nbPoint;
    nbPoint = question();
    afficherGagne();           // appel du sous programme
    return 0;

}

void afficherGagne()
{
    printf("Bravo ta gagne\n");
}

int question()
{
    int pt, choix;
    printf("qui a ecrit les miserables? : 1-Zola, 2-Hugo, 3-Younss");
    scanf("%d",&choix);
    if(choix == 2)
        pt = 1;
    else
        pt = 0;
    return pt; // le return ne renvoit qu'un unique donnée en C

}

