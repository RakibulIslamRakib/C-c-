#include<stdio.h>
int main()
{
    int ara[5],i,count=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i>100])
            count++;
    }
    printf("\n%d\n",count);
    return 0;

}
