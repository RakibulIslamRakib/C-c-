#include <stdio.h>
int main()
{
    char name[20];
    float salary,sold,total_salary;
    gets (name);
    scanf("%f %f",&salary,&sold);
    total_salary=(salary+(sold*0.15)) ;
    printf
    printf("TOTAL = R$ %.2f\n",total_salary);
    return 0;
}
