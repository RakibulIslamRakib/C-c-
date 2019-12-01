#include <stdio.h>
#include <math.h>
int main()
{
   int i,n,a;
   float sum=0;

   scanf("%d",&n);
   printf("%d\n",n);
   for(i=1;i<n;i++)
    {
        printf("%d\n",i);
        scanf("%d ",&a);
        sum+= sqrt(a);
        printf("sum = %f    ",sum);
    }

        printf("%f",sum);
        return 0;
}

