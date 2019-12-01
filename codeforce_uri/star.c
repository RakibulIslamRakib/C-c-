#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        for(i=0;i<j+1;i++)
                    {
                        printf("*");
                    }
     printf("\n");}
     return 0;
}
