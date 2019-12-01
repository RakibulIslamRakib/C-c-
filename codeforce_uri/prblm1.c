#include<stdio.h>
int main()
{
    int year,second;
    printf("Enter the year\n");
    scanf("%d",&year);

    if(year%400==0,year%4==0)
        second=366*24*3600;
        printf("%d year = %d second\n",year,second);
        else
        second=365*24*3600;
        printf("%d year = %d second\n",year,second);
}
