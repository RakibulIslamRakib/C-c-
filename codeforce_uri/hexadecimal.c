#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char hex[17];
    long long decimal,place;
    int i=0,val,len;

    decimal=0;
    place=1;

    printf("Enter any hexadecimal number:\n");
    gets(hex);
    len=strlen(hex);
    len--;
    for(i=0;hex[i]!='\0';i++)
    {
        switch(hex[i])
        {
        case '0':
            val=0;
            break;
        case '1':
            val=1;
            break;
            case '2':
            val=2;
            break;
        case '3':
            val=3;
            break;
        case '4':
            val=4;
            break;
        case '5':
            val=5;
            break;
        case '6':
            val=6;
            break;
        case '7':
            val=7;
            break;
        case '8':
            val=8;
            break;
        case '9':
            val=9;
            break;
        case 'a':
        case 'A':
            val=10;
            break;
        case 'b':
        case 'B':
            val=11;
            break;
        case 'c':
        case 'C':
            val=12;
            break;
        case 'd':
        case 'D':
            val=13;
            break;
        case 'e':
        case 'E':
            val=14;
            break;
        case 'f':
        case 'F':
            val=10;
            break;
        }
        decimal +=val* pow(16, len);
        len--;
    }
    printf("hexadecimal number=%s\n",hex);
    printf("Decimal number =%lld",decimal);
    return 0;

}
