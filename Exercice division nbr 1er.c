#include <stdio.h>

int SaisiNbr();
int TestDiv();

int main()
{
    int nbr;
    nbr = SaisiNbr;
    TestDiv(nbr);
}

int SaisiNbr()
{   
    int n;
    scanf("%d",&n);
    return(n);
}
int TestDiv(n)
{
    int i = 0;
    int r = 0;
    do{
    
        switch (i)
        {
        case 0:
            if (n%2 == 0)
                r = 2;
            break;
        case 1:
            if (n%3 == 0)
                r = 3;
        
        default:
            break;
        }

        
    }while(i<10|| r==0 );
    return(r);
}