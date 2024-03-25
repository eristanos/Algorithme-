#include <stdio.h>
#include <stdlib.h>
#include <string.h>




void compteur(char chaine[1000000], int count[256]);

int main() {
    printf("Entrez une chaine de caractères : ");
    char chaine[1000000];
    int count[256];
    gets(chaine);
    compteur(chaine, count);

     for(int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("%c : %d\n", i, count[i]);
        }
    }

    
    return 0;
}



void compteur(char chaine[1000000], int count[256])
{
    

    for(int i = 0; i < 256; i++)
    {
        count[i] = 0;
    }

    for(int i = 0; i < strlen(chaine); i++)
    {
        char lettre;
        if (chaine[i] >= 'A' && chaine[i] <= 'Z')
        {
            chaine[i] += 32;
        }
        lettre = chaine[i];
        count[lettre]++;
    }

}