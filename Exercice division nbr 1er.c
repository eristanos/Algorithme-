#include <stdio.h>

int SaisiNbr();
int TestDiv(int n);

int main()
{
    int nbr,u;
    nbr = SaisiNbr();
    u = TestDiv(nbr);
    printf("Le plus grand diviseur est %d",u);
    
    
}

int SaisiNbr()
{   
    int n;
    printf("Saisir NBR");
    scanf("%d",&n);
    return(n);
}
int TestDiv(int n)
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
            break;
        case 2:
            if (n%5 == 0)
                r = 5;
            break;
        case 3:
            if (n%7 == 0)
                r = 7;
            break;
        case 4:
            if (n%11 == 0)
                r = 11;
            break;
        case 5:
            if (n%13== 0)
                r = 13;
            break;
        case 6:
            if (n%17 == 0)
                r = 17;
            break;
        case 7:
            if (n%19 == 0)
                r = 19;
            break;
        case 8:
            if (n%23 == 0)
                r = 23;
            break;
        case 9:
            if (n%29 == 0)
                r = 29;
            break;
    
        default:
            break;
        }
        i++;

        
    }while(i<10 && r==0 );
    return(r);
}