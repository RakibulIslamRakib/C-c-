#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g,h,i,j,k,l,avg;
    scanf("%f %f %f %f %f %f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l);
    avg=(float)(a+b+c+d+e+f+g+h+i+j+k+l)/12.00;
    printf("$%.2f",avg);
    return 0;

}
