#include <stdio.h>
int fibo(int a,int b);
int main()
{
    int a=1,b=1,num,i,c;
    printf("Enter Range : ");
    scanf("%d",&num);
    printf("\n%d %d ",a,b);
    for (i=3;i<=num;i++)
    {
        c=fibo(a,b);
        printf("%d ",c);
        a=b;
        b=c;
    }
    printf("\n");
}
int fibo(int a,int b)
{
    return a+b;
}
