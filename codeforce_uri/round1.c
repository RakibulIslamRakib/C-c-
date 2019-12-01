#include<stdio.h>
int main()
{

    int y;
    double x,a,f;
    scanf("%lf",&a);
    x=a*100;
    y=(int)x%10;

        if(y==1)
           f=(a-.01) ;

        else if(y==2)
            f=(a-.02);
        else if(y==3)
            f=(a-.03);
        else if(y==4)
            f=(a-.04);
        else if(y==5)
            f=(a+.05);
        else if(y==6)
            f=(a+.040);
        else if(y==7)
            f=(a+.03);
        else if(y==8)
            f=(a+.02);
        else if(y==9)
            f=(a+.01);
        else
            f=a;

     printf("%.2lf",f);

        return 0;


}
