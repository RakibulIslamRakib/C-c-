#include <stdio.h>
int main()
{
    int n, s,m,h;
    scanf("%d",&n);
    h=(n/3600);
    m=(n-(h*3600))/60;
    s=(n-(m*60)-(h*3600));
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
