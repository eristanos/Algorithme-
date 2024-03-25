#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    printf("Entrez une chaine de caractères : ");
    char chaine[1000000];

    gets(chaine);
    int count[256];

    for(int i = 0; i < 256; i++)
    {
        count[i] = 0;
    }

    for(int i = 0; i < strlen(chaine); i++)
    {
        char lettre = chaine[i];
        count[lettre]++;
    }

    for(int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("%c : %d\n", i, count[i]);
        }
    }


    return 0;
}