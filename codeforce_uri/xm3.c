#include<stdio.h>

int main()
{
   int n, first = 0, second=1, temp,i,sum=0;

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
         sum+=temp;
      }
      printf("%d\n",temp);


   }
    printf("sum:%d",sum);
   return 0;
}
