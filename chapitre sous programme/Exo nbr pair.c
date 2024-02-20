#include <stdio.h>

int SaisiNbr();


int main()
{
    int pair = SaisiNbr();
    if (pair == 0)
        printf("pair");
    else
        printf("impair");
    return 0;
}

int SaisiNbr()
{
    int n;
    printf("saisir nbr");
    scanf("%d", &n);
    return(n%2);

}