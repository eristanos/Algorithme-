#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NB_CHAR 30
#define NB_UTILISATEUR 100




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

void saisi_utilisateur(S_utilisateur tab[], int n);

void affichage_utilisateur(S_utilisateur tab[], int n);
void ajout_utilisateur(S_utilisateur tab[], int n);

int main()
{
    S_utilisateur tableau1[NB_UTILISATEUR];
    printf("Combien de valeurs voulez-vous saisir ?\n");
    int n;
    scanf("%d", &n);
    saisi_utilisateur(tableau1, n);
    printf("quoicoubebu");
    affichage_utilisateur(tableau1, n);
    int choix = 0;
    do
    {
        printf("1. Ajouter un utilisateur\n");
        printf("2. Afficher les utilisateurs\n");
        printf("3. Quitter\n");
        scanf("%d", &choix);
        switch(choix)
        {
            case 1:
                ajout_utilisateur(tableau1, n);
                n++;
                break;
            case 2:
                affichage_utilisateur(tableau1, n);
                break;
            case 3:
                break;
            default:
                printf("Choix invalide\n");
        }
    } while(choix != 3);
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


void affichage_utilisateur(S_utilisateur tab[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("utilisateur %d\n", i+1);
        printf("login : %s\n", tab[i].login);
        printf("password : %s\n", tab[i].password);
        printf("entite : %s\n", tab[i].entite);
        printf("date de creation : %d/%d/%d\n", tab[i].date_creation.jour, tab[i].date_creation.mois, tab[i].date_creation.annee);

    }
}   

void ajout_utilisateur(S_utilisateur tab[], int n)
{
    printf("login : ");
    char phrase[NB_CHAR];
    scanf("%s", phrase);
    int nb = 0;
    n++;

    while(strcmp(tab[nb].login, phrase) < 0 && nb < n)
    {
        nb++;
    }
    printf("nb : %d\n", nb);
    for(int i = n; i > nb; i--)
    {
        tab[i] = tab[i-1];
    }
    strcpy(tab[nb].login, phrase);
    printf("\n");
    printf("password : ");
    scanf("%s", tab[nb].password);
    printf("\n");
    printf("entite : ");
    scanf("%s", tab[nb].entite);
    printf("\n");
    printf("date de creation : ");
    printf("jour : ");
    scanf("%d", &tab[nb].date_creation.jour);
    printf("\n");
    printf("mois : ");
    scanf("%d", &tab[nb].date_creation.mois);
    printf("\n");
    printf("annee : ");
    scanf("%d", &tab[nb].date_creation.annee);
    printf("\n");
}