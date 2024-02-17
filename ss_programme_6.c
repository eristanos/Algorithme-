#include <stdio.h>


int SommeEntier(int n);
void afficher1(int n);
void afficher2(int a,int b);
int factoriel(int n);
int Somme_et_factorielle(int n,int *a, int *b);

int main(){
    int n;
    printf("Saississez un nombre :");
    scanf("%d\n",n);
    int result = SommeEntier(n);
    afficher1(result);
    return 0;
}

int SommeEntier(int n)
{
    return((n*(n+1))/2);
}

int factoriel(int n)
{
    int result;
    int i = 1;
    while(i<=n)
    {   
        
    }
}

Somme_et_factorielle(int n,int *a, int *b)
{
    
}


void afficher1(int n)
{
    print("le resultat est : %d", n);
}

void afficher2(int a, int b)
{
    print("le resultat de la somme est : %d\n le résultat de la factorielle est : %d", a, b);
}