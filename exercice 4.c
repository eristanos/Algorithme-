#include <stdio.h>;

int main(){
    int n = 1;
    int nbr_note = 0;
    float somme = 0;
    float moyenne;
    while(n != -1){
        printf("saisir note");
        scanf("%d", &n);
        if (n != -1){
            nbr_note++;
            somme = somme + n;

        }
    }
    moyenne = somme/nbr_note;
    printf("%f", moyenne);
    return 0;
}