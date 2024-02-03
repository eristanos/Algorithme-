#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    
    int play = 1;
    while (play != 0)
    {
        srand(time(0));
        int n = rand() %1000 +1;
        int guess = 2000;
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
        printf("veut tu rejouer(0 : non, 1 : oui\n)");
        scanf("%d", &play);
        
    }

    return 0;
    
    
}