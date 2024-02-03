#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(0));
    int n = rand() %1000 +1;
    int guess = 2000;
    printf("%d\n", n);
    
    while (guess != n)
    {
        printf("donnez un nombre :\n");
        scanf("%d", &guess);

        if (guess == n){
            printf("bravo\n");
        }
        else if (guess < n)
        {
            printf("trop petit\n");
        }
        else if (guess > n){
            printf("trop grand\n");
        }

    }

    return 0;
    
    
}