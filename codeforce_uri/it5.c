#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    if(a>=1 && a<=4)
        printf("few");
    else if(a>=5&&a<=9)
        printf("several");
    else if(a>=10&&a<=19)
        printf("pack");

    else if(a>=20&&a<=49)
    printf("lots");

        else if(a>=50&&a<=99)
            printf("horde");

        else if(a>=100&&a<=249)
            printf("throng");

        else if(a>=250&&a<=499)
            printf("swarm");

        else if(a>=500&&a<=999)
            printf("zounds");

        else if(a=1000)
            printf("legion");
        return 0;

}
