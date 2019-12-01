#include<stdio.h>
int main()
{
    int b,n,i;
    scanf("%d",&n);

    for(i=1;i<=n;i=i+1){
        for(b=1;b<=i;b=b+1){
            printf("%d ",b);
            }
            printf("\n");
    }

    return 0;
}
