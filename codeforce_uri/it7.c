#include<stdio.h>
int main()
{
    int s=1,t;
    float area2,area3,area1,r;
    scanf("%d",&t);
    while(t--,s++)
    {
        scanf("%d",&r);
    area1=(2*r*2*r);
    area2=(3.14156*r*r);
    area3=(area1-area2);
    printf("Case %d: %.2f",s,area3);
    }

    return 0;

}
