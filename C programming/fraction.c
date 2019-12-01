#include<stdio.h>
int main()
{
    int a,b,s,i,j,k;
    scanf("%d",&s);
    i=s/2;
    while(0<i){
        a=i;
        b=s-i;
        for(j=2,k=0;j<=a;j++){
            if(b%j==0&&a%j==0){
                k++;
            }
        }
        if(k==0){
            break;
        }
        i--;
    }
    printf("%d %d\n",a,b);
    return 0;
}
