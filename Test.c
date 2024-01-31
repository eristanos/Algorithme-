#include <stdio.h>

int main(){
    int i,j;
    scanf("%d",&i);
    printf("%d\n",i);
    for(j=1;j<=10;j++){
        printf("%d x %d = %d\n", i,j,i*j);

    }
    return 0;

}

