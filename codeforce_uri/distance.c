#include<stdio.h>
#include<math.h>
int main()
{
    int  a,b,c,d,n,i;
    float  sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        sum=sqrt((a-c)*(a-c)+(b-d)*(b-d))+sum ;
    }
    printf("%.2f",sum);
    return 0;
}
