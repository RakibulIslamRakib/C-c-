#include<stdio.h>
#include<math.h>
int main(){
     int i, n, a, sum = 0;
     scanf("%d", &n);
     for( i = 1; i <= n; i++){
          scanf("%d", &a);
          sum =sum + sqrt(a);
     }
     printf("%d", sum);
     return 0;
}
