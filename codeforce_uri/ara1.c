#include <stdio.h>
int main()
{
    int ara[10];
    int i,sum=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&ara[i]);
        sum=sum+ara[i];
    }
    printf("%d",sum);
    return 0;
}
