#include <stdio.h>

#define TAILLE1 5
#define TAILLE2 4

void tab3tri(int tab1[], int tab2[], int tab3[]);




int main() {
    int tab1[TAILLE1] = {1, 3, 5, 7, 9};
    int tab2[TAILLE2] = {2, 4, 6, 8};
    int tab3[TAILLE1 + TAILLE2];
    tab3tri(tab1, tab2, tab3);
    for(int i = 0; i<(TAILLE1+TAILLE2); i++)
    {
        printf("%d ", tab3[i]);
    }

    return 0;
}

void tab3tri(int tab1[], int tab2[], int tab3[]) 
{   
    int n1 = 0;
    int n2 = 0;
    for (int i =0; i<(TAILLE1+TAILLE2); i++)
    {
        if (tab1[n1] <= tab2[n2] )
        {
            tab3[i] = tab1[n1];
            n1++;
        }
        else
        {
            tab3[i] = tab2[n2];
            n2++;

        }
    }
}
    
    