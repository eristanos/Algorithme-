#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[8] = {7,-1,3,2,8,27,-5,10};
    for(int i = 0; i < 8; i++)
    {
        for(int j = i+1; j < 8; j++)
        {
            if(tab[i] > tab[j])
            {
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
    printf("Tableau trié : ");
    for(int i = 0; i < 8; i++)
    {
        printf("%d ", tab[i]);
    }

    return 0;
}