#include <stdio.h>

void fonctionPolynome(float x,float *fx);

int main(){
    float x;
    float f;
    
    printf("saisissez votre variable");
    scanf("%f", &x);
    fonctionPolynome(x,&f);
    printf("la valeur est %f",f);

}


void fonctionPolynome(float x, float *fx){

    *fx=x*x+x-1;
}