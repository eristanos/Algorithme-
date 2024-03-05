#include <stdio.h>
#define TAILLE 10


int main()
{
    int tab[TAILLE];
    for(int i = 0;i < TAILLE; i++)
    {
        printf("saisir la valeur de la case %d", i+1);
        int n;
        scanf("%d", &n);
        tab[i] = n;
    }
    for (int i = 0; i < TAILLE; i++)
    {
        printf("%d\n", tab[i]);
    }   
}

