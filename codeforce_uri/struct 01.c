#include <stdio.h>
#include <string.h>

typedef struct {
int id;
float cgpa;
char mobile[50];
}student;

int main ()
{
    student s[10];
    int n=5;
    int i;
for(i=0;i<=n;i++){
        printf("Please give the ID:");
        scanf("%d",&s[i].id);
        printf("Please give the CGPA:");
        scanf("%f",&s[i].cgpa);
        printf("Please give the Mobile:");
        fflush(stdin);
        gets(s[i].mobile);
}
for(i=0;i<=n;i++)
printf("ID =%d\nCGPA =%f\nPHONE NO. =%s\n",s[i].id,s[i].cgpa,s[i].mobile);
return 0;
}


