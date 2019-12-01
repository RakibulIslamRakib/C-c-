#include <stdio.h>
int main()
{
    int x=5,y=7,*p,*q;
    p=&x; q=&y;
    printf("%d %d %d %d\n",*p,x,*q,y);
    *p=*q;
    printf("%d %d %d %d\n",*p,x,*q,y);
    x=12,y=15;
    printf("%d %d %d %d\n",*p,x,*q,y);
    p=q;
    printf("%d %d %d %d\n",*p,x,*q,y);
    printf("%d %d %d %d\n",p,x,q,y);
    (*p)++;
    (*q)++;
    printf("%d %d %d %d\n",*p,x,*q,y);
    return 0;

}
