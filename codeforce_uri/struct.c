#include <stdio.h>
#include <string.h>

struct student{
int id;
float cgpa;
char mobile[50];
};

int main (void){

struct student azhar;
//azhar.id=1602008;
//azhar.cgpa=2.30;
// zstrcpy(azhar.mobile,"01987456789");
printf("Input for azhar:\n");
input(&azhar);
print(&azhar);


return 0;
}

print(struct student *st){
printf("ID=%d\n",st->id);
printf("CGPA=%0.2f\n",st->cgpa);
printf("Mobile=%s\n",st->mobile);
}

input (struct student *st){
printf("Please give the ID:");
scanf("%d",&st->id);
printf("Please give the CGPA:");
scanf("%f",&st->cgpa);
printf("Please give the Mobile:");
gets(st->mobile);
gets(st->mobile); //why 2 gets????
}
