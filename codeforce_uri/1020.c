#include <stdio.h>
main()
{
    int a, y,m,d;
    scanf("%d",&a);
    y=(a/365);
    m=(a%365)/30;
    d=(a-(y*365)-(m*30));
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
}
