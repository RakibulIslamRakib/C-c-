#include<stdio.h>
int main()
{
    char a[30];
    int i,length;
    gets(a);
    length=0;
    for(i=0;a[i]!='\0';i++){
        length=length+1;
    }
    printf("%d",length);
    return 0;
}
