#include <stdio.h>

float fonctionPolynome(float x);

int main(){
    float x;
    
    printf("saisissez votre variable");
    scanf("%f", &x);
    printf("la valeur est %f",fonctionPolynome(x));

}


float fonctionPolynome(float x){

    return(x*x+x-1);
}