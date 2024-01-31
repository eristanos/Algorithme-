#include <stdio.h>

int main(){

    int a,b;

    printf("saisir le 1er nombre : ");
    scanf("%d",&a);
    printf("saisir le 2nd nombre : ");
    scanf("%d",&b);
    if (a*b>= 0)
       { printf("positif\n");}
    if (a*b<= 0)
       { printf("negatif\n");}
    else 
        {printf("nul\n");}

    return 0;



}