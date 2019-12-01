#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+1;
    }
    printf("The sum %d\n",sum);
    return 0;
}
