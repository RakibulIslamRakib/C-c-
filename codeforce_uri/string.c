#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int length=0,i=0;

    scanf("%s",str);

   while(3)
   {
       if(str[i]=='\0')
       {
           break;
       }
       else
       {
           i++;
           length++;
       }
   }
   printf("%d",length);
    return 0;
}
