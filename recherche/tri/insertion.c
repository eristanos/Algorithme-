#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // déclaration du tableau non trié
    int tab[10] = {5, 3, 8, 6, 2, 7, 1, 4, 9, 0};
    int tab2[10];
    
    
    for(int i = 0; i < 10; i++)
    {
        int tmp = tab[0];
        int tmp2 = 0;
        for(int j = 0; j < 10-i; j++)
        {
            if(tab[j] < tmp)
            {
                tmp = tab[j];
                tmp2 = j;
            }
        }
        tab2[i] = tmp;
        for(int i = tmp2; i < 10; i++)
        {
            tab[i] = tab[i+1];
        }
    }

    printf("Tableau trié : ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", tab2[i]);
    }   
}