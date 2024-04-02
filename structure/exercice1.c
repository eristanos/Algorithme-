#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NB_CHAR 30
#define NB_UTILISATEUR 100

void saisi_utilisateur(S_utilisateur tab[], int n);


struct date 
{
    int jour;
    int mois;
    int annee;
};

typedef struct date S_date;

struct utilisateur 
{
    char login[NB_CHAR];
    char password[NB_CHAR];
    char entite[NB_CHAR];
    S_date date_creation;
};

typedef struct utilisateur S_utilisateur;


int main()
{
    S_utilisateur tableau1[NB_UTILISATEUR];
    printf("Combien de valeurs voulez-vous saisir ?\n");
    int n;
    scanf("%d", &n);
    saisi_utilisateur(tableau1, n);
    
    return 0;
}

void saisi_utilisateur(S_utilisateur tab[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("login : ");
        scanf("%s", tab[i].login);
        printf("\n");
        printf("password : ");
        scanf("%s", tab[i].password);
        printf("\n");
        printf("entite : ");
        scanf("%s", tab[i].entite);
        printf("\n");
        printf("date de creation : ");
        printf("jour : ");
        scanf("%d", &tab[i].date_creation.jour);
        printf("\n");
        printf("mois : ");
        scanf("%d", &tab[i].date_creation.mois);
        printf("\n");
        printf("annee : ");
        scanf("%d", &tab[i].date_creation.annee);
        printf("\n");
    }
}
