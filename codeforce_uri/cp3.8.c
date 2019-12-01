#include<stdio.h>
int main ()
{
    int number, remainder;
    printf("Enter the number\n");
    scanf("%d",&number);
    remainder = number % 2;
    if (remainder == 0){
                            printf("the number is even\n");
                       }
    else{        printf("the number is odd\n");
        }
}
