#include<stdio.h>

int main()
{
    int n,t,sum=0,d,ans=0,count=0,temp;
    scanf("%d\n",&t);

    while(t--)

{

scanf("%d",&n);

         temp=n;
        while(temp>0)
    {
        temp=temp/10;
        count++;

    }


    //ans=0;
    d=n%10;
    while(count--)
    {
        ans=n%10;
        n=n/10;

    }
    {


      sum=(sum+ans+d);
      printf("%d\n",sum);

    }
      return 0;
}
