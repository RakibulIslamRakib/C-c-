#include <stdio.h>
int main ()
{
    int b,e,m,p,c,bi,GPA;
    printf("bangla :");
    scanf("%f",&b);
    printf("english :");
    scanf("%f",&e);
    printf("math :");
    scanf("%f",&m);
    printf("physics :");
    scanf("%f",&p);
    printf("chemistry :");
    scanf("%f",&c);
    printf("biology :");
    scanf("%f",&bi);
    if(b>=80)
    {
        printf("GPA=5.00",b);
    }
    else if (b>=70 &&b<80)
    {
        printf("GPA=4.50",b);
    }
    else if (b>=60 &&b<70)
    {
        printf("GPA=4.00", b);
    }
    else if (b>=50 &&b<60)
    {
        printf("GPA=3.50",b);
    }
    else if (b>=40 &&b<50)
    {
        printf("GPA=3.00", b);
    }
    else if (b>=00 &&b<40)
    {
        printf("GPA=0.00",b);
    }
    if(e>=80)
    {
        printf("GPA=5.00",e);
    }
    else if (e>=70 &&e<80)
    {
        printf("GPA=4.50",e);
    }
    else if (e>=60 &&e<70)
    {
        printf("GPA=4.00", e);
    }
    else if (e>=50 &&e<60)
    {
        printf("GPA=3.50",e);
    }
    else if (e>=40 &&e<50)
    {
        printf("GPA=3.00", e);
    }
    else if (e>=00 &&e<40)
    {
        printf("GPA=0.00",e);
    }
    if(m>=80)
    {
        printf("GPA=5.00",m);
    }
    else if (m>=70 &&m<80)
    {
        printf("GPA=4.50",m);
    }
    else if (m>=60 &&m<70)
    {
        printf("GPA=4.00", m);
    }
    else if (m>=50 &&m<60)
    {
        printf("GPA=3.50",m);
    }
    else if (m>=40 &&m<50)
    {
        printf("GPA=3.00", m);
    }
    else if (m>=00 &&m<40)
    {
        printf("GPA=0.00",m);
    }
    if(p>=80)
    {
        printf("GPA=5.00",p);
    }
    else if (p>=70 &&p<80)
    {
        printf("GPA=4.50",p);
    }
    else if (p>=60 &&p<70)
    {
        printf("GPA=4.00", p);
    }
    else if (p>=50 &&p<60)
    {
        printf("GPA=3.50",p);
    }
    else if (p>=40 &&p<50)
    {
        printf("GPA=3.00", p);
    }
    else if (p>=00 &&p<40)
    {
        printf("GPA=0.00",p);
    }
    if(c>=80)
    {
        printf("GPA=5.00",c);
    }
    else if (c>=70 &&c<80)
    {
        printf("GPA=4.50",c);
    }
    else if (c>=60 &&c<70)
    {
        printf("GPA=4.00", c);
    }
    else if (c>=50 &&c<60)
    {
        printf("GPA=3.50",c);
    }
    else if (c>=40 &&c<50)
    {
        printf("GPA=3.00", c);
    }
    else if (c>=00 &&c<40)
    {
        printf("GPA=0.00",c);
    }
    if(bi>=80)
    {
        printf("GPA=5.00",bi);
    }
    else if (bi>=70 &&bi<80)
    {
        printf("GPA=4.50",bi);
    }
    else if (bi>=60 &&bi<70)
    {
        printf("GPA=4.00", bi);
    }
    else if (bi>=50 &&bi<60)
    {
        printf("GPA=3.50",bi);
    }
    else if (bi>=40 &&bi<50)
    {
        printf("GPA=3.00", bi);
    }
    else if (bi>=00 &&bi<40)
    {
        printf("GPA=0.00",bi);
    }
    printf("GPA=b+e+m+p+c+bi/6",GPA);
    return 0;
}
