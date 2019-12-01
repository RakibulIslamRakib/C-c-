#include<stdio.h>
int modduler(int n)

{
    int count=0;
    while(n>1)
    {
        if(n%2==0)
            n=n/2;
        else
         if(n%2==1)
         n=3*n+1;
        count++;
        printf("%d ",n);
    }
    return count;

}
int main()
{
    int x;
    scanf("%d",&x);
    modduler(x);
    return 0;
}



