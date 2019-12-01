#include<stdio.h>
int main()
 {
     int i,n=50,am,w,e,cs=0,s=0,sum=0;
     printf("   Which th week's record do you want: ",w);
     scanf("%d",&w);
     printf("\n Please enter the ammount of each member have to pay every week: ",w);
     scanf("%d",&am);
     printf("\n\n\t *#*. Your Records are given bellow :-\n",w);
 for(i=1;i<=w;i++)
      {
         s=n*am;
      if(s>=10000)
          {
             cs=s/10000;
             e=s-(cs*10000);
             n=n+cs;
             s=s+e;
             sum=sum+e;
        if(sum>=10000)
            {
             sum=sum-10000;
             cs=cs+1;
             e=s-(cs*10000);
             n=n+1;
             s=s+e;
            }
          }
       }
        printf("\n\t\t ##. This is the %dth week\n",w);
        printf("\n\t\t ##. The no of member = %d\n",n);
        printf("\n\t\t ##. The no of increas of member = %d\n",cs);
        printf("\n\t\t ##. The extra ammount = %d\n",sum);

        return 0;
    }
