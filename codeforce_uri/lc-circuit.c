#include <stdio.h>
int main()
{
    float l,c,f;
    printf("Enter the value of l in mH:");
    scanf("%f",&l);
    printf("Enter the value of c in uF:");
    scanf("%f",&c);

    f=1/(2*3.14*sqrt(l/1000)*(c/1000000));
    printf("Resonance Frequance=%f",f);
    return 0;

}
