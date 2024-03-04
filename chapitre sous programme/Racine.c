#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c);
int main()
{
    printf("saissisez les valeurs de a, b et c");
    int a,b,c;
    scanf("%f %f %f", &a,&b,&c);
    delta(a,b,c);
    return 0;
}
float delta(float a, float b, float c)
{
    float d = b*b-(4*a*c);
    if (d=0)
    {
        printf("une racine : %f", -b/2*a);
    }
    if(d < 0)
    {
        printf("pas de racine")
    }
    if(d<0)
        printf("deux racine : %f et %f",(-b-(sqrt(d))/2*a),(-b+(sqrt(d))/2*a));

    return 0;
}
