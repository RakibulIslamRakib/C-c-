#include<stdio.h>
int main()
{
    int int m=0,n=5,i;

    for(i=1;i<=10;i++){
        m=m+n;
        printf("%d * %d = %d\n",n,i,m);
    }
}
