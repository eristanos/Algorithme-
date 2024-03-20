#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine[1000000];
    printf("Entrez une chaine de caractères : ");
    gets(chaine);
    int count = 0;
    int mot = 0;

    
    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] != ' ' && mot == 0)
        {
            count++;
            mot = 1;
        }
        else if (chaine[i] == ' ')
        {
            mot = 0;
        }
    } 

    printf("Le nombre de mots dans la chaine est : %d\n", count);
    return 0;
}