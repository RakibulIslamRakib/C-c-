#include<stdio.h>
int main()
{
    printf("%d\n",123456);
    printf("%5d\n",123);
    printf("%-5d\n",123);
    printf("%-5d%-5d\n",123,456);
    printf("%05d%5d\n",123,456);
    printf("%5f\n",123.456);
    printf("%.2f\n",123.498);
    printf("%6.2f\n",23.456);
    printf("%*.*f\n",10,2,23.456);
    printf("Hexadecimal:%x\n",255);
    printf("Octal:%o\n",255);
    return 0;



}
