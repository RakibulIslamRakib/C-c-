#include<stdio.h>
int main()
{
    int a,n,i,j,sum1,sum2;
    printf("Enter the low range: ");
    scanf("%d", &a);
    printf("Enter the High range: ");
    scanf("%d",&n);
    if (a%2==0 || a%2==1)
    {
        printf("\nThe Even numbers between a and %d are :\n",n);

        for(i=a;i<=n;i=i+2)
        {
            printf("%d   ",i);
            sum1=sum1+i;
            printf("The even number summation: %d",&sum1);
        }
        printf("\n\nThe Odd number between n and %d are :\n",n);

        for(j=a+1;j<=n;j=j+2)
        {
            printf("%d   ",j);
        }

    }
    printf("\n");
    return 0;
}
