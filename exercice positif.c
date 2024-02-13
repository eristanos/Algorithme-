#include <stdio.h>


char test(int n);


int main(){
    int n;
    printf("donnez un nombre");
    scanf("%d",&n);
    printf(" cela est %c",test(n));
    return 0;

}

char test(int n)
{
    if(n>=0)
    {
        return('v');
    }
    
    else
    { 
        return('f');
}

}