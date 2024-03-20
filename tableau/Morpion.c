#include <stdio.h>

void affichergrille(char grille[3][3]);
void jouer(char grille[3][3], int joueur);
void verifier(char grille[3][3], int *game);
void saisi(int *ligne, int *colonne);


int main() {
    int joueur = 1;
    int game = 0;
    
    char grille[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    while (game == 0)
    {
        affichergrille(grille);
        jouer(grille, joueur);
        if (joueur == 1)
        {
            joueur = 2;
        }
        else
        {
            joueur = 1;
        }
        verifier(grille, &game);
    }
    
    return 0;

}

void affichergrille(char grille[3][3])
{
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            printf(" | %c |", grille[i][j]);
        }
        printf("\n");
        printf("-------------------\n");
            }
}

void jouer(char grille[3][3], int joueur)
{
    int ligne;
    int colonne;
    saisi(&ligne, &colonne);
    if (grille[ligne][colonne] == ' ')
    {
        if (joueur == 1)
        {
            grille[ligne][colonne] = 'X';
        }
        else
        {
            grille[ligne][colonne] = 'O';
        }
    }
    else
    {
        printf("Case déjà prise\n");
        jouer(grille, joueur);
    }
}

void saisi(int *ligne, int *colonne)
{
    printf("Saisir la ligne\n");
    scanf("%d", ligne);
    printf("Saisir la colonne\n");
    scanf("%d", colonne);
    *ligne = *ligne - 1;
    *colonne = *colonne - 1;
}

void verifier(char grille[3][3], int *game)
{
    for (int i = 0; i < 3; i++)
    {
        if (grille[i][0] == grille[i][1] && grille[i][1] == grille[i][2] && grille[i][0] != ' ')
        {
            printf("Le joueur %c a gagné\n", grille[i][0]);
            *game = 1;
            return;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (grille[0][i] == grille[1][i] && grille[1][i] == grille[2][i] && grille[0][i] != ' ')
        {
            printf("Le joueur %c a gagné\n", grille[0][i]);
            *game = 1;
            return;
        }
    }
    if (grille[0][0] == grille[1][1] && grille[1][1] == grille[2][2] && grille[0][0] != ' ')
    {
        printf("Le joueur %c a gagné\n", grille[0][0]);
        *game = 1;
        return;
    }
    if (grille[0][2] == grille[1][1] && grille[1][1] == grille[2][0] && grille[0][2] != ' ')
    {
        printf("Le joueur %c a gagné\n", grille[0][2]);
        *game = 1;
        return;
    }
    
    // Check for equality
    int isFull = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grille[i][j] == ' ')
            {
                isFull = 0;
                break;
            }
        }
        if (!isFull)
        {
            break;
        }
    }
    if (isFull)
    {
        printf("Match nul\n");
        *game = 1;
    }
}

