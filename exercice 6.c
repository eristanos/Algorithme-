#include <stdio.h>

int main(){
    int n;
    printf("donnes un nombre de photocopie : ");
    scanf("%d", &n);
    if(n<10)
        printf("la facture sera de %f euros \n", n*0.10);
    else if (n>10 && n<30)
    {
        printf("la facture sera de %f euros \n", 1+(n-10)*0.09);

    }
    else
    {
        printf("la facture sera de %f euros \n", 2.8+(n-30)*0.08);
    }

    return 0;

}