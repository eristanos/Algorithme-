#include <stdio.h>

void echange (int *a,int *b);

int main()
{
    int c = 5;
    int d = 3;
    echange(&c,&d);
    printf("c = %d, d = %d" ,c,d );
    return 0;   
}
void echange (int *a, int *b)
{
    int stock = *a;
    *a = *b;
    *b = stock;
    printf("c = %d, d = %d.\n",*a,*b);
}


