#include<stdio.h>
int main()
{
    int a,b,c,i;
    unsigned long long d=1;
    scanf("%d%d",&a,&b);
    if(a>b)
        c=a-b;
    else
        c=b-a;
    for(i=1;i<=c;i++)
        d=i*d;
    printf("%d! =  %llu\n",c,d);
    return 0;
}
