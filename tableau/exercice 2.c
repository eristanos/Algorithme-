#include <stdio.h>
#define TAILLE 10
#define NBCOLONNE 2
#define NBLIGNE 5


void AfficheTab1D(int tab1d[], int taille);
void AfficheTab2D(int tab2d[][NBCOLONNE], int ligne, int colonne);
void SaisieTab(int tab[], int taille);

void Transfert1D2D(int tab1d[], int tab2d[][NBCOLONNE], int ligne, int colonne, int taille);

int main() {
    int tableau1D[TAILLE];

    int tableau2D[NBLIGNE][NBCOLONNE];
    SaisieTab(tableau1D, TAILLE); 
    AfficheTab1D(tableau1D, TAILLE);
    Transfert1D2D(tableau1D, tableau2D, NBLIGNE, NBCOLONNE, TAILLE);
    
    AfficheTab2D(tableau2D, NBLIGNE, NBCOLONNE);
    
    return 0;
}

void SaisieTab(int tab[], int taille) 
{
    for (int i = 0; i < taille; i++) {
        printf("entre la valeur de l'element %d: ", i+1);
        scanf("%d", &tab[i]);
    }
}

void AfficheTab1D(int tab1d[], int taille)
 {
    for (int i = 0; i < taille; i++) {
        printf("%d  ",tab1d[i]);
    }
    printf("\n");
}

void AfficheTab2D(int tab2d[][NBCOLONNE], int ligne, int colonne) 
{
    for (int i = 0; i < ligne; i++) 
    {
        for (int j = 0; j < colonne; j++) 
        {
            printf("%d ", tab2d[i][j]);
        }
        printf("\n");
    }
}

void Transfert1D2D(int tab1d[], int tab2d[][NBCOLONNE], int ligne, int colonne, int taille) 
{
    int k = 0;
    for (int i = 0; i < ligne; i++) 
    {
        for (int j = 0; j < colonne; j++) 
        {
            tab2d[i][j] = tab1d[k];
            k++;
        }
    }
}