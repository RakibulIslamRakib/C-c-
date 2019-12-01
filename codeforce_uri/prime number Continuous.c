#include<stdio.h>

int main()
{
    int a,n,i,x;

    x=1;
    while(n>0)
    {
    x++;
    scanf("%d", &n);
    for (i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("Not Prime\n");
            break;
        }
    }
    if(i==n)
        printf("Prime\n");
    }
    return 0;
}
