#include <stdio.h>
main()
{
    int  y;
    scanf("%d",&y);
   if(y<0)
            printf("sorry");
   else
    if(y%4==0)
            printf("Leap");
        else if (y%100!=0)
            printf("Look");
                else if (y%400==0)
                printf("Leap");
         else
            printf("Look");
   return 0;
    }
