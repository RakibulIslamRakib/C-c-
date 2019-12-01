#include<stdio.h>

int main()
{
   int n, first = 0, second=1, temp,i,sum;

   printf("Enter the last number\n");
   scanf("%d",&n);
   for ( i = 0 ;i < n ; i++ )
   {
      if ( i <= 1 )
         temp = i;
      else
      {
         temp = first + second;
         first = second;
         second = temp;
         //sum=temp++;
      }
      printf("%d\n",temp);


   }

   return 0;
}
