#include<stdio.h>
main()
{
    int a,b,t,x,gcd;
    scanf("%d %d",&a,&b);
    if (a==0) gcd=a;
    else if (b==0) gcd=b;
    else{
            while(b!=0) {
                            t=b;
                            b=a%b;
                            a=t;
                        }
                        gcd=a;

        }
        printf("GCD is %d\n",gcd);
}
