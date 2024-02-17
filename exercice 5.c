#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    
    int play = 1;
    do
    {
        srand(time(NULL));
        int n = rand() %1000 +1;
        int nbr_tentatives = 0;
        int guess = 2000;
        do
        {
            printf("donnez un nombre :\n");
            scanf("%d", &guess);
            nbr_tentatives ++;
            if (guess == n){
                printf("bravo en %d tentatives seulement !\n", nbr_tentatives);
            }
            else if (guess < n)
            {
                printf("trop petit\n");
            
            }
            else if (guess > n){
                printf("trop grand\n");
            
            }

        }while(n != guess);
        printf("veut tu rejouer(0 : non, 1 : oui\n");
        scanf("%d", &play);
        
    }while (play == 1);
    

    return 0;
    
    
}